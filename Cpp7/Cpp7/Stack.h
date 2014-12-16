#pragma once
#include<iostream>
using namespace::std;

template<class T>
class Stack
{
public:
	Stack();
	~Stack();
	bool empty();
	T peek();
	void push(T value);
	T pop();
	void printStack();
	bool contains(T element);
	int getSize();
private:
	T element[100];
	int size;
};


template<class TT>
Stack<TT>::Stack()
{
	this->size = 0;
}
template<class TT>
bool Stack<TT>::empty(){
	return this->size == 0;
}
template<class TT>
TT Stack<TT>::peek(){
	return this->element[this->size];
}
template<class TT>
void Stack<TT>::push(TT value){
	element[size++] = value;
}
template<class TT>
TT Stack<TT>::pop(){
	return element[--size];
}
template<class TT>
int Stack<TT>::getSize(){
	return this->size;
}
template<class TT>
void Stack<TT>::printStack(){
	cout << "´ÓÕ»¶¥µ½Õ»µ×£º"<< endl;
	for (int i = 0; i < (this->size); i++)
	{
		cout << element[this->size-i-1] << endl;
	}
}
template<class TT>
bool Stack<TT>::contains(TT element){
	for (int i = 0; i < this->size; i++)
	{
		if (this->element[i] == element)
			return true;
	}
	return false;
}

template<class TT>
Stack<TT>::~Stack()
{
}
