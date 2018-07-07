/**
* File:			concreteSubject.cpp
* Author:		Easa El Sirgany
*				easaemad14@gmail.com
*
* Description:	Implements the base functionality of the GoF Observer pattern
*/
#include "stdafx.h"
#include "concreteSubject.hpp"

using namespace std;


// Get the subject's state
bool ConcreteSubject::GetState()
{
	return subjectState;
}

// Set our subject's state
void ConcreteSubject::SetState(bool state)
{
	subjectState = state;
}