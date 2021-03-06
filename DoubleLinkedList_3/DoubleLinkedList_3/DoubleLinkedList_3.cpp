// DoubleLinkedList_3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
using namespace std;
class Node {
	public:
	int temp;
	Node* next;
	Node* prev;
	Node(int _temp) {
		this->temp = _temp;
		this->next = NULL;
		this->prev = NULL;
	}
};
class DoublyLinkedList {
public:
	Node* head;
	Node* tail;
	DoublyLinkedList() {
		this->head = NULL;
		this->tail = NULL;
	}
	void insertAtFront(int _temp) {
		if (this->head == NULL)
		{
			this->head = new Node(_temp);
			this->head->next = this->tail;
			
		}
		else if (this->tail == NULL)
		{
			this->tail = this->head;
			this->head = new Node(_temp);
			this->head->next = this->tail;
		}
	
		
		
	}
	void printFromHead() {
		Node* tempSecond = this->head;
		cout << "[ ";
		while (tempSecond) {
			cout << tempSecond->temp << " ";
			tempSecond = tempSecond->next;
		}
		cout << "]" << endl;
	}
};
int main()
{
	DoublyLinkedList* dupa = new DoublyLinkedList();
	dupa->insertAtFront(5);
	dupa->insertAtFront(53);
	dupa->insertAtFront(5);
	dupa->insertAtFront(5);
	dupa->printFromHead();
}
/*void addFromHead(int _temp) {
	if (this->head == NULL && this->tail == NULL)
	{
		this->head = new Node(_temp);
		this->head->next = this->tail;
	}
	else if (this->tail==NULL)
	{
		this->tail = this->head;
		this->tail = new Node(_temp);
	}
}*/

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
