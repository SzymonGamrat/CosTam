// Stack1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int>stack1;

	int liczba;

	for (int i = 0; i < 4; i++)
	{
		
		cin >> liczba;
		stack1.push(liczba);
	}
	
	if (stack1.empty())
	{
		cout << "jest pusty" << endl;
	}
	else
	{
		cout << "cos tam jest" << endl;
		cout << stack1.size();
	}

    cout << "Hello World!\n"; 
}

