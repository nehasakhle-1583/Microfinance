### project title
 microfinance/cooperative banking
 
## Functional Requirements
1. Customer & Account Management

System should allow creation of new accounts.

Each customer must have a unique account number.

Store and retrieve customer data from files.

Search customers by account number.

2. Transactions

Deposit amount into an account.

Withdraw amount with sufficient balance check.

Check current account balance.

Maintain transaction updates in data storage.

3. Loan Management

Issue new loans to existing customers.

Calculate interest and total due amount.

Store loan details in persistent storage.

Allow loan repayment and update remaining balance.

4. Data Persistence

All account and loan information must be saved in files.

Data should remain available after program exit.

5. User Interface (Console)

Menu-driven interface.

Options to navigate account/loan modules.

Input validations for numeric and string data.

## Features
-Account Features
-Create customer account
-Display all accounts
-Search account
-Update balance after each transaction
-File-based storage using structures

# Transaction Features

Deposit

Withdraw

Check balance

# Loan Features

-Issue loans
-Calculate interest
-EMI/Due generation
-Loan repayment module

# Backend Features

-Uses file handling (fopen, fread, fwrite)
-Stores all records securely
-Works offline and requires no database

# Project Structure
microfinance/
│
├── main.c              # Entry point
├── accounts.c          # Customer account functions
├── accounts.h
├── loans.c             # Loan management functions
├── loans.h
├── data/               # Accounts & loans file storage
│   ├── accounts.dat
│   └── loans.dat
└── README.md

 Compilation & Execution
 Requirements

GCC Compiler

Any C-supported IDE (VS Code, CodeBlocks, Dev-C++, Turbo C, etc.)

## How to Run the Code
1. Clone the repository
git clone https://github.com/yourusername/microfinance-system.git
cd microfinance-system
2. Compile the project
If you have multiple source files:

gcc main.c accounts.c loans.c -o microfinance

If you have a single main.c:

gcc main.c -o microfinance

3. Run the program

Windows CMD:

microfinance.exe

Linux/Mac:

./microfinance
