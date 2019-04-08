#include "JSONObject.h"



JSONObject::JSONObject()
{

}

JSONObject::JSONObject(string& s)
{

}

JSONObject::JSONObject(const char * s)
{

}

unsigned int 
JSONObject::getFieldCount(void)
{

}

const char * 
JSONObject::getFieldType(const char * f)
{

}

const char * 
JSONObject::getArrayType(const char * f)
{

}
unsigned int 
JSONObject::getFieldSize(const char * f)
{

}


bool 
JSONObject::isFieldPresent(const char * f)
{

}

void * 
JSONObject::copyField(const char * f)
{

}

void * 
JSONObject::copyArrayValue(const char * f, unsigned int pos)
{

}

void 
JSONObject::print(void)
{

}

JSONError 
JSONObject::getError(void)
{

}

bool 
JSONObject::parseString(const char * s)
{

}

bool 
JSONObject::parseString(string& s)
{

}

bool 
JSONObject::isEmpty(void)
{

}