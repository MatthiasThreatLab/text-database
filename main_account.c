#include "account.h"
#include <stdio.h>

int main() {
    Account* my_account = account_create(100);
    if (my_account != NULL) {
        account_deposit(my_account, 50);
        printf("Balance: %d\n", account_get_balance(my_account));
        account_destroy(my_account);
    }
    return 0;
}
