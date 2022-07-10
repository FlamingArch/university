#include <iostream>

class Time
{
private:
    void fix();
public:
    int hours;
    int minutes;
    int seconds;
    Time(int seconds);
    Time(int hours, int minutes, int seconds);
    Time* operator+ (Time toAdd);
    ~Time();
};

Time::Time(int seconds)
{
    this->seconds = seconds;
    fix();
}
Time::Time(int hours, int minutes, int seconds)
{
    this->seconds = seconds;
    this->minutes = minutes;
    this->hours = hours;
    fix();
}

Time::~Time()
{
}

Time* Time::operator+(Time toAdd)
{
    return new Time(hours + toAdd.hours, minutes + toAdd.minutes, seconds+toAdd.seconds);
}

void Time::fix()
{
    while (seconds>=60)
    {
        minutes++;
        seconds-=60;
    }
    while (minutes>=60)
    {
        hours++;
        minutes-=60;
    }
}
