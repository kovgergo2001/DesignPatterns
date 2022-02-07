#include<string>
#include"Product.h"
#include"Product2.h"
#include"Creator.h"
#include"Creator2.h"

Product* Creator2 :: GetProduct() const {
    return new Product2();
}