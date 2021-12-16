#pragma once
#include "c_Phone.h"
class �_WalkieTalkie :
    public c_Phone
{
protected:
    float antenna;
    float hz;

public:
    �_WalkieTalkie();

    �_WalkieTalkie(const char* name, float antenna, float hz);


    //gets
    inline float getAntenna() const
    {
        return this->antenna;
    }

    inline float getHZ() const
    {
        return this->hz;
    }

    //sets
    void setAntenna(float length);
    void setHZ(float hz);

    friend std::ostream& operator<<(std::ostream& out, const �_WalkieTalkie& phone);
    friend std::istream& operator>>(std::istream& in, �_WalkieTalkie& phone);
};

