#include "StdAfx.h"
#include "student.h"
#include <iostream>
using namespace std;

Student::Student(void)
{
	
	Type = 4;
}

Student::Student(Rabochi *Infa)
{
	this->Infa = Infa;
}

void Student::setkof(int x)
{
	this->kof = x;
}

void Student::getkof()
{
	cout << "коэффициент студента: " << this->kof << endl;
}

Student::~Student(void)
{
	cout << "вызывается деструктор студента" << endl;
}

void Student::history()
{
	cout << "История студента"; 
}



