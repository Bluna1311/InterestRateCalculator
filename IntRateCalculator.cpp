#include "IntRateCalculator.h"

IntRateCalculator::IntRateCalculator(double rate)
	:m_rate(rate)
{
	// just to assign m_rate 
}

IntRateCalculator::~IntRateCalculator()
{
// simple distructor, we didnt even have to make it since it has a built in default one we use without defining
}

IntRateCalculator::IntRateCalculator(const IntRateCalculator& v)
	:m_rate(v.m_rate)
{
	// copy onstructor.  the m_rate of this will be equal to the rate of another object.
}
IntRateCalculator& IntRateCalculator::operator=(const IntRateCalculator &v)
{
	if (&v != this)
	{
		this->m_rate = v.m_rate;
	}
	return *this;
}