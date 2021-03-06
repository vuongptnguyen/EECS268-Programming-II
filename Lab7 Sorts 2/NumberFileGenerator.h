/**
*	@file : NumberFileGenerator.h
*	@author : Vuong Nguyen
*	@date : 2015.04.08
*	Purpose: Header file of Number File Generator class
*/

#include <string>
#include <random>
#include <ctime>
#include <fstream>
#ifndef NUMBERFILEGENERATOR_H
#define NUMBERFILEGENERATOR_H

class NumberFileGenerator
{
	public:
	/**
	*  @pre fileName is valid filename, amount greater than zero
	*  @post a file is created with the amount of number in ascending order.
	*  @return None
	*/
	static void ascending(std::string fileName, int amount);

	/**
	*  @pre fileName is valid filename, amount greater than zero
	*  @post a file is created with the amount of number in descending order.
	*  @return None
	*/
	static void descending(std::string fileName, int amount);

	/**
	*  @pre fileName is valid filename, amount greater than zero
	*  @post a file is created with the amount of number. All numbers are random and between mix and max
	*  @return None
	*/
	static void random(std::string fileName, int amount, int min, int max);

	/**
	*  @pre fileName is valid filename, amount greater than zero
	*  @post a file is created with a single number
	*  @return None
	*/
	static void singleValue(std::string fileName, int amount, int value);
};

#endif
