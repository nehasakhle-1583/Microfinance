# project title
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

### Transaction Features

Deposit

Withdraw

Check balance

### Loan Features

-Issue loans
-Calculate interest
-EMI/Due generation
-Loan repayment module

### Backend Features

-Uses file handling (fopen, fread, fwrite)
-Stores all records securely
-Works offline and requires no database

### Project Structure
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

## Abstract
  Microfinance and cooperative banking are financial systems designed to provide affordable credit, savings, and other financial services to underserved communities. Unlike traditional banks, these institutions focus on inclusivity, empowering low‑income individuals, small entrepreneurs, and rural populations by offering small loans, collective savings schemes, and community‑driven governance. Their core mission is to promote financial literacy, reduce poverty, and foster sustainable economic development through trust‑based, member‑owned models.

  ## summary
    Microfinance and cooperative banking provide small loans, savings, and financial services to underserved communities. They empower low‑income individuals and small entrepreneurs, promote financial inclusion, and strengthen local economies through member‑owned, trust‑based models.

<img width="703" height="202" alt="Screenshot 2025-12-01 010913" src="https://github.com/user-attachments/assets/43fbebb1-2640-4be1-a0f8-8f802f2f5e59" />
<img width="331" height="105" alt="Screenshot 2025-12-01 011104" src="https://github.com/user-attachments/assets/7f6cb30b-d587-4578-85e3-118468b540fa" />
<img width="366" height="90" alt="Screenshot 2025-12-01 011051" src="https://github.com/user-attachments/assets/16bde8ac-250f-4dfa-b6f4-83e63d9025d6" />
<img width="500" height="272" alt="Screenshot 2025-12-01 010941" src="https://github.com/user-attachments/assets/457a4e56-b8e9-4ecf-bc31-d9a689851572" />
