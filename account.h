#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "customer.h"

class Account {
private:
    Customer customer;
    double balance;

public:
    Account(const Customer& accountHolder, double initialBalance);

    Customer getCustomer() const;
    double getBalance() const;
};

#endif // ACCOUNT_H
