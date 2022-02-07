class Product
{
private:
    std::vector<std::string> parts_;
public:
    Product();
    void ListParts();
    void AddParts(std::string text);
};
