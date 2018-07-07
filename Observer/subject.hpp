#pragma once
/**
 * File:		subject.hpp
 * Author:		Easa El Sirgany
 *				easaemad14@gmail.com
 * 
 * Description:	This represents base classes for the GoF Observer pattern, as shown in the
 *				UML Class Diagram (p294). All variable types are placeholders, unless
 *				otherwise noted.
 */
#include <vector>


// I'm only using pointers; need to know what this pointer type is for compilation
class Observer;

class Subject {
public:
	void Attach(Observer *o);
	void Detach(Observer *o);
	void Notify();

private:
	std::vector<Observer *> m_observers;
};