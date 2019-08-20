#include "controller.h"
#include <iostream>

Controller::Controller(Command *open_cmd, Command *off_cmd):p_open_cmd(open_cmd),p_off_cmd(off_cmd)
{
}

Controller::~Controller()
{
    std::cout << "~Controller " << std::endl;
}

void
Controller::openTV()
{
    std::cout << "=========== controller open tv" << std::endl;
    p_open_cmd->exec();
}

void
Controller::offTV()
{
     std::cout << "=========== controller off tv" << std::endl;
     p_off_cmd->exec();
}
