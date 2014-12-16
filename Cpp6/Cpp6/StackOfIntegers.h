#pragma once
class StackOfIntegers
{
public:
	StackOfIntegers();
	~StackOfIntegers();
	bool empty();
	int peek();
	void push(int value);
	int pop();
	int getSize();
private:
	int size;
	int element[100];
	int length = 100;
};

