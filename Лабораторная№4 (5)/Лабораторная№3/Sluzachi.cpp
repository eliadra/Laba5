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
	cout << "���� ������: " << this->staz << endl;
}
void Sluzachi::history()
{
	cout << "������� ��������";
}
Sluzachi::~Sluzachi()
{
	cout << "���������� ���������� ���������" << endl;
}