class AbstractHandler : public Handler {
  /**
   * @var Handler
   */
 private:
  Handler *next_handler_;

 public:
  AbstractHandler() : next_handler_(nullptr) {};
  Handler *SetNext(Handler *handler) override;
  std::string Handle(std::string request) override;
};