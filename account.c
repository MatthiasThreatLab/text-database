#include "account.h"
#include <stdlib.h> // for malloc/free
#include <stdio.h> // for printf (example)

// The actual structure definition (private to this file)
struct Account {
    int balance;
    // other private data
};

// Function implementations
Account* account_create(int initial_balance) {
    Account* new_acc = (Account*)malloc(sizeof(struct Account));
    if (new_acc != NULL) {
        new_acc->balance = initial_balance;
    }
    return new_acc;
}

void account_deposit(Account* acc, int amount) {
    if (acc != NULL) {
        acc->balance += amount;
    }
}

int account_get_balance(Account* acc) {
    if (acc != NULL) {
        return acc->balance;
    }
    return -1; // Error value
}

void account_destroy(Account* acc) {
    free(acc);
}
