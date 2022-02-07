#include <iostream>
#include "AbstractFactory/AbstractFactoryMain.h"
#include "FactoryMethod/FactoryMain.h"
#include "BuilderMethod/MainBuilder.h"
#include "Adapter/MainAdapter.h"
#include "Bridge/MainBridge.hpp"
#include "Command/MainCommand.hpp"
#include "ChainOfResponsability/MainChainOfResponsability.hpp"

using namespace std;

int main() {
    cout<<"\n-------------------------------------\nCreational Design Patterns:\n-------------------------------------\n";
    cout<<"\n-------------------------------------\nAbstractFactory:\n-------------------------------------\n";
    MainAbstractFactoryFunc();

    cout<<"\n-------------------------------------\nFactory:\n-------------------------------------\n";
    MainFactoryFunc();

    cout<<"\n-------------------------------------\nBuilder:\n-------------------------------------\n";
    MainBuilderFunc();

    cout<<"\n-------------------------------------\nStructural Design Patterns:\n-------------------------------------\n";

    cout<<"\n-------------------------------------\nAdapter:\n-------------------------------------\n";
    MainAdapterFunc();

    cout<<"\n-------------------------------------\nBridge:\n-------------------------------------\n";
    MainBridgeFunc();


    cout<<"\n-------------------------------------\nBehavioral Design Patterns:\n-------------------------------------\n";

    cout<<"\n-------------------------------------\nChainOfResponsability:\n-------------------------------------\n";
    MainChainOfResponsabilityFunc();

    cout<<"\n-------------------------------------\nCommand:\n-------------------------------------\n";
    MainCommandFunc();
}