#pragma once


#include "command.h"

class Controller
{

public:
    Controller(Command *open_cmd, Command *off_cmd);
    virtual ~Controller();

    void openTV();
    void offTV();

private:
    Command *p_open_cmd;
    Command *p_off_cmd;
};