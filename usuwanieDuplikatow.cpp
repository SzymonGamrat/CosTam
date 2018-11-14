/*
Napisz funkcje ktora dla dowolnego:
a) wektora int
b) stringa
usunie wszystkie powielajace sie liczby/litery i zwroci ile ich usunela
Pamietaj ze wektor/string moze byc pusty.

Np. dla stringa: "AbcdacBd" zostawi "AbcdaB"  i zwroci 2;

*/
#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int delDup(vector<int>&wektor) {
	sort(wektor.begin(), wektor.end());
	int vol = 0;
	for (int i = 0; i < wektor.size()-1; i++)
	{
		while (wektor[i] == wektor[i + 1]) {
			vol++;
			wektor.erase(wektor.begin() + i + 1);
		}
	}

	return vol;
}
int delStr(string &a) {
	int vol = 0;
	for (int i = 0; i < a.length()-1; i++)
	{
		for (int j = i+1; j < a.length(); j++)
		{
			if (a[i] == a[j]) {
				vol++;
				a.erase(j, 1);
			}
		}
	}
	return vol;
}
string revStr(string a) {
	string odwrocony;
	int j;
	int tmp = a.length();
	for (int i = a.length(); i >= 0; i--)
	{
		if (a[i] == ' '||i==0)
		{
			if (i == 0) j = 0;
			else j = i + 1;
			for (; j < a.length(); ) {
				
				odwrocony += a[j];
				a.erase(j, 1);
				
			}
		}
		
	}
	return odwrocony;
}
int main()
{
	//vector<int>wektor = { 1,3,9,5,3,10,3,5 };
	string a = "Ala ma kota i dwa psy";
	/*for (int i = 0; i < wektor.size(); i++)
	{
		cout << wektor[i];
	}
	cout << endl;
	cout << delDup(wektor) << endl;
	for (int i = 0; i < wektor.size(); i++)
	{
		cout << wektor[i];
	}
	cout << endl;
	cout << delStr(a) << endl;
	cout << a << endl;
	*/
	cout << a << endl;
	cout << revStr(a) <<endl;
	
	return 0;
}

