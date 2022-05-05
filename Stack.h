#pragma once
#include<iostream>
using namespace std;
#include "LinkedList.h"

class Stack
{
	int top;
	int* array;
	int size;
public:
	Stack(int size = 10)
	{
		this->size = size;
		this->top = -1;
		this->array = new int[size] {};
	}
	~Stack()
	{
		if (this->array)
			delete[]array;
		this->array = nullptr;
	}
	bool empty()
	{
		if (top == -1)
			return true;
		return false;
	}
	bool full()
	{
		if (top + 1 == size)
			return true;
		return false;
	}
	void push(int value)
	{
		if (full())
			cout << "\nCannot push\n";
		else
		{
			this->array[++top] = value;
		}
	}
	int pop()
	{
		if (empty())
			return -1;
		else
		{
			return this->array[top--];
		}
	}
	void display()
	{
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
	}


	void sum(LinkedList* head, LinkedList* head2)
	{
		LinkedList* temp = head;
		LinkedList* temp2 = head2;

		while (temp != nullptr)
		{
			this->push(temp->getData() + temp2->getData());
			temp = temp->getNext();
			temp2 = temp2->getNext();
		}
	}
};

