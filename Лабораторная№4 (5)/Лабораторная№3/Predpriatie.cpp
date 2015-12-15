#include "StdAfx.h"
#include "Predpriatie.h"
#include <iostream>
using namespace std;

Predpriatie ::~Predpriatie(void)
{
	List*temp = head;
	while (temp != 0)
	{
		List*del = temp;
		temp = temp->next;
		delete del;
	}
}

void Predpriatie::add(Person*In)
{
	List*temp = new List;
	temp->Infa = In;
	if (head != 0)
	{
		last->next = temp;
		last = temp;
	}
	else
	{
		head = last = temp;
	}
}

void Predpriatie::print()
{
	List*temp = head;
	while (temp!=0)
	{
		temp->Infa->getname();
		temp = temp->next;
	}
}