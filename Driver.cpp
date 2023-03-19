#include "Parity.h"

int main(int argc, char* argv[]){
    Parity test;
    std::vector<unsigned char> beans;
    beans.push_back(0x04);
    beans.push_back(0x0C);
    beans.push_back(0x01);
    beans.push_back(0x05);
    beans.push_back(0x0F);
    test.parityCalc(beans);
}