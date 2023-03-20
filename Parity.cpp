#include "Parity.h"

void Parity::prepParityCalc()
{

}

void Parity::prepParityFix()
{

}

unsigned char Parity::parityCalc(Paritied pAmounts, int size)
{
    unsigned char parityResult = 0x00;
    unsigned char singleParity = 0x00;
    unsigned char andMask = 0x01;
    for(int shift = 0; shift < 8; shift++)
    {
        for (int counter = 0; counter < size; counter++)
        {
            singleParity = singleParity ^ ((pAmounts[counter] >> shift) & andMask);
        }
        parityResult = parityResult + (singleParity << shift);
        singleParity = 0x00;
    }
    return parityResult;
}

int Parity::parityCheck(Paritied pCheck, int size)
{
    int parityResult = 0;
    unsigned char singleParity = 0x00;
    unsigned char andMask = 0x01;
    for(int shift = 0; shift < 8; shift++)
    {
        for (int counter = 0; counter < size; counter++)
        {
            singleParity = singleParity ^ ((pCheck[counter] >> shift) & andMask);
        }
        parityResult = parityResult + (int)singleParity;
        singleParity = 0x00;
    }
    return parityResult;
}