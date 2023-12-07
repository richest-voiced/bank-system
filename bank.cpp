#include "bank.h"
#include <iostream>

Bank::Bank(const std::string& bankName) : name(bankName) {}

void Bank::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Bank::createAccount(const Customer& customer, double initialBalance) {
    Account account(customer, initialBalance);
    accounts.push_back(account);
}

void Bank::processTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void Bank::displayCustomers() const {
    for (const auto& customer : customers) {
        std::cout << "Customer: " << customer.getName() << std::endl;
    }
}

void Bank::displayAccounts() const {
    for (const auto& account : accounts) {
        std::cout << "Account Holder: " << account.getCustomer().getName()
                  << ", Balance: $" << account.getBalance() << std::endl;
    }
}

void Bank::displayTransactions() const {
    for (const auto& transaction : transactions) {
        std::cout << "Transaction: " << transaction.getType() << ", Amount: $"
                  << transaction.getAmount() << std::endl;
    }
}

void Bank::run() {
    // Your banking system logic goes here
}
