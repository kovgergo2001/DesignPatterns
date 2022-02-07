#include<iostream>
#include<string>
#include<vector>
#include"Product.h"
#include"Builder.h"
#include"ConcreteBuilder1.h"


ConcreteBuilder1::ConcreteBuilder1(/* args */)
{
}

ConcreteBuilder1::~ConcreteBuilder1()
{
}

Product* ConcreteBuilder1::GetProduct() {
    return product;
}

void ConcreteBuilder1::ProducePartA() const
{
    this->product->AddParts("PartA1");
}

void ConcreteBuilder1::ProducePartB() const
{
    this->product->AddParts("PartB1");
}

void ConcreteBuilder1::ProducePartC() const
{
    this->product->AddParts("PartC1");
}
