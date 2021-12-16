#pragma once
#include<iostream>

class c_Contact
{
private:
	char* name;
	char* number;
public:
	c_Contact();
	c_Contact(const char* name, const char* number);
	c_Contact(const c_Contact& contact);

	//gets
	inline const char* getName() const
	{
		return this->name;
	}

	inline const char* getNumber() const
	{
		return this->number;
	}

	//sets
	void setName(const char* name);

	void setNumber(const char* number);

	friend std::ostream& operator<<(std::ostream& out, const c_Contact& contact);
	friend std::istream& operator>>(std::istream& in, c_Contact& contact);
};

