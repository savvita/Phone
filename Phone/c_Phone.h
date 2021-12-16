#pragma once
#include<iostream>
#define MAX_LENGTH 100

class c_Phone
{
protected:
	char* name;

public:
	c_Phone();
	c_Phone(const char* name);

	inline const char* getName() const
	{
		return this->name;
	}

	void setName(const char* name);

	void call(const char* number) const;

	friend std::ostream& operator<<(std::ostream& out, const c_Phone& phone);
};

