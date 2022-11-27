#include "Assignment06.h"

event::event(string _name, int _NumPeople, int _cost) { //constructor
	if (_NumPeople > 0 && _NumPeople < 100) { ////Applying business rule for NumPeople for numbers of people
		NumPeople = _NumPeople;
		name = _name;
		cost = _cost;
	}
	else {
		name = _name;
		cost = _cost;
		NumPeople = _NumPeople;
		cout << "More than 100 people not allowed for " << name << "\n";
	}
}

event::~event() {  //destructor
	cout << "An event has been removed from memory\n";

}


//Accesors and mutators:
string event::getName() const {
	return name;
}

int event::getNumPeople()const {
	return NumPeople;
}

int event::getCost()const {
	return cost;
}

void event::setName(string _name) {
	name = _name;
}

void event::setNumPeople(int _NumPeople) { //Applying business rule for NumPeople for numbers of people
	NumPeople = _NumPeople;
	if (_NumPeople > 0 && _NumPeople < 100) {
		NumPeople = _NumPeople;
	}
	else {

		NumPeople = 0;
	}

}

void event::setCost(int _cost) {
	cost = _cost;
}

void event::screen() {
	cout << "Event: " << name << ", Number of People = " << NumPeople << ", cost = " << cost << endl;
}

event::event() { //default values for "event" objects
	string _name = "";
	int _NumPeople = 0;
	int _cost = 0;
}
