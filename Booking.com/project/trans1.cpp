#include "trans1.h"

void trans1::setStart(QString c) {
    this->Start.setCountry(c);
}

void trans1::setEnd(QString c) {
    this->End.setCountry(c);
}

void trans1::setPrice(float p) {
    Price = p;
}
void trans1::setIndv(int in) {
    IndvidualsNo = in;
}

void trans1::setDistance(float dis) {
    Distance = dis;
}


Country trans1::getStart() {
    return Start;
}

Country trans1::getEnd() {
    return End;
}

float trans1::getPrice() {
    return Price;
}
int trans1::getIndv() {
    return IndvidualsNo;
}

float trans1::getDistance() {
    return Distance;
}
bool* trans1::FindEmpty() {
    bool empty = false;
    bool* x = &empty;
    return x;
}

void trans1::Reserve() {

}

bool trans1::IsEmpty() {
    return false;
}

double trans1::CalculatePrice() {
    return 0;
}

void trans1::Print() {

}
void trans1::setType(QString t)
{
    this->Type=t;
}
QString trans1::getType()
{
    return Type;
}

