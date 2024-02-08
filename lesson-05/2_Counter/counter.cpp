#include <iostream>
#include "Counter.h"

Counter::Counter() 
	: m_num{ 1 } 
{}

Counter::Counter(int num) 
	: m_num{ num } 
{}

int Counter::increaseByOne() { return m_num++; }

int Counter::decreaseByOne() { return m_num--; }

void Counter::print() const { std::cout << m_num << "\n"; }

void Counter::setNum(int num) { m_num = num; }