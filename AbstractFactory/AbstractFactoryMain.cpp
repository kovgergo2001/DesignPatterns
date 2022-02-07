#include<iostream>
#include<string>
#include"AbstractProductA.h"
#include"AbstractProductB.h"
#include"AbstractFactory.h"
#include"ConcreteProductA1.h"
#include"ConcreteProductA2.h"
#include"ConcreteProductB1.h"
#include"ConcreteProductB2.h"
#include"ConcreteFactory1.h"
#include"ConcreteFactory2.h"
#include"AbstractFactoryMain.h"

using namespace std;

void ClientCode(AbstractFactory &factory) {
  AbstractProductA *product_a = factory.CreateProductA();
  AbstractProductB *product_b = factory.CreateProductB();
  std::cout << product_b->UsefulFunctionB() << "\n";
  std::cout << product_a->UsefulFunctionA() << "\n";
}

void MainAbstractFactoryFunc() {
  std::cout << "Client: Testing client code with the first factory type:\n";
  ConcreteFactory1 *f1 = new ConcreteFactory1();
  ClientCode(*f1);
  std::cout << std::endl;
  std::cout << "Client: Testing the same client code with the second factory type:\n";
  ConcreteFactory2 *f2 = new ConcreteFactory2();
  ClientCode(*f2);
}