#include "stdafx.h"
#include <iostream>
#include <list>     
#include <iterator> 
#include <ctime>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int input(string s)
{
	int n = atoi(s.c_str());
	return n;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	
	list<long> myList; // объявляем пустой список 1
	srand(time(NULL));

	for (int i = 0; i < 15; i++) 
	{
		myList.push_back(rand() % 20); // добавляем в список новые элементы
	}
	cout << "List 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));//вывод списка 1
	
	int val;
	cout << "\nВведите номер удаляемого элемента: ";
	cin >> val;

	if ((val == 1) || (val == 2) || (val == 3) || (val == 4) || (val == 5) || (val == 6) || (val == 7) || (val == 8) || (val == 9) || (val == 10) || (val == 11) || (val == 12) || (val == 13) || (val == 14) || (val == 15))
	{
		std::list<long>::iterator range = myList.begin();
		std::advance(range, val - 1);
		myList.erase(range);
	}
	else
	{
		cout << "\n Ошибка ввода";
	}
	
	cout << "\nList 1 с удаленным элементом: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));



	list<long> myList2; // объявляем пустой список 2
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList2.push_back(rand() % 20); // добавляем в список 2 новые элементы
	}
	cout << "\nList 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));

	//////////////////////////////////////////////////////////////////////
	int n;
	cout << "\nВведите номер элемента с которого будем удалять из List 1: \n";
	cin >> n;
	cout << "\nВведите количество удаляемых элементов из List 1\n";
	int count;
	cin >> count;
	int prov = n + count;
	if ((n == 1) || (n == 2) || (n == 3) || (n == 4) || (n == 5) || (n == 6) || (n == 7) || (n == 8) || (n == 9) || (n == 10) || (n == 11) || (n == 12) || (n == 13) || (n == 14) ||
		(count == 1) || (count == 2) || (count == 3) || (count == 4) || (count == 5) || (count == 6) || (count == 7) || (count == 8) || (count == 9) || (count == 10) || (count == 11) || (count == 12) || (count == 13) || (count == 14) || (count == 15))
	{
		if ((prov == 1) || (prov == 2) || (prov == 3) || (prov == 4) || (prov == 5) || (prov == 6) || (prov == 7) || (prov == 8) || (prov == 9) || (prov == 10) || (prov == 11) || (prov == 12) || (prov == 13) || (prov == 14))
		{
			for (int i = 0; i < count; i++)
			{
				std::list<long>::iterator range = myList.begin();
				std::advance(range, n);
				myList.erase(range);
			}
		}
		else 
		{
			cout << "\nНечего удалять!";
		}
	}
	else
	{
		cout << "\n Ошибка ввода";
	}
	
	

	cout << "\nList 1 с удаленными элементами: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	//////////////////////////////////////////////////////////////////////
	
	myList.sort();
	myList2.sort();
	myList.merge(myList2);
	cout << "\nОбъединили List 2 в list 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\nЧто осталось в  list 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	system("pause");

}