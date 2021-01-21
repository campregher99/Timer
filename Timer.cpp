#include "Timer.h"

bool Timer::setTimeMicros(unsigned long long int _time)
{
	time = _time;
	return true;
}

bool Timer::setTimeMillis(unsigned long long int _time)
{
	time = _time * 1000;
	return true;
}

bool Timer::setTimeSecond(unsigned long long int _time)
{
	time = _time * 1000000;
	return true;
}

bool Timer::setTimeMinute(unsigned long long int _time)
{
	time = _time * 60000000;
	return true;
}

bool Timer::setTimeHour(unsigned long long int _time)
{
	time = _time * 3600000000;
	return true;
}

bool Timer::setTimeDay(unsigned long int _time)
{
	time = (unsigned long long int) _time * 86400000000;
	return true;
}

bool Timer::setTimeWeek(unsigned long int _time)
{
	time = (unsigned long long int) _time * 604800000000;
}

unsigned long long int Timer::getTimeMicros() const
{
	return time;
}

unsigned long long int Timer::getTimeMillis() const
{
	return time / 1000.0;
}

unsigned long long int Timer::getTimeSecond() const
{
	return time / 1000000.0;
}

unsigned long long int Timer::getTimeMinute() const
{
	return time / 60000000.0;
}

unsigned long long int Timer::getTimeHour() const
{
	return time / 3600000000.0;
}

unsigned long int Timer::getTimeDay() const
{
	return time / 86400000000.0;
}

unsigned long int Timer::getTimeWeek() const
{
	return time / 604800000000.0; 
}