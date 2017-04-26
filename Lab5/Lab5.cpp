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

	list<long> myList; // объявляем пустой список
	srand(time(NULL));

	for (int i = 0; i < 15; i++) 
	{
		myList.push_back(rand() % 20); // добавляем в список новые элементы
	}

	cout << "Список: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	long val;
	cin >> val;
	myList.remove(val);

	cout << "\nСписок с удаленным элементом: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));



	list<long> myList2; // объявляем пустой список 2
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList2.push_back(rand() % 20); // добавляем в список новые элементы
	}
	cout << "\nСписок 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";


	int n;
	cout << "\nВведите количество оставляемых элементов в list 1 \n";
	cin >> n;

	myList.resize(n);
	cout << "\nСписок с удаленными элементами: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));

	
	myList.sort();
	myList2.sort();
	myList.merge(myList2);
	cout << "\nОбъединили списки в list 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\nЧто осталось в  list 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));


	system("pause");

}