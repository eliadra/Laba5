#pragma once
class Person
{
protected:
	char *name;
	int data;
	int Type=0;
public:
	Person *next;
	Person(void);
	int gettype();
	void setname(char *name, int data);
	void getname();
	int getdata();
	virtual~Person(void);
	virtual void history() = 0;
};