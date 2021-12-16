#pragma once
#include "c_Phone.h"

class c_ButtonPhone :
    public c_Phone
{
protected:
    char* buttons;
    int countOfButtons;

public:
    c_ButtonPhone();
    c_ButtonPhone(const char* name);

    char getButton(int index) const;
    void setButtons(const char* buttons);

    friend std::ostream& operator<<(std::ostream& out, const c_ButtonPhone& phone);

    friend std::istream& operator>>(std::istream& in, c_ButtonPhone& phone);
};

