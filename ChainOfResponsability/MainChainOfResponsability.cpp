#include<iostream>
#include<string>
#include"Handler.hpp"
#include"AbstractHandler.hpp"
#include"CatHandler.hpp"
#include"DogHandler.hpp"
#include"MonkeyHandler.hpp"
#include"MainChainOfResponsability.hpp"
#include<vector>

void ClientCode(Handler &handler) {
  std::vector<std::string> food = {"Bone", "Banana", "Milk", "Sugar Cube"};
  for (const std::string &f : food) {
    std::cout << "Client: Who wants a " << f << "?\n";
    const std::string result = handler.Handle(f);
    if (!result.empty()) {
      std::cout << "  " << result;
    } else {
      std::cout << "  " << f << " was left untouched.\n";
    }
  }
}

void MainChainOfResponsabilityFunc() {
  MonkeyHandler* monkeyHandler = new MonkeyHandler();
  CatHandler* catHandler = new CatHandler();
  DogHandler* dogHandler = new DogHandler();

  monkeyHandler->SetNext(catHandler)->SetNext(dogHandler);

  std::cout<<"monkey -> cat -> dog:\n";
  ClientCode(*monkeyHandler);

  std::cout<<"monkey -> cat -> dog:\n";
  ClientCode(*catHandler);
}
