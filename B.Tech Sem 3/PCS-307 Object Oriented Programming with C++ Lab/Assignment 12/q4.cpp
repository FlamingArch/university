#include <iostream>

class Temperature
{
private:
    float temp;
public:
    Temperature(float temp)
    {
        this->temp = temp;
    }   
    ~Temperature();
    void setTempData(float temp)
    {
        this->temp = temp;
    }
};

class Fahrenheit : Temperature
{
private:
    float ctemp;
public:
    Temperature changeTempFtoC()
    {
        return (ctemp - 32) * (5 / 9);
    }
};

class Celsius : Temperature
{
private:
    float ftemp;
public:
    Temperature changeTempFtoC()
    {
        return (ftemp + 32) * (9 / 5);
    }
};
