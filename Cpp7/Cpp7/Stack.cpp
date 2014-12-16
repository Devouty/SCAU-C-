#include "Stack.h"
#include <iostream>
using std::cout;
using std::endl;

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

	for (int i = 0; i < (this->size); i++)
	{
		cout << "No." << i + 1 << ":" << element[i] << endl;
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
