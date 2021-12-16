#pragma once
#include "c_Phone.h"
#include"c_PhoneBook.h"

class c_Smartphone :
    public c_Phone
{
protected:
    float diagonal;
    c_PhoneBook contacts;

public:
    c_Smartphone();
    c_Smartphone(const char* name, float diagonal);

    float getDiagonal() const;

    void setDiagonal(float diagonal);

    friend std::ostream& operator<<(std::ostream& out, const c_Smartphone& phone);
    friend std::istream& operator>>(std::istream& in, c_Smartphone& phone);
};

