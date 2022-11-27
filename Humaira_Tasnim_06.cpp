
#include <iostream>
#include"Assignment06.h"

void sort(event arr[], int n) {
    event temp;
    for (int i = 0; i < n; i++) {
        int s = arr[i].getCost();
        temp = arr[i];
        int sort = i - 1;

        while (sort >= 0 && arr[sort].getCost() > s) {
            arr[sort + 1] = arr[sort];
            sort = sort - 1;

        }

        arr[sort + 1] = temp;
    }
}

int main()
{
    std::cout << "Sorting!\n-----------------------\n\n";
    cout << "Enter the name of the event, number of people and budget." << endl;
    event e[5];

    for (int i = 0; i < 5; i++) {
        string ev;
        double num;
        float cos;

        cout << "Name of the event: ";
        cin >> ev;
        cout << endl;

        cout << "Number of people: ";
        cin >> num;
        cout << endl;

        cout << "Budget: ";
        cin >> cos;
        cout << endl;

        e[i].setName(ev);
        e[i].setNumPeople(num);
        e[i].setCost(cos);
    }

    sort(e, 5);
    cout << "After sorting\n-----------------------------\n\n";
    for (int i = 0; i < 5; i++) {
        e[i].screen();
    }
}

