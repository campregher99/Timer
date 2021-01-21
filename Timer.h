#ifndef TIMER_H
#define TIMER_H 

class Timer
{
private:
	unsigned long long int time {0};	//lasso di tempo

public:
	Timer() = default;
	~Timer() = default;

	virtual bool isPassed();
	virtual bool startCount();
	
	bool setTimeMicros(unsigned long long int _time);
	bool setTimeMillis(unsigned long long int _time);
	bool setTimeSecond(unsigned long long int _time);
	bool setTimeMinute(unsigned long long int _time);
	bool setTimeHour(unsigned long long int _time);
	bool setTimeDay(unsigned long int _time);
	bool setTimeWeek(unsigned long int _time);
	
	unsigned long long int getTimeMicros() const;
	unsigned long long int getTimeMillis() const;
	unsigned long long int getTimeSecond() const;
	unsigned long long int getTimeMinute() const;
	unsigned long long int getTimeHour() const;
	unsigned long int getTimeDay() const;
	unsigned long int getTimeWeek() const;

};

#endif