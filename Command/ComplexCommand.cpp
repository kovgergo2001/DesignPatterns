#include <iostream>
#include <string>
#include "Command.hpp"
#include "Receiver.hpp"
#include "ComplexCommand.hpp"  

ComplexCommand::ComplexCommand(Receiver *receiverP, std::string aP, std::string bP) 
{
    this->receiver = receiverP;
    this->a = aP;
    this->b = bP;
}

void ComplexCommand::Execute() const 
{
    std::cout << "ComplexCommand: Complex stuff should be done by a receiver object.\n";
    this->receiver->DoSomething(this->a);
    this->receiver->DoSomethingElse(this->b);
}
