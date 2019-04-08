#include "JSONError.h"

JSONError::JSONError(bool hasFailed = false, const char * Desc = NULL)
{

}

string 
JSONError::getErrorString(void)
{
	return errorString;
}


bool 
JSONError::hasFailed(void)
{

	return error;
}

void
JSONError::setErrorString(string str)
{
	errorString = str;
}
