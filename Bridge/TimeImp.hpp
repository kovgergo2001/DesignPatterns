#ifndef TIMEIMP_H
#define TIMEIMP_H
#pragma once
	
class TimeImp  
{
	private:

	public:
		TimeImp(int hr,int min);
		~TimeImp();
		virtual void tell();
	protected:
		int hr_, min_;
};
#endif