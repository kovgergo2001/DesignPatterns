#include<string>
#include"Handler.hpp"
#include"AbstractHandler.hpp"
#include"CatHandler.hpp"


std::string CatHandler::Handle(std::string request) {
    if (request == "Milk") {
      return "Cat: I'll eat the " + request + ".\n";
    } else {
      return AbstractHandler::Handle(request);
    }
}