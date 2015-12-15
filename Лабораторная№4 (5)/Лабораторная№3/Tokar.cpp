#include "StdAfx.h"
#include <iostream>
#include "Tokar.h"
using namespace std;

Tokar::Tokar(void)
{
	
	Type = 5;
}

void Tokar::setstaz(int x)
{
	this->staz = x;
}

int Tokar::getstaz()
{
	return staz;
}

Tokar::~Tokar()
{
	cout << "вызывается деструктор служащего" << endl;
}
void Tokar::history()
{
	cout << "История токаря";
}
