#pragma once
#include "Person.h"

class Predpriatie
{
public:

	static struct List
	{
		Person*Infa;
		List *next = 0;
	};
	List *head = 0, *last = 0;

	~Predpriatie();
	void add(Person*Infa);
	void print();
};