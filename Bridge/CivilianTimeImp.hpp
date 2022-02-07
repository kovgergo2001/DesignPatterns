#ifndef CIVILIANTIMEIMP_H
#define CIVILIANTIMEIMP_H
#pragma once
	
class CivilianTimeImp : public TimeImp
{
	private:

	public:

		CivilianTimeImp(int hr, int min, int pm);
		~CivilianTimeImp();
		void tell();
	protected:
		char whichM_[4];
};
#endif