#include "c_Contact.h"
#define MAX_LENGTH 100

c_Contact::c_Contact()
{
	this->name = new char[strlen("Unknown") + 1];
	strcpy_s(this->name, strlen("Unknown") + 1, "Unknown");
}

c_Contact::c_Contact(const char* name, const char* number):c_Contact()
{
	if (name != nullptr)
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}

	if (number != nullptr)
	{
		this->number = new char[strlen(number) + 1];
		strcpy_s(this->number, strlen(number) + 1, number);
	}
}

c_Contact::c_Contact(const c_Contact& contact)
{
	if (contact.name != nullptr)
	{
		this->name = new char[strlen(contact.name) + 1];
		strcpy_s(this->name, strlen(contact.name) + 1, contact.name);
	}

	if (contact.number != nullptr)
	{
		this->number = new char[strlen(contact.number) + 1];
		strcpy_s(this->number, strlen(contact.number) + 1, contact.number);
	}
}

void c_Contact::setName(const char* name)
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

void c_Contact::setNumber(const char* number)
{
	if (number != nullptr)
	{
		if (this->number)
		{
			delete[] this->number;
		}
		this->number = new char[strlen(number) + 1];
		strcpy_s(this->number, strlen(number) + 1, number);
	}
}

std::ostream& operator<<(std::ostream& out, const c_Contact& contact)
{
	out << "Name: " << contact.name << "\tNumber: " << contact.number << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_Contact& contact)
{
	char* tmp = new char[MAX_LENGTH];
	in.getline(tmp, MAX_LENGTH);
	contact.setName(tmp);

	in.getline(tmp, MAX_LENGTH);
	contact.setNumber(tmp);

	return in;
}
