/**
* File:			subject.cpp
* Author:		Easa El Sirgany
*				easaemad14@gmail.com
*
* Description:	Implements the base functionality of the GoF Observer pattern
*/
#include "stdafx.h"
#include "subject.hpp"
#include "observer.hpp"

using namespace std;


// Add a new observer to our list
void Subject::Attach(Observer *o)
{
	// NOTE: Do I care about multiple instances?
	m_observers.push_back(o);
}

// Remove our observer from list of observers (if applicable)
void Subject::Detach(Observer *o)
{
	// NOTE: Dependent on the question above, you may have multiple instances to remove
	for (vector<Observer *>::iterator it = m_observers.begin(); it != m_observers.end(); it++) {
		if (*it == o) {
			m_observers.erase(it);
		}
	}
}

// Notify all observers of changes
void Subject::Notify()
{
	for (auto o : m_observers) {
		o->Update();
	}
}