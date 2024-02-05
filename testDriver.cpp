#include "Parity.h"

int main(int argc, char* argv[]){
    Parity test;
    Paritied beans = (Paritied)malloc(6 * sizeof(unsigned char));
    beans[0] = 0x34;
    beans[1] = 0xCC;
    beans[2] = 0x11;
    beans[3] = 0x55;
    beans[4] = 0xFF;
    std::cout << "The Parity Value is 0x" << std::hex << (int)test.parityCalc(beans, 5) << std::endl;
    beans[5] = 0x43;
    std::cout << "There are " << test.parityCheck(beans, 6) << " Parity Errors" << std::endl;
}