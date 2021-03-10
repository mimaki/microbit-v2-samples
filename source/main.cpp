#include "MicroBit.h"
#include "mruby.h"
#include "mruby/dump.h"
#include "mruby/_string.h"

MicroBit uBit;

extern "C" void mbprintf(const char *msg)
{
    uBit.serial.printf(msg);
}

#define INCLUDE_MRUBY
// #define MRB_NO_GEMS

#ifdef INCLUDE_MRUBY
const uint8_t appbin[] = {
0x52,0x49,0x54,0x45,0x30,0x32,0x30,0x30,0x00,0x00,0x00,0xac,0x4d,0x41,0x54,0x5a,
0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x00,0x7f,0x30,0x33,0x30,0x30,
0x00,0x00,0x00,0x47,0x00,0x01,0x00,0x04,0x00,0x01,0x00,0x00,0x00,0x16,0x14,0x01,
0x51,0x02,0x00,0x2f,0x01,0x00,0x01,0x04,0x01,0x0a,0x59,0x02,0x00,0x30,0x01,0x01,
0x00,0x39,0x01,0x6b,0x00,0x01,0x00,0x00,0x0d,0x48,0x65,0x6c,0x6c,0x6f,0x2c,0x20,
0x6d,0x72,0x75,0x62,0x79,0x21,0x00,0x00,0x02,0x00,0x03,0x70,0x70,0x70,0x00,0x00,
0x05,0x74,0x69,0x6d,0x65,0x73,0x00,0x00,0x00,0x00,0x2c,0x00,0x02,0x00,0x05,0x00,
0x00,0x00,0x00,0x00,0x0f,0x35,0x00,0x00,0x00,0x14,0x02,0x51,0x03,0x00,0x2f,0x02,
0x00,0x01,0x39,0x02,0x00,0x01,0x00,0x00,0x01,0x2a,0x00,0x00,0x01,0x00,0x03,0x70,
0x70,0x70,0x00,0x4c,0x56,0x41,0x52,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x01,0x00,
0x01,0x26,0x00,0x00,0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};

extern "C" mrb_value
ppp(mrb_state *mrb, mrb_value self)
{
    // mrb_value v;
    const char *str;

    // uBit.serial.printf("ppp start.\n");
    mrb_get_args(mrb, "z", &str);
    // mrb_get_args(mrb, "o", &v);
    // uBit.serial.printf("o.tt: %d\n", mrb_type(v));

    // uBit.serial.printf("mrb_immediate_p(v): %d\n", mrb_immediate_p(v));
    // uBit.serial.printf("mrb_val_union(v).bp->tt: %d\n", mrb_val_union(v).bp->tt);

    // if (mrb_string_p(v)) {
        // const char *str = RSTRING_PTR(v);
        // uBit.serial.printf("str: %s\n", str);
        // uBit.display.scroll(str);
    // }
    // else {
    //     uBit.serial.printf("argument is not String.\n");
    // }

    uBit.serial.printf("ppp \"%s\"\n", str);
    uBit.display.scroll(str);

    // uBit.serial.printf("ppp end.\n");
    return mrb_nil_value();
}

#ifndef MRB_NO_GEMS
extern "C" void
mrb_init_mrbgems(mrb_state *mrb)
{
    // TODO: initialize mrbgems
    mrb_define_method(mrb, mrb->object_class, "ppp", ppp, MRB_ARGS_REQ(1));
}
#endif
#endif

extern volatile uint32_t _p_l;
extern volatile uint32_t _p_h;
extern volatile size_t _s_l;
extern volatile size_t _s_h;

int 
main()
{
    // demos
    extern void blinky();
    // extern void button_blinky_test();
    // extern void display_button_icon_test();
    // extern void display_brightness_AB_test();
    // extern void display_lightlevel_test();
    // extern void display_lightlevel_test2();
    // extern void accelerometer_test1();
    // extern void accelerometer_test2();
    // extern void out_of_box_experience();

    const char *msg = "HELLO Micro:bit!";

    // uBit.serial.printf("Start demo.\n");
    // uBit.serial.printf("sizeof(mrb_value): %d\n", sizeof(mrb_value));

#ifdef INCLUDE_MRUBY
    mrb_state *mrb = mrb_open();
    if (mrb) {
        msg = "Hello, mruby!";
    }
    uBit.serial.printf("mrb_open() done.\n");

    // uBit.serial.printf("_p_l: 0x%x (%d)\n", _p_l, _s_l);
    // uBit.serial.printf("_p_h: 0x%x (%d)\n", _p_h, _s_h);
#endif

    uBit.init();

    // uBit.serial.printf("Start scroll demo.\n");

#ifdef INCLUDE_MRUBY
    mrb_load_irep(mrb, appbin);
    if (mrb->exc) {
        uBit.serial.printf("mrb_load_irep: exception occured!");
    }
    // uBit.serial.printf("_p_l: 0x%x (%d)\n", _p_l, _s_l);
    // uBit.serial.printf("_p_h: 0x%x (%d)\n", _p_h, _s_h);
#endif

    // while(1) {
    //     uBit.display.scroll(msg);
    // }

#ifdef INCLUDE_MRUBY
    mrb_close(mrb);
    // uBit.serial.printf("mrb_close() done.\n");
#endif

    // uBit.serial.printf("Start blinky demo.\n");

    blinky();
}
