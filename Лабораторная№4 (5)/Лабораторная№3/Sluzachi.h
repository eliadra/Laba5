#pragma once
#include "Rabochi.h"
//������������� ������������
class Sluzachi :
	public Rabochi
{
protected:
	int staz;
public:
	Sluzachi(void);
	void setstaz(int x);
	void getstaz();
	virtual ~Sluzachi(void);
	
	virtual void history();
};