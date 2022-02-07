#include<iostream>
#include<string.h>
#include"TimeImp.hpp"
#include"CivilianTimeImp.hpp"
#include"EuroTimeImp.hpp"
#include"Time.hpp"
#include"CivilianTime.hpp"
#include"EuroTime.hpp"
#include"MainBridge.hpp"

void MainBridgeFunc() {
    Time *times[3];
  times[0] = new Time(14, 30);
  times[1] = new CivilianTime(2, 30, 1);
  times[2] = new EuroTime(14, 30, 6);
  for (int i = 0; i < 3; i++)
    times[i]->tell();
}