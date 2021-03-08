#include "MicroBit.h"
#include "mruby.h"

MicroBit uBit;

#ifndef MRB_NO_GEMS
extern "C" void
mrb_init_mrbgems(mrb_state *mrb)
{
    // TODO: initialize mrbgems
}
#endif

int 
main()
{
    const char *msg = "HELLO Micro:bit!";

    mrb_state *mrb = mrb_open();
    if (mrb) {
        msg = "mruby VM ready!";
    }

    uBit.init();

    while(1) {
        uBit.display.scroll(msg);
    }

    mrb_close(mrb);
}
