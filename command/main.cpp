#include "tv_off_cmd.h"
#include "tv_open_cmd.h"
#include "televation.h"
#include "controller.h"

int main(int argc, char const *argv[])
{
    
    Televation *tv = new Televation();
    
    TVOpenCmd *open_cmd = new TVOpenCmd(tv);
    TVOffCmd *off_cmd = new TVOffCmd(tv);

    Controller *contoller = new Controller(open_cmd,off_cmd);


    contoller->openTV();
    contoller->offTV();
    

    delete contoller;
    delete off_cmd;
    delete open_cmd;
    delete tv;

    return 0;
}
