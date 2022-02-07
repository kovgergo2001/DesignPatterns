#include<string>
#include"Handler.hpp"
#include"AbstractHandler.hpp"
#include"DogHandler.hpp"


std::string DogHandler::Handle(std::string request) {
    if (request == "Bone") {
      return "Dog: I'll eat the " + request + ".\n";
    } else {
      return AbstractHandler::Handle(request);
    }
}