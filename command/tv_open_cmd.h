#pragma once

#include "command.h"
#include "televation.h"

class TVOpenCmd : public Command
{
public:
    TVOpenCmd(Televation *tv);
    virtual ~TVOpenCmd();

    void exec() override;
    
private:
    Televation *pTv;    
};
