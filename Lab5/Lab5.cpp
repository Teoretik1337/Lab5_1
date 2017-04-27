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

	list<long> myList; // ��������� ������ ������ 1
	srand(time(NULL));

	for (int i = 0; i < 15; i++) 
	{
		myList.push_back(rand() % 20); // ��������� � ������ ����� ��������
	}
	cout << "List 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));//����� ������ 1
	cout << "\n";
	
	int val;
	cout << "\n������� ����� ���������� ��������: ";
	cin >> val;
	std::list<long>::iterator range = myList.begin();
	std::advance(range, val-1);
	myList.erase(range);

	cout << "\nList 1 � ��������� ���������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));



	list<long> myList2; // ��������� ������ ������ 2
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList2.push_back(rand() % 20); // ��������� � ������ 2 ����� ��������
	}
	cout << "\nList 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	//////////////////////////////////////////////////////////////////////
	int n;
	cout << "\n������� ����� �������� � �������� ����� ������� �� List 1: \n";
	cin >> n;
	cout << "\n������� ���������� ��������� ��������� �� List 1\n";
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		std::list<long>::iterator range = myList.begin();
		std::advance(range, n);
		myList.erase(range);
	}

	cout << "\nList 1 � ���������� ����������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	//////////////////////////////////////////////////////////////////////
	
	myList.sort();
	myList2.sort();
	myList.merge(myList2);
	cout << "\n���������� List 2 � list 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\n��� �������� �  list 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	system("pause");

}