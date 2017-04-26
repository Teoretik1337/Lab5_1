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

	list<long> myList; // ��������� ������ ������
	srand(time(NULL));

	for (int i = 0; i < 15; i++) 
	{
		myList.push_back(rand() % 20); // ��������� � ������ ����� ��������
	}

	cout << "������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	long val;
	cin >> val;
	myList.remove(val);

	cout << "\n������ � ��������� ���������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));



	list<long> myList2; // ��������� ������ ������ 2
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList2.push_back(rand() % 20); // ��������� � ������ ����� ��������
	}
	cout << "\n������ 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";


	int n;
	cout << "\n������� ���������� ����������� ��������� � list 1 \n";
	cin >> n;

	myList.resize(n);
	cout << "\n������ � ���������� ����������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));

	
	myList.sort();
	myList2.sort();
	myList.merge(myList2);
	cout << "\n���������� ������ � list 1: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	cout << "\n��� �������� �  list 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));


	system("pause");

}