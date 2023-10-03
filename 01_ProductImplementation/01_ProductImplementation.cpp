#include <iostream>
#include "product.h"

// implementation of the UML
int main() {
    Product product("P001", "Sample Product", 19.99);

    std::cout << "Product Code: " << product.getProductCode() << std::endl;
    std::cout << "Description: " << product.getDescription() << std::endl;
    std::cout << "Price: $" << product.getPrice() << std::endl;

    product.setPrice(24.99);
    std::cout << "Updated Price: $" << product.getPrice() << std::endl;

    return 0;
}