#include "c_Phone.h"

c_Phone::c_Phone()
{
	this->name = new char[strlen("Unknown") + 1];
	strcpy_s(this->name, strlen("Unknown") + 1, "Unknown");
}

c_Phone::c_Phone(const char* name):c_Phone()
{
	if (name != nullptr)
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
}

void c_Phone::setName(const char* name)
{
	if (name != nullptr)
	{
		if (this->name)
		{
			delete[] this->name;
		}
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
}

void c_Phone::call(const char* number) const
{
	std::cout << "Calling " << number<< "...\n";
}

std::ostream& operator<<(std::ostream& out, const c_Phone& phone)
{
	out << "Name: " << phone.name << "\tType: disk\n";
	return out;
}
