#include <stdio.h>
#include <string.h>

#define MAX_MEMBERS 100

// Structure for a client/member
typedef struct {
    int id;
    char name[50];
    float loan_balance;
} Member;

Member members[MAX_MEMBERS];
int member_count = 0;

// Function to add a member
void addMember() {
    if (member_count >= MAX_MEMBERS) {
        printf("Member limit reached!\n");
        return;
    }

    Member m;
    printf("Enter Member ID: ");
    scanf("%d", &m.id);

    // Check if ID already exists
    for (int i = 0; i < member_count; i++) {
        if (members[i].id == m.id) {
            printf("Member with this ID already exists!\n");
            return;
        }
    }

    printf("Enter Member Name: ");
    getchar(); // clear newline
    fgets(m.name, sizeof(m.name), stdin);
    m.name[strcspn(m.name, "\n")] = '\0'; // remove newline

    m.loan_balance = 0.0;

    members[member_count++] = m;
    printf("Member added successfully!\n\n");
}

// Function to issue a loan
void issueLoan() {
    int id;
    printf("Enter Member ID: ");
    scanf("%d", &id);

    for (int i = 0; i < member_count; i++) {
        if (members[i].id == id) {
            float amount;
            printf("Enter Loan Amount: ");
            scanf("%f", &amount);
            members[i].loan_balance += amount;
            printf("Loan of %.2f issued successfully!\n\n", amount);
            return;
        }
    }
    printf("Member not found!\n\n");
}

// Function to repay a loan
void repayLoan() {
    int id;
    printf("Enter Member ID: ");
    scanf("%d", &id);

    for (int i = 0; i < member_count; i++) {
        if (members[i].id == id) {
            float amount;
            printf("Enter Repayment Amount: ");
            scanf("%f", &amount);

            if (amount > members[i].loan_balance) {
                printf("Repayment exceeds balance. Adjusting to full repayment.\n");
                amount = members[i].loan_balance;
            }

            members[i].loan_balance -= amount;
            printf("Repayment of %.2f accepted.\n\n", amount);
            return;
        }
    }

    printf("Member not found!\n\n");
}

// Function to view all members
void viewMembers() {
    if (member_count == 0) {
        printf("No members available.\n\n");
        return;
    }

    printf("\n--- Member List ---\n");
    for (int i = 0; i < member_count; i++) {
        printf("ID: %d | Name: %s | Loan Balance: %.2f\n",
               members[i].id, members[i].name, members[i].loan_balance);
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("==== Microfinance / Cooperative Banking System ====\n");
        printf("1. Add Member\n");
        printf("2. Issue Loan\n");
        printf("3. Repay Loan\n");
        printf("4. View All Members\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addMember(); break;
            case 2: issueLoan(); break;
            case 3: repayLoan(); break;
            case 4: viewMembers(); break;
            case 5: 
                printf("Exiting system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n\n");
        }
    }

    return 0;
}
