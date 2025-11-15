#include <stdio.h>
#include <string.h>

struct Customer {
    int accNo;
    char name[50];
    float balance;
};

void printLowBalance(struct Customer c[], int n) {
    printf("\nCustomers with balance below Rs. 100:\n");

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", c[i].accNo, c[i].name);
            found = 1;
        }
    }

    if (!found)
        printf("No customer has balance below Rs. 100.\n");
}

void transaction(struct Customer c[], int n, int acc, float amount, int code) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (c[i].accNo == acc) {
            found = 1;

            if (code == 1) {  // Deposit
                c[i].balance += amount;
                printf("\nDeposit successful.\nNew Balance = Rs. %.2f\n", c[i].balance);
            }

            else if (code == 0) { // Withdrawal
                if (c[i].balance < amount) {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                } else {
                    c[i].balance -= amount;
                    printf("\nWithdrawal successful.\nNew Balance = Rs. %.2f\n", c[i].balance);
                }
            }

            return;
        }
    }

    if (!found)
        printf("\nAccount number not found!\n");
}

int main() {
    struct Customer c[10];
    int n = 10;

    printf("Enter data for 10 customers:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCustomer %d:\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &c[i].accNo);
        fflush(stdin);

        printf("Name: ");
        gets(c[i].name);

        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    printLowBalance(c, n);

    int acc, code;
    float amt;

    printf("\nEnter transaction details\n");
    printf("Account Number: ");
    scanf("%d", &acc);

    printf("Amount: ");
    scanf("%f", &amt);

    printf("Code (1 = Deposit, 0 = Withdrawal): ");
    scanf("%d", &code);

    transaction(c, n, acc, amt, code);

    return 0;
}