class ConcreteFactory2: public AbstractFactory {
 public:
  AbstractProductA* CreateProductA() const override;
  AbstractProductB* CreateProductB() const override;
};