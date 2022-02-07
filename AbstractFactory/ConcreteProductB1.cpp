#include<string>
#include"AbstractProductB.h"
#include"ConcreteProductB1.h"

std::string ConcreteProductB1::UsefulFunctionB() const {
    return "The result of the product B1.";
}