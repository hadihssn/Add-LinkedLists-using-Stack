#pragma once
#include<iostream>
using namespace std;

class LinkedList
{
private:
	int data;
	LinkedList* next;
public:
	LinkedList()
	{
		this->data = 0;
		next = NULL;
	}
	~LinkedList()
	{
		if (next)
			delete[]next;
		next = NULL;
	}
	void insertNode(LinkedList*& head, int value)
	{
		LinkedList* newNode = new LinkedList();
		newNode->data = value;
		newNode->next = NULL;

		if (head == NULL)
			head = newNode;
		else
		{
			LinkedList* temp = head;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = newNode;
		}
	}

	void display(LinkedList* head)
	{
		LinkedList* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	int getData()
	{
		return this->data;
	}
	LinkedList* getNext()
	{
		return this->next;
	}
};

