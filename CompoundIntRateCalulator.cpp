#include "CompoundIntRateCalculator.h"

CompoundIntRateCalculator::CompoundIntRateCalculator(double rate)
	:m_rate(rate)
{
	// just to assign m_rate 
}

CompoundIntRateCalculator::~CompoundIntRateCalculator()
{
// simple distructor, we didnt even have to make it since it has a built in default one we use without defining
}

CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator& v)
	:m_rate(v.m_rate)
{
	// copy onstructor.  the m_rate of this will be equal to the rate of another object.
}
CompoundIntRateCalculator& CompoundIntRateCalculator::operator=(const CompoundIntRateCalculator&v)
{
	if (&v != this)
	{
		this->m_rate = v.m_rate;
	}
	return *this;
}

double CompoundIntRateCalculator::multiplePeriod(double value, int numOfPeriods) 
{
	double f = value * pow((1 + m_rate), numOfPeriods);
	return f;
}

double CompoundIntRateCalculator::continuousCompounding(double value, int numOfPeriods)
{
	double f = value * exp(m_rate * numOfPeriods);
	return f;
}

