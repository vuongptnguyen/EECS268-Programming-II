/**
*	@file : Node.cpp
*	@author :  Vuong Nguyen
*	@date : 2015.02.12
*	Purpose: Implementation file of Node Class. 
*/

#include "Node.h"

Node::Node()
{
	m_value = 0;
	m_next = nullptr;
}

//Set methods
void Node::setValue(int value)
{
	m_value = value;
}

void Node::setNext(Node* prev)
{
	m_next = prev;
}

//Get methods
int Node::getValue()
{
	return m_value;
}

Node* Node::getNext()
{
	return m_next;
}
