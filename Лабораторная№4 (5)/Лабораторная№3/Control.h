#pragma once
#include "Predpriatie.h"
class Control //����� �� ���������
{
	virtual int bla() = 0;
public:
static void staz(Predpriatie*Zavod, int k);
static void kolvo(Predpriatie*Zavod);
static void god(Predpriatie*Zavod, int J);
};