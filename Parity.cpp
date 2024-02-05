#include "Parity.h"

void Parity::prepParityCalc()
{

}

void Parity::prepParityFix()
{

}

//This function calculates a single even parity value for an array of bytes
unsigned char Parity::parityCalc(Paritied pAmounts, int size)
{
    /**
     * First it sets up variables, with parityResult being the result for the entire parity bit,
     * singleParity being the result of a single bit, and the andMask to isolate a single bit.
     **/
    unsigned char parityResult = 0x00;
    unsigned char singleParity = 0x00;
    unsigned char andMask = 0x01;

    //Then it goes into a for loop that will go through the entire byte
    for(int shift = 0; shift < 8; shift++)
    {

        //Another for loop iterates through the array of bytes
        for (int counter = 0; counter < size; counter++)
        {

            //Calculates the parity for the single bit across the entire array and shifts it to what bit we are working with
            singleParity = singleParity ^ ((pAmounts[counter] >> shift) & andMask);
            
        }

        //Then it places the single parity result and shifts it back to where it needs to go
        parityResult = parityResult + (singleParity << shift);

        //Then the single parity result is cleared for the next iteration
        singleParity = 0x00;
    }

    //Once parity is calculated, it returns the result of the parity calculation
    return parityResult;
}


//This function checks how many parity errors are in an array of bytes
int Parity::parityCheck(Paritied pCheck, int size)
{

    //First it sets the amount of parity bytes to 0 and sets up variables to check a single byte of parity
    int parityResult = 0;
    unsigned char singleParity = 0x00;
    unsigned char andMask = 0x01;

    //Then it goes through the array to check how many parity errors they are
    for(int shift = 0; shift < 8; shift++)
    {
        for (int counter = 0; counter < size; counter++)
        {

            //If the result is 0, it doesn't have an error, if the result is 1, there's an error 
            singleParity = singleParity ^ ((pCheck[counter] >> shift) & andMask);
        }

        //The error is placed into the final count
        parityResult = parityResult + (int)singleParity;
        singleParity = 0x00;
    }

    //The amount of errors is returned
    return parityResult;
}