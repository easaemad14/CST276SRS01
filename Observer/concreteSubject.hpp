#pragma once
/**
* File:			concreteSubject.hpp
* Author:		Easa El Sirgany
*				easaemad14@gmail.com
*
* Description:	This represents base classes for the GoF Observer pattern, as shown in the
*				UML Class Diagram (p294). All variable types are placeholders, unless
*				otherwise noted.
*/
#include "subject.hpp"

class ConcreteSubject : public Subject {
public:
	bool GetState();
	void SetState(bool state);

public:
	bool subjectState;
};