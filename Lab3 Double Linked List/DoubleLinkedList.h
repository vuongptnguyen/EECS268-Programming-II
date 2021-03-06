/**
*	@file : DoubleLinkedList.h
*	@author :  Vuong Nguyen
*	@date : 2015.02.25
*	Purpose: Header file of DoubleLinkedList Class. 
*/

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include "Node.h"
#include <iostream>
#include <stdexcept>

template <typename T>

class DoubleLinkedList
{
	private:
	Node<T>* m_front;
	Node<T>* m_back;
	Node<T>* m_previous;
	int m_size;
	
	public:
	/**
	*  @pre None
	*  @post Creates and initializes a DoubleLinkedList instance
	*  @return Initialzed DoubleLinkedList
	*/
	DoubleLinkedList(); 

	/**
	*  @pre None
	*  @post Method to deletes all the nodes
	*  @return deleted DoubleLinkedList
	*/
	~DoubleLinkedList(); 

	/**
	*  @pre none
	*  @post none
	*  @return true only if the list is empty
	*/
	bool isEmpty() const; 

	/**
	*  @pre none
	*  @post none
	*  @return the number of nodes in the list
	*/
	int size() const; 

	/**
	*  @pre none
	*  @post add the new value to the back of the list
	*  @return none
	*/
	void pushBack(T value); 

	/**
	*  @pre none
	*  @post add the new value to the front of the list
	*  @return none
	*/
	void pushFront(T value); 

	
	/**
	*  @pre none
	*  @post removes the node containing the passed value
	*  @return true if it is successfully removed, false otherwise
	*/
	bool remove(T value); 

	/**
	*  @pre none
	*  @post creats a node and places the new value into it, ahead of the first occurance of the listValue.
	*  @return none
	*/
	void insertAhead(T listValue, T newValue) throw (std::runtime_error);

	/**
	*  @pre none
	*  @post creats a node and places the new value into it, behind of the first occurance of the listValue.
	*  @return none
	*/
	void insertBehind(T listValue, T newValue) throw (std::runtime_error);

	/**
	*  @pre none
	*  @post none
	*  @return a pointer to the first node in the list that contains the value or 		nullptr if not found.
	*/
	Node<T>*find(T value) const; 
	
	/**
	*  @pre none
	*  @post Print the list and "List empty" if there is no element.
	*  @return none
	*/
	void printList() const; 

};
#include "DoubleLinkedList.hpp"
#endif

