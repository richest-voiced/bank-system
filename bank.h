#ifndef BANK_H
#define BANK_H

#include "customer.h"
#include "account.h"
#include "transaction.h"
#include <vector>

class Bank {
private:
    std::string name;
    std::vector<Customer> customers;
    std::vector<Account> accounts;
    std::vector<Transaction> transactions;

public:
    Bank(const std::string& bankName);

    void addCustomer(const Customer& customer);
    void createAccount(const Customer& customer, double initialBalance);
    void processTransaction(const Transaction& transaction);
    void displayCustomers() const;
    void displayAccounts() const;
    void displayTransactions() const;
    void run();
};

#endif // BANK_H
