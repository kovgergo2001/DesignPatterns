#include <iostream>
#include "string.h"
#include "TimeImp.hpp"
#include "CivilianTimeImp.hpp"  
	
CivilianTimeImp::CivilianTimeImp(int hr, int min, int pm) : TimeImp(hr, min)
{
	if (pm)
        strcpy(whichM_, " PM");
    else
        strcpy(whichM_, " AM");
}
	
CivilianTimeImp::~CivilianTimeImp()
{
	
}

void CivilianTimeImp::tell() {
        std::cout << "time is " << hr_ << ":" << min_ << whichM_ << "\n";
}