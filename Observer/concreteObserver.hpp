#pragma once
/**
* File:			concreteObserver.hpp
* Author:		Easa El Sirgany
*				easaemad14@gmail.com
*
* Description:	This represents base classes for the GoF Observer pattern, as shown in the
*				UML Class Diagram (p294). All variable types are placeholders, unless
*				otherwise noted.
*/
#include "observer.hpp"
#include "concreteSubject.hpp"


class ConcreteObserver : public Observer {
public:
	void Update() override {
		observerState = m_subject.GetState();
	}

private:
	ConcreteSubject m_subject;
	bool observerState{ false };
};