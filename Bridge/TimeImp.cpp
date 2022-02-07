#include<iostream>
#include "TimeImp.hpp"  
	
TimeImp::TimeImp(int hr, int min)
{
	hr_ = hr;
    min_ = min;
}
	
TimeImp::~TimeImp()
{
	
}

void TimeImp::tell() {
    std::cout << "time is " << hr_ << ":" << min_ << "\n";
}

