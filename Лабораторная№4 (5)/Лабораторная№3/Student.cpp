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
	cout << "����������� ��������: " << this->kof << endl;
}

Student::~Student(void)
{
	cout << "���������� ���������� ��������" << endl;
}

void Student::history()
{
	cout << "������� ��������"; 
}



