#include<string>
#include"Handler.hpp"
#include"AbstractHandler.hpp"
#include"MonkeyHandler.hpp"


std::string MonkeyHandler::Handle(std::string request) {
    if (request == "Banana") {
      return "Monkey: I'll eat the " + request + ".\n";
    } else {
      return AbstractHandler::Handle(request);
    }
}