#include<string>
#include"Product.h"
#include"Product1.h"
#include"Creator.h"
#include"Creator1.h"

Product* Creator1 :: GetProduct() const {
    return new Product1();
}