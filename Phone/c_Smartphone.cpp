#include "c_Smartphone.h"

c_Smartphone::c_Smartphone():c_Phone()
{
	this->diagonal = 0;
}

c_Smartphone::c_Smartphone(const char* name, float diagonal):c_Phone(name)
{
	this->diagonal = diagonal;
}

float c_Smartphone::getDiagonal() const
{
	return this->diagonal;
}

void c_Smartphone::setDiagonal(float diagonal)
{
	if (diagonal > 0)
	{
		this->diagonal = diagonal;
	}
}

std::ostream& operator<<(std::ostream& out, const c_Smartphone& phone)
{
	out << "Name: " << phone.name << "\tType: smartphone\tDiagonal: " << phone.diagonal << "\n";
	out << "Contacts:\n";
	out << phone.contacts;
	return out;
}

std::istream& operator>>(std::istream& in, c_Smartphone& phone)
{
	char* tmp = new char[MAX_LENGTH];
	in.getline(tmp, MAX_LENGTH);
	phone.setName(tmp);

	float diag;
	in >> diag;
	phone.setDiagonal(diag);

	return in;
}
