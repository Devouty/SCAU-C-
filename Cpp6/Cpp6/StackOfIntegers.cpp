#include "stdafx.h"
#include "StackOfIntegers.h"
#include "EmptyStackException.h"

StackOfIntegers::StackOfIntegers(){
	size = 0;
}
bool StackOfIntegers::empty(){
	return size == 0;
}
int StackOfIntegers::peek(){
	return element[size - 1];
}
void StackOfIntegers::push(int value){
	element[size++] = value;
}
int StackOfIntegers::pop(){
	try
	{
		--size;
		if (size < 0)
		{
			EmptyStackException e;
			size++;
			throw e;

		}
		else
		{
			return element[--size];
		}
	}
	catch (EmptyStackException e)
	{
		throw e;
	}
	
}
int StackOfIntegers::getSize(){
	return size;
}

StackOfIntegers::~StackOfIntegers()
{
}
