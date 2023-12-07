#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;

public:
    Customer(const std::string& customerName);

    std::string getName() const;
};

#endif // CUSTOMER_H
