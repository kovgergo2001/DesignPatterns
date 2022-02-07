#include <iostream>
#include "TimeImp.hpp"
#include "Time.hpp"  

Time::Time()
{
	
}
	
Time::Time(int hr, int min)
{
    imp_ = new TimeImp(hr, min);
}

Time::~Time()
{
	
}

void Time :: tell() {
    imp_->tell();
}