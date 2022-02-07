#include<iostream>
#include<string>
#include"Product.h"
#include"Product1.h"
#include"Product2.h"
#include"Creator.h"
#include"Creator1.h"
#include"Creator2.h"
#include"FactoryMain.h"

using namespace std;

void ClientCode(Creator& creator) {

    Product* myProduct = creator.GetProduct();
    cout << "Created: " << myProduct->UsefulFunction();
}


void MainFactoryFunc() {
    cout<<"Factory Method started!\n";
    Creator* creator1 = new Creator1();
    Creator* creator2 = new Creator2();

    ClientCode(*creator1);
    ClientCode(*creator2);
    cout<<"Factory Method ended!\n";
}