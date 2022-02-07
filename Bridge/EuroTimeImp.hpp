#ifndef EUROTIMEIMP_H
#define EUROTIMEIMP_H
#pragma once
	
class EuroTimeImp  : public TimeImp
{
	private:

	public:
		EuroTimeImp(int hr, int min, int zone);
		~EuroTimeImp();
		void tell();
	protected:
		char zone_[30];
};
#endif