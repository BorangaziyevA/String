#include "String_.h"



String_::String_()
{
	str = nullptr;
	length = 0;
}

String_::String_(const char * s)
{
	length = strlen(s);
	str = new char[length+1];
	strcpy_s(str,length + 1, s);
}

String_::String_(const String_ & s)
{
	length = s.length;
	if (length == 0)
	{
		str = nullptr;
		return;
	}
	str = new char[length + 1];
	strcpy_s(str, length + 1, s.str);
}

String_::~String_()
{
	clear();
}

void String_::setString(const char * s)
{
	if (str != nullptr)
	{
		delete[] str;
	}
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}

const char * String_::getString()
{
	return str;
}

bool String_::equal(const char * s)
{
	if (strcmp(str, s) == 0)
	{
		return true;
	}
	return false;
}

int String_::getLength()
{
	return length;
}

void String_::append(const char * s)
{
	if (length == 0)
	{
		setString(s);
		return;
	}
	length += strlen(s);
	char *tmp;
	tmp = new char[length + 1];
	strcpy_s(tmp, length + 1, str);
	strcat_s(tmp, length + 1, s);
	delete[] str;
	str = tmp;

}

void String_::print()
{
	cout << str << endl;
}

void String_::clear()
{
	if (length != 0)
	{
		delete[] str;
	}
	str = nullptr;
	length = 0;
}


