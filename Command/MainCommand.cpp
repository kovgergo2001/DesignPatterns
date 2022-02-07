#include <iostream>
#include <string>
#include "Command.hpp"
#include "SimpleCommand.hpp"
#include "Receiver.hpp"
#include "ComplexCommand.hpp"
#include "Invoker.hpp"

void MainCommandFunc() {
    Invoker *invoker = new Invoker;
    invoker->SetOnStart(new SimpleCommand("Say Hi!"));
    Receiver *receiver = new Receiver;
    invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->DoSomethingImportant();

    delete invoker;
    delete receiver;
}