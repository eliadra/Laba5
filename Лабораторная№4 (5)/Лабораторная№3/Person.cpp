#include "StdAfx.h"
#include "person.h"
#include <iostream>
using namespace std;


Person::Person(void)
{
	}

int Person::gettype()
{
	return Type;
}

void Person::setname(char *name, int data)
{
	this->name = name;
	this->data = data;
}

void Person::getname()
{
	cout << "��� �������: " << this->name << endl;
}

int Person::getdata()
{
	return data;
}

Person::~Person(void)
{
	cout << "���������� ���������� �������" << endl;
}



