#include <iostream>
#include "TimeImp.hpp"
#include "CivilianTimeImp.hpp"
#include "Time.hpp"
#include "CivilianTime.hpp"

CivilianTime::CivilianTime(int hr, int min, int pm) {
    imp_ = new CivilianTimeImp(hr, min, pm);
}