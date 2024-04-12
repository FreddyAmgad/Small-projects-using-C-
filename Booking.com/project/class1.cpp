#include "class1.h"


class1::class1() {
    FreeWifi = false;
    MassageChair = false;
    ExtraFee = 0.0;
    Type = " ";
}

void class1::setFreeWifi(bool x) {
    FreeWifi = x;
}

void class1::setMassageChair(bool x) {
    MassageChair = x;
}

void class1::setType(string x) {
    Type = x;
}

bool class1::getFreeWifi() {
    return FreeWifi;
}

bool class1::getMassageChair() {
    return MassageChair;
}

float class1::getExtraFee() {
    return ExtraFee;
}

string class1::getType() {
    return Type;
}

First::First() {
    FreeWifi = true;
    MassageChair = true;
    ExtraFee = 2;
    Type = "First Class";
}

Business::Business() {
    FreeWifi = true;
    MassageChair = false;
    ExtraFee = 1.5;
    Type = "Business Class";
}

Economy::Economy() {
    FreeWifi = false;
    MassageChair = false;
    ExtraFee = 1;
    Type = "Econmy Class";
}
