#include "tv_open_cmd.h"
#include <iostream>

TVOpenCmd::TVOpenCmd(Televation *tv):pTv(tv){

}

TVOpenCmd::~TVOpenCmd(){

    std::cout << "~TVOpenCmd()" << std::endl;

}

void TVOpenCmd::exec(){

    std::cout << "tv open cmd --> exec" << std::endl;
    pTv->doOpenAction();

}

