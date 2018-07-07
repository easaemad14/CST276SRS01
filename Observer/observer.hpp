#pragma once
/**
* File:			observer.hpp
* Author:		Easa El Sirgany
*				easaemad14@gmail.com
*
* Description:	This represents base classes for the GoF Observer pattern, as shown in the
*				UML Class Diagram (p294). All variable types are placeholders, unless
*				otherwise noted.
*/


// Abstract base class
class Observer {
public:
	virtual void Update() = 0;
};