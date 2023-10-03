#pragma once

#include <string>

class Product {
private:
    std::string productCode;
    std::string description;
    double price;

public:
    Product(const std::string& code, const std::string& desc, double p);
    std::string getProductCode() const;
    std::string getDescription() const;
    double getPrice() const;
    void setProductCode(const std::string& code);
    void setDescription(const std::string& desc);
    void setPrice(double p);
};


