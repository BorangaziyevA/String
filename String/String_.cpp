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

String_::String_(const String_ & obj)
{
	cout << "copy" << endl;

	this->length = obj.length;
	if (this->length == 0)
	{
		this->str = nullptr;
		return;
	}
	this->str = new char[this->length + 1];
	strcpy_s(this->str, this->length + 1, obj.str);

}

String_::String_(String_ && right)
{
	cout << "move" << endl;

	this->length = right.length;
	this->str = right.str;
	right.str = nullptr;
	right.length = 0;
}



String_::~String_()
{
	clear();
}

String_ & String_::operator=(String_ && right)
{
	swap(this->str, right.str);
	swap(this->length, right.length);
	return *this;
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
	if (str != nullptr);
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

String_ String_::operator+=(const char * s)
{
	this->append(s);
	return *this;
}
String_ String_::operator+=(String_ s)
{
	this->append(s.str);
	return *this;
}

String_& String_::operator=(const String_ & obj)
{
	//Защита от самоприсваивания
	if (this == &obj)
	{
		return *this;
	}
	//Очищение
	this->clear();

	//Копирование и проверка на пустой объект
	if (obj.str != nullptr)
	{
		this->setString(obj.str);
	}
	return *this;

}

ostream & operator<<(ostream & os, const String_ & obj)
{
	// TODO: вставьте здесь оператор return
}

istream & operator>>(istream & is, String_ & obj)
{
	// TODO: вставьте здесь оператор return
}

bool operator==(const string & a, const string & b)
{
	return false;
}

bool operator!=(const string & a, const string & b)
{
	return false;
}
