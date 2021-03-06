
/**
*	@file : main.cpp
*	@author :  Vuong Nguyen
*	@date : 2015.02.12
*	Purpose: Implementation file of main function
*/

#include "Node.h"
#include "LinkedList.h"

#include <iostream>

int main()
{
	LinkedList* LL = new LinkedList();

	int answer;
	int value;
	
	while (answer != 7)
	{
		std::cout << "\n\nSelect from the following menu:\n"
			<< "1) Add to the front of the list\n"
			<< "2) Add to the end of the list\n"
			<< "3) Remove from front of the list\n"
			<< "4) Remove from back of the list\n"
			<< "5) Print the list\n"
			<< "6) Search for value\n"
			<< "7) Exit\n"
			<< "Enter your choice: ";
	
	
		std::cin >> answer;

		if(answer == 1)
		{	
			std::cout << "Input a value: ";
			std::cin >> value;
			LL->addFront(value);
		}
		if(answer == 2)
		{
			std::cout << "Input a value: ";
			std::cin >> value;
			LL->addBack(value);
		}
		if (answer == 3)
		{
			LL->removeFront();
		}
		if(answer == 4)
		{
			LL->removeBack();
		}
		if (answer == 5)
		{
			LL->printList();
		}
		if (answer == 6)
		{
			std::cout <<"Input a value: ";
			std::cin >> value;
			if (LL->search(value))
			{
				std::cout <<"Found";
			}		
			else 
			{
				std::cout << "Notfound";
			}
		}
		if (answer == 7)
		{
			delete LL;
		}
	}
	
	
	return 0;
}
