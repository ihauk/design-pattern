#include "tv_off_cmd.h"
#include <iostream>

TVOffCmd::TVOffCmd(Televation *tv):pTv(tv)
{
}

TVOffCmd::~TVOffCmd()
{
    std::cout << "~TVOffCmd()" << std::endl;
}


void TVOffCmd::exec() 
{
    std::cout << "tv off cmd --> exec" << std::endl;
    pTv->doOffAction();
}