#ifndef CIVILIANTIME_H
#define CIVILIANTIME_H
#pragma once

class CivilianTime: public Time {
  public:
    CivilianTime(int hr, int min, int pm);
};
#endif