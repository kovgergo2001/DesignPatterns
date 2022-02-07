#include <iostream>
#include "Command.hpp"
#include "Invoker.hpp"

Invoker::~Invoker() 
{
    delete onFinish;
    delete onStart;
}

void Invoker::SetOnStart(Command *command) 
{
    this->onStart = command;
}

void Invoker::SetOnFinish(Command *command) 
{
    this->onFinish = command;
}

void Invoker::DoSomethingImportant() 
{
    std::cout << "Invoker: Does anybody want something done before I begin?\n";
    if (this->onStart) {
      this->onStart->Execute();
    }
    std::cout << "Invoker: doing something\n";
    std::cout << "Invoker: Does anybody want something done after I finish?\n";
    if (this->onFinish) {
      this->onFinish->Execute();
    }
}
