#include<iostream>
#include<string>
#include<vector>
#include"Product.h"
#include"Builder.h"
#include"ConcreteBuilder1.h"
#include"Director.h"

Director::Director(/* args */)
{
}

Director::~Director()
{
}

void Director::SetBuilder(Builder* builder){
    this->builder=builder;
}

void Director::BuildMinimalViableProduct(){
    this->builder->ProducePartA();
}

void Director::BuildFullFeaturedProduct(){
    this->builder->ProducePartA();
    this->builder->ProducePartB();
    this->builder->ProducePartC();
}