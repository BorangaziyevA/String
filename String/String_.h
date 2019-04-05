#pragma once
#include"String_.h"
#include<iostream>
#include<Windows.h>

using namespace std;

class String_
{
	char *str;
	int length;
public:
	String_();
	String_(const char *s);
	String_(const String_ &s);
	~String_();

	void setString(const char *s);
	const char* getString();
	bool equal(const char *s);
	int getLength();
	void append(const char *s);
	void print();
	void clear();
};

