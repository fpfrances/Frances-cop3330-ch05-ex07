/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Filipe Frances
 */
#include "Header.h"

double PositiveX(){
	double x = ((-b + sqrt((b * b) - (4 * a * c))) / (2 * a));
	if ((b * b) - (4 * a * c) < 0){
		std::cout << b << "*" << b << "-4*" << a << "*" << c << "= " << ((b * b) - (4 * a * c)) << '\n';
		error("This is a negative number and cannot be rooted.\n");
	}
	return x;
}

double NegativeX(){
	double x = ((-b - sqrt((b * b) - (4 * a * c))) / (2 * a));
	if ((b * b) - (4 * a * c) < 0){
		std::cout << b << "*" << b << "-4*" << a << "*" << c << "= " << ((b * b) - (4 * a * c)) << '\n';
		error("This is a negative number and cannot be rooted.\n");
	}
	return x;
}

int main()
try{
	std::cout << "Let's solve some quadratic equations.\n";
	std::cout << "What is a?: \n";
	std::cin >> a;
	std::cout << "What is b?: \n";
	std::cin >> b;
	std::cout << "What is c?: \n";
	std::cin >> c;
	double x1 = PositiveX();
	double x2 = NegativeX();
	std::cout << "\nX is: " << x1 << " and " << x2 << "\n";
	std::cout << '\n';
	system("pause>0");
	return 0;
}


catch (std::exception& e){
	std::cerr << "error: " << e.what() << '\n';
	return 1;
}