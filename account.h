#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct Account Account; // Opaque pointer for basic encapsulation

// Public function prototypes (methods)
Account* account_create(int initial_balance);
void account_deposit(Account* acc, int amount);
int account_get_balance(Account* acc);
void account_destroy(Account* acc);

#endif // ACCOUNT_H