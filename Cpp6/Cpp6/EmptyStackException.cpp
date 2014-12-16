#include "stdafx.h"
#include "EmptyStackException.h"


EmptyStackException::EmptyStackException() :runtime_error("POP ERROR")
{
	
}


EmptyStackException::~EmptyStackException()
{
}
