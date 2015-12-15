#include "StdAfx.h"
#include <iostream>
#include "Sluzachi.h"
using namespace std;

Sluzachi::Sluzachi(void)
{

	Type = 3;
}

void Sluzachi::setstaz(int x)
{
	this->staz = x;
}

void Sluzachi::getstaz()
{
	cout << "стаж работы: " << this->staz << endl;
}
void Sluzachi::history()
{
	cout << "История служащий";
}
Sluzachi::~Sluzachi()
{
	cout << "вызывается деструктор служащего" << endl;
}