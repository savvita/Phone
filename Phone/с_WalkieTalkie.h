#pragma once
#include "c_Phone.h"
class ñ_WalkieTalkie :
    public c_Phone
{
protected:
    float antenna;
    float hz;

public:
    ñ_WalkieTalkie();

    ñ_WalkieTalkie(const char* name, float antenna, float hz);


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

    friend std::ostream& operator<<(std::ostream& out, const ñ_WalkieTalkie& phone);
    friend std::istream& operator>>(std::istream& in, ñ_WalkieTalkie& phone);
};

