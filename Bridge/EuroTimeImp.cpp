#include <iostream>
#include "string.h"
#include "TimeImp.hpp"
#include "EuroTimeImp.hpp"  
	
EuroTimeImp::EuroTimeImp(int hr, int min, int zone) : TimeImp(hr, min)
{
	if (zone == 0)
        strcpy(zone_, " Western European Time");
    else if (zone == 1)
        strcpy(zone_, " Central European Time");
    else
        strcpy(zone_, " Easterns European Time");
}
	
EuroTimeImp::~EuroTimeImp()
{
	
}

void EuroTimeImp::tell() {
        std::cout << "time is " << hr_ << ":" << min_ << zone_ << "\n";
}