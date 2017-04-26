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
	cout << "\n";
	myList.remove(val);

	cout << "������ � ��������� ���������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	system("pause");


	list<long> myList2; // ��������� ������ ������ 2
	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		myList2.push_back(rand() % 20); // ��������� � ������ ����� ��������
	}
	cout << "������ 2: ";
	copy(myList2.begin(), myList2.end(), ostream_iterator<long>(cout, " "));
	cout << "\n";

	system("pause");

	int n;
	cout << "\n ������� ���������� ����������� ��������� �� list 1 \n";
	cin >> n;

	myList.resize(n);
	cout << "������ � ���������� ����������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));
	system("pause");

	myList.merge(myList2);
	cout << "\n���������� ������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<long>(cout, " "));

}