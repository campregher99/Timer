#include "Timer.h"

bool setTimeMicros(unsigned long long int _time)
{
	time = _time;
	return true;
}

bool setTimeMillis(unsigned long long int _time)
{
	time = _time * 1000;
	return true;
}

bool setTimeSecond(unsigned long long int _time)
{
	time = _time * 1000000;
	return true;
}

bool setTimeMinute(unsigned long long int _time)
{
	time = _time * 60000000;
	return true;
}

bool setTimeHour(unsigned long long int _time)
{
	time = _time * 3600000000;
	return true;
}

bool setTimeDay(unsigned long int _time)
{
	time = (unsigned long long int) _time * 86400000000;
	return true;
}

bool setTimeWeek(unsigned long int _time)
{
	time = (unsigned long long int) _time * 604800000000;
}

unsigned long long int getTimeMicros() const
{
	return time;
}

unsigned long long int getTimeMillis() const
{
	return time / 1000.0;
}

unsigned long long int getTimeSecond() const
{
	return time / 1000000.0;
}

unsigned long long int getTimeMinute() const
{
	return time / 60000000.0;
}

unsigned long long int getTimeHour() const
{
	return time / 3600000000.0;
}

unsigned long int getTimeDay() const
{
	return time / 86400000000.0;
}

unsigned long int getTimeWeek() const
{
	return time / 604800000000.0; 
}