#include "table.h"
#include <stdlib.h> // for malloc/free
#include <stdio.h> // for printf (example)

#include <stdarg.h>
// ... means “variable number of arguments”
// You must pass at least one fixed parameter (here count)
// va_list, va_start, va_arg, va_end let you read the arguments safely
int newFunction(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

// The actual structure definition (private to this file)
struct Table {
    int numberOfColumns;
    // other private data
};

// Function implementations
Table* account_create(int numberOfColumns, ...) {
    Table* newTable = (Table*)malloc(sizeof(struct Table));
    if (newTable != NULL) {
        // new_acc->balance = initial_balance;
    }
    return newTable;
}

// void account_deposit(Account* acc, int amount) {
//     if (acc != NULL) {
//         acc->balance += amount;
//     }
// }

// int account_get_balance(Account* acc) {
//     if (acc != NULL) {
//         return acc->balance;
//     }
//     return -1; // Error value
// }

void account_destroy(Table* table) {
    free(table);
}