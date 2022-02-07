#ifndef TIME_H
#define TIME_H
#pragma once
	
class Time  
{
	public:
	Time();
	~Time();
	Time(int hr, int min);
	virtual void tell();
	protected:
    TimeImp *imp_;

};
#endif