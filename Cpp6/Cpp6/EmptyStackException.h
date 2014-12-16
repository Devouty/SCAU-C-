#pragma once
#include<stdexcept>
class EmptyStackException :
	public std::runtime_error
{
public:
	EmptyStackException();
	~EmptyStackException();
};

