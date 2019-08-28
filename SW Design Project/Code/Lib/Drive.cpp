

#include "Arduino.h"

// pin definitions
#define pin_enA 6
#define pin_enB 5
#define pin_in1 7
#define pin_in2 8
#define pin_in3 9
#define pin_in4 11

Drive::Drive(){
    pinMode(pin_in1, OUTPUT);
    pinMode(pin_in2, OUTPUT);
    pinMode(pin_in3, OUTPUT);
    pinMode(pin_in4, OUTPUT);
    pinMode(pin_enA, OUTPUT);
    pinMode(pin_enB, OUTPUT);
    const _left_in1 = pin_in1;
    const _left_in2 = pin_in2;
    const _right_in1 = pin_in3;
    const _right_in2 = pin_in4;
    const _left_en = pin_enA;
    const _right_en = pin_enB;
}

Drive::enable(){
    digitalWrite(_left_en, 1);
    digitalWrite(_right_en, 1);
}

Drive::disable(){
    digitalWrite(_left_en, 1);
    digitalWrite(_right_en,1);
}












