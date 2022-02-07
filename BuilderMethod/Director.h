class Director
{
private:
    Builder* builder;
public:
    Director(/* args */);
    ~Director();
    void SetBuilder(Builder* builder);
    void BuildMinimalViableProduct();
    void BuildFullFeaturedProduct();
};
