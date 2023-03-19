#include "Parity.h"

void Parity::prepParityCalc()
{

}

void Parity::prepParityFix()
{

}

unsigned char Parity::parityCalc(std::vector<unsigned char> pAmounts)
{
    unsigned char parityResult = 0x00;
    unsigned char singleParity = 0x00;
    int size = pAmounts.size();
    unsigned char andMask = 0x01;
    for(int shift = 0; shift < 7; shift++)
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

int Parity::parityCheck(std::vector<unsigned char> pChecks)
{

}