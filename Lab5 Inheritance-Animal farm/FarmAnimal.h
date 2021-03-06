/**
*	@file : FarmAnimal.h
*	@author :  Vuong Nguyen
*	@date : 2015.03.16
*	Purpose: Header file of FarmAnimal Class. 
*/

#ifndef FARMANIMAL_H
#define FARMANIMAL_H
#include <string>

class FarmAnimal
{
	protected:
	std::string m_name;
	std::string m_sound;

	public:
	/**
	*  @pre None
	*  @post Creates and initializes a Farm animal instance
	*  @return Initialzed animal
	*/
	FarmAnimal();

	/**
	*  @pre None
	*  @post None
	*  @return the name of the animal m_name
	*/
	std::string getName() const;

	/**
	*  @pre None
	*  @post set the name of the animal
	*  @return none
	*/
	void setName(std::string name);

	/**
	*  @pre None
	*  @post None
	*  @return the sound of the animal m_sound
	*/
	std::string getSound() const;

	/**
	*  @pre None
	*  @post set the sound of the animal
	*  @return none
	*/
	void setSound(std::string sound);

};
#endif
