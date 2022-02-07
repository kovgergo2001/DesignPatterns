#include <string>
#include <iostream>
#include "Command.hpp"
#include "SimpleCommand.hpp"  
	
SimpleCommand::SimpleCommand(std::string pay_load) {
	this->payLoad = pay_load;
}

void SimpleCommand::Execute() const {
    std::cout << "SimpleCommand: " << this->payLoad << "\n";
}