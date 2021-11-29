/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Filipe Frances
 */
#pragma once
#include <iostream>
#include <string>
#include<sstream>
#include<cstdlib>

double a;
double b;
double c;

inline void error(const std::string& s)
{
	throw std::runtime_error(s);
}

inline void error(const std::string& s, const std::string& s2)
{
	error(s + s2);
}

inline void error(const std::string& s, int i)
{
	std::ostringstream os;
	os << s << ": " << i;
	error(os.str());
}