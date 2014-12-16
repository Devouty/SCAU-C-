#include "StackOfIntegers.h"


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
	return element[--size];
}
int StackOfIntegers::getSize(){
	return size;
}

StackOfIntegers::~StackOfIntegers()
{
}
