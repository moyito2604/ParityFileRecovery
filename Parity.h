#ifndef PARITY_H
#define PARITY_H

#include <vector>
#include <cstdio>
#include <iostream>
#include <string>

class Parity {
    public:
        void prepParityCalc();
        void prepParityFix();
    private:
        int parityCalc(std::vector<FILE *>);
        void parityFix(std::vector<FILE *>, FILE *);
        int parityAmount;
        std::vector<std::string> filenames;
};

#endif