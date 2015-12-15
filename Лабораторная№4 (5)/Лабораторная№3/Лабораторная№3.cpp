// �������������3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Person.h"
#include "Rabochi.h"
#include "Student.h"
#include "Inzhener.h"
#include "Tokar.h"
#include "Sluzachi.h"
#include "Predpriatie.h"
#include "Control.h"
#include "locale"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

	Predpriatie Zavod;

	Person *person;
	
	person = new Student ;
	person->setname("������", 21);
	Zavod.add(person);

	person = new Student;
	person->setname("�������", 32);
	Zavod.add(person);

	person = new Student;
	person->setname("�����", 18);
	Zavod.add(person);

	person = new Rabochi;
	person->setname("�����", 52);
	Zavod.add(person);

	person = new Rabochi;
	person->setname("����", 18);
	Zavod.add(person);

	person = new Tokar;
	person->setname("�������", 34);
	((Tokar*)person)->setstaz(3);
	Zavod.add(person);

	person = new Tokar;
	person->setname("������", 16);
	((Tokar*)person)->setstaz(4);
	Zavod.add(person);

	Zavod.print();
	cout <<"����������"<< endl;

	Control::staz(&Zavod, 4);
	cout << "������� ������ ��������� ����" <<endl ;
	Control::god(&Zavod, 21);
	Control::kolvo(&Zavod);

	/*
	Rabochi Mihail;
	Mihail.setname("������ �������");
	Mihail.getname();
	Mihail.setzarplata(1800000);
	Mihail.getzarplata();
	cout << endl;
	
	Student* f5 = new Student(&Mihail);
	f5->setname("������ �������");
	f5->getname();
	f5->Infa->setzarplata(20000);
	f5->Infa->getzarplata();
	f5->setkof(6);
	f5->getkof();
	cout << endl;
	*/

	return 0;
}