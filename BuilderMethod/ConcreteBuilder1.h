class ConcreteBuilder1 : public Builder
{
private:
    Product* product = new Product();
public:
    ConcreteBuilder1(/* args */);
    ~ConcreteBuilder1();
    Product* GetProduct();
    void ProducePartA()const override;
    void ProducePartB()const override;
    void ProducePartC()const override;
};