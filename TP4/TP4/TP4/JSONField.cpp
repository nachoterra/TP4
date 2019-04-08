#include "JSONField.h"



JSONField::JSONField()
{

}


void 
JSONField::setFieldType(const char* s)
{
	fieldType = s;
}

void 
JSONField::setFieldName(string str)
{
	fieldName = str;
}

void 
JSONField::setContent(string str)
{
	content = str;
}



const char* 
JSONField::getFieldsType(void)
{
	return fieldType;
}

string 
JSONField::getFieldName(void)
{
	return fieldName;
}

string 
JSONField::getContent(void)
{
	return content;
}