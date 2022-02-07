class ConcreteFactory1: public AbstractFactory {
 public:
  AbstractProductA* CreateProductA() const override;
  AbstractProductB* CreateProductB() const override;
};