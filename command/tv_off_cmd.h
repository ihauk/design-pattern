#pragma once

#include "command.h"
#include "televation.h"

class TVOffCmd : public Command
{

public:
    TVOffCmd(Televation *tv);
    virtual ~TVOffCmd();

    void exec() override;

private:
    Televation *pTv;
};

