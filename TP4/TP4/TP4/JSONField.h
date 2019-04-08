#pragma once

#include <string>
#include <iostream>

using namespace std;

class JSONField
{
public:
	
	JSONField();

	void setFieldType(const char* s);
	void setFieldName(string str);
	void setContent(string str);
	


	const char* getFieldsType(void);
	string getFieldName(void);
	string getContent(void);


private:
	const char* fieldType;
	string fieldName;
	string content;
};