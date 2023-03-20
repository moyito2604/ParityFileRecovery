#ifndef PARITY_H
#define PARITY_H

#include <fstream>
#include <iostream>
#include <string>

typedef unsigned char * Paritied;

class Parity {
    public:
        void prepParityCalc();
        void prepParityFix();
        unsigned char parityCalc(Paritied, int);
        int parityCheck(Paritied, int);
        //void openFiles();
    private:
        
        
        Paritied openedFiles;
};

#endif