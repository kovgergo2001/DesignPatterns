#include<string>
#include"Handler.hpp"
#include"AbstractHandler.hpp"

Handler* AbstractHandler::SetNext(Handler *handler) {
    this->next_handler_ = handler;
    return handler;
}

std::string AbstractHandler::Handle(std::string request) {
if (this->next_handler_) {
    return this->next_handler_->Handle(request);
}

return "";
};
