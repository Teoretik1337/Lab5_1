#include "stdafx.h"
#include <iostream>
#include <list>     
#include <iterator> 
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	list<long> myList; // объ€вл€ем пустой список
	srand(time(NULL));

	for (int i = 0; i < 15; i++) 
	{
		myList.push_back(rand() % 20); // добавл€ем в список новые элементы
	}

	cout << "—писок: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	long val;
	cin >> val;
	cout << "\n";
	myList.remove(val);

	cout << "—писок: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));

	system("pause");

}