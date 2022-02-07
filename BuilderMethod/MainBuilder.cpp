#include<iostream>
#include<string>
#include<vector>
#include"Product.h"
#include"Builder.h"
#include"ConcreteBuilder1.h"
#include"Director.h"
#include"MainBuilder.h"

void ClientCode(Director& director)
{
    ConcreteBuilder1* builder = new ConcreteBuilder1();
    director.SetBuilder(builder);
    std::cout << "Standard basic product:\n"; 
    
    director.BuildMinimalViableProduct();
    Product* p= builder->GetProduct();
    p->ListParts();

    std::cout << "Standard full featured product:\n"; 
    builder = new ConcreteBuilder1();
    director.SetBuilder(builder);
    director.BuildFullFeaturedProduct();
    
    
    p= builder->GetProduct();
    p->ListParts();

    std::cout << "Custom product:\n";
    builder = new ConcreteBuilder1();
    builder->ProducePartA();
    builder->ProducePartC();
    p=builder->GetProduct();
    p->ListParts();
    
}

void MainBuilderFunc(){
    Director* director= new Director();
    ClientCode(*director);
    delete director;  
}