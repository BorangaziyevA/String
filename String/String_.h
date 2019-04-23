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
	String_(const String_ &obj);
	String_(String_ && right);
	~String_();

	String_& operator=(String_ && right);
	void setString(const char *s);
	const char* getString();
	bool equal(const char *s);
	int getLength();
	void append(const char *s);
	void print();
	void clear();
	String_ operator+=(const char*s);
	String_ operator+=(String_ s);
	String_& operator=(const String_ &obj);
	friend bool operator==(const string& a, const string& b);
	friend bool operator!=(const string& a, const string& b);
};

ostream& operator<<(ostream& os, const String_& obj);
istream& operator>>(istream& is, String_& obj);
bool operator==(const string& a, const string& b);
bool operator!=(const string& a, const string& b);
