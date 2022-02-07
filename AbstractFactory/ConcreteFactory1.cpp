#include<string>
#include"AbstractProductA.h"
#include"AbstractProductB.h"
#include"AbstractFactory.h"
#include"ConcreteProductA1.h"
#include"ConcreteProductB1.h"
#include"ConcreteFactory1.h"

AbstractProductA* ConcreteFactory1 :: CreateProductA() const
{
    return new ConcreteProductA1();
}

AbstractProductB* ConcreteFactory1 :: CreateProductB() const
{
    return new ConcreteProductB1();
}