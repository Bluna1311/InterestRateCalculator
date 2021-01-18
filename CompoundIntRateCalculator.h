#include <iostream>

class CompoundIntRateCalculator {

public:

	CompoundIntRateCalculator(double rate);
	CompoundIntRateCalculator(const CompoundIntRateCalculator& v);
	CompoundIntRateCalculator& operator =(const CompoundIntRateCalculator& v);
	~CompoundIntRateCalculator();

	double multiplePeriod(double value, int numOfPeriods);
	double continuousCompounding(double value, int numOfPeriods);

private:
	double m_rate;
};

