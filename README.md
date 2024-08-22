# Digital-Wallet-Management-System

## Description

This program manages user transactions by simulating the transfer of funds between users. It maintains a record of user IDs and their corresponding balances. Users can perform transactions where funds are transferred from one user to another. The program also sorts the users by their balance after all transactions are processed.

## Features

- **Input Users**: Reads the initial list of users with their IDs and balances.
- **Process Transactions**: Executes a series of transactions where users can transfer funds between each other.
- **Validation**: Ensures transactions only occur if the sender has enough funds.
- **Output**: After processing all transactions, the program sorts users by their balance and outputs the sorted list.

## Usage

### Input Format

1. **Number of Users (N)**: The first line contains an integer `N` (1 ≤ N ≤ 1000) representing the number of users.
2. **User Details**: The next `N` lines each contain two integers:
   - The user ID (unique for each user).
   - The initial balance of the user.
3. **Number of Transactions (T)**: The line following the user details contains an integer `T` (1 ≤ T ≤ 1000) representing the number of transactions.
4. **Transaction Details**: The next `T` lines each contain three integers:
   - The user ID of the sender.
   - The user ID of the receiver.
   - The amount of money to be transferred.

### Output Format

- **Transaction Results**: For each transaction, output "Success" if the transaction is completed successfully, otherwise "Failure".
- **Sorted Users**: After all transactions, output each user's ID followed by their final balance, sorted in ascending order of balances.

### Example

**Input:**
3
1 100
2 150
3 200
3
1 2 50
2 3 100
1 3 30

**Output:**
Success
Success
Failure
1 20
2 200
3 270


## Compilation and Execution

1. **Compile**: Use a C++ compiler to compile the code. For example, using `g++`:
   ```bash
   g++ -o user_transaction "digital management system.cpp"

2. **Run**: Execute the compiled program:
   ```bash
   ./user_transaction
   
## Dependencies

C++ Standard Library: The program uses standard C++ libraries and does not require additional dependencies.

## Notes

Ensure that the input data is provided in the exact format as specified.
The program assumes user IDs are unique and correctly formatted