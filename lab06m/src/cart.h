#pragma once

#include <string>
#include <vector>
#include "product.h"
#include "discount.h"

using std::string;
using std::vector;

class Cart {
public:
    Cart();
<<<<<<< HEAD
    void add(string productName, double unitPrice, unsigned qty);
=======
    void add(Product product, unsigned qty);
>>>>>>> f3d546a (ggg)
    void set(Discount *discount);
    double total();
private:
    vector<Product> products;
    Discount* discount;
};