#include "StdAfx.h"
#include "Control.h"
#include "Tokar.h"
#include <iostream>
using namespace std;

void Control::staz(Predpriatie*Zavod,int K)
{
	Predpriatie::List*temp = Zavod->head;
	while (temp != 0)
	{
		if ((temp->Infa->gettype() == 5) && (((Tokar*)(temp->Infa))->getstaz()>=K))
			temp->Infa->getname();
		temp = temp->next;
	}
}

void Control::kolvo(Predpriatie*Zavod)
{
	int Kol=0;
	Predpriatie::List*temp = Zavod->head;
	while (temp != 0)
	{
		if (temp->Infa->gettype() == 4)
			Kol++;
		
		temp = temp->next;
	}
	cout << Kol<<endl;
}

void Control::god(Predpriatie*Zavod, int J)
{
	Predpriatie::List*temp = Zavod->head;
	while (temp != 0)
	{
		if ((temp->Infa->gettype() !=4 ) && (temp->Infa->getdata()>= J))
			temp->Infa->getname();
		temp = temp->next;
	}

}
