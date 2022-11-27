#pragma once


#include<iostream>
using namespace std;

class event {
private:
	string name; //Name of the event
	int NumPeople, cost; //Total number of people and the total cost of the event

public:
	//constructors:
	event();
	event(string _name, int _NumPeople, int _cost);
	~event();

	//Accessors and mutators:
	string getName() const;
	int getNumPeople() const;
	int getCost() const;

	void setName(string _name);
	void setNumPeople(int _NumPeople);
	void setCost(int _cost);
	void screen();
};
