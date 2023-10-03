#include "Product.h"
#include "Product.h"

Product::Product(const std::string& code, const std::string& desc, double p)
    : productCode(code), description(desc), price(p) {}

std::string Product::getProductCode() const {
    return productCode;
}

std::string Product::getDescription() const {
    return description;
}

double Product::getPrice() const {
    return price;
}

void Product::setProductCode(const std::string& code) {
    productCode = code;
}

void Product::setDescription(const std::string& desc) {
    description = desc;
}

void Product::setPrice(double p) {
    price = p;
}
