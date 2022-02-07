#include<iostream>
#include<string>
#include<vector>
#include"Product.h"

Product::Product() {
    parts_.reserve(10);
}

void Product::ListParts() {
    std::cout << "Product parts: ";
    for(size_t i = 0; i < parts_.size(); i++) {
    std::cout << parts_[i] << " ";
    }
    std::cout << "\n\n"; 
}

void Product::AddParts(std::string text){
    parts_.push_back(text);
}