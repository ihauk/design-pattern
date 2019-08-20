#include "televation.h"
#include <iostream>

Televation::Televation(/* args */)
{
}

Televation::~Televation()
{
    std::cout << "~Televation " << std::endl;
}

void Televation::doOpenAction()
{
    std::cout << "televation do open action " << std::endl;
}

void Televation::doOffAction()
{
    std::cout << "televation do off action " << std::endl;
}