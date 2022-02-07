#ifndef EUROTIME_H
#define EUROTIME_H
#pragma once

class EuroTime: public Time {
  public:
    EuroTime(int hr, int min, int zone);
};
#endif