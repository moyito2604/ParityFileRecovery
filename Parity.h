#ifndef PARITY_H
#define PARITY_H

#include <vector>
#include <fstream>
#include <iostream>
#include <string>

class Parity {
    public:
        void prepParityCalc();
        void prepParityFix();
        unsigned char parityCalc(std::vector<unsigned char>);
        //void openFiles();
    private:
        
        int parityCheck(std::vector<unsigned char>);
        std::vector<std::fstream> openedFiles;
};

#endif