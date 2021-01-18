// InterestRateCalculator.cpp prject : for the sake of practice, the interrest Calcs have been put into different files. this could
// have been done in better practice if you use a class structure. base class takes with protected rate and then derived it in the 2 seperate classes/
//This file contains the 'main' function. Program execution begins and ends there.
//
#include "IntRateCalculator.h"
#include "CompoundIntRateCalculator.h"
#include <iostream>
// going to add agurments to the program itself 
int main(int argc, const char * argv[])
{
    if(argc != 4)
    {
        std::cout << "usage progName <interest rate> <value> <number of periods>" << std::endl;
        return 1;
    }

    double rate = atof(argv[1]);
    double value = atof(argv[2]);
    double numOfPeriods = atoi(argv[3]);

    IntRateCalculator IRC(rate);
    CompoundIntRateCalculator CIRC(rate);
    double CresNonCont = CIRC.multiplePeriod(value, numOfPeriods);
    double CresCont = CIRC.continuousCompounding(value, numOfPeriods);
    double res = IRC.singlePeriod(value);
    std::cout << "single compound result is " << res << std::endl;
    std::cout << "mutliple compound (4) result is " << CresNonCont << std::endl;
    std::cout << "continuous compound (4) result is " << CresCont << std::endl;
    system("pause");
    return 0;
}

