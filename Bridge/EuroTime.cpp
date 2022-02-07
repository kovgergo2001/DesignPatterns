#include <iostream>
#include "TimeImp.hpp"
#include "EuroTimeImp.hpp"
#include "Time.hpp"
#include "EuroTime.hpp"

EuroTime::EuroTime(int hr, int min, int zone) {
    imp_ = new EuroTimeImp(hr, min, zone);
}