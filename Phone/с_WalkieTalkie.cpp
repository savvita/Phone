#include "�_WalkieTalkie.h"

�_WalkieTalkie::�_WalkieTalkie():c_Phone()
{
	this->antenna = 0;
	this->hz = 0;
}

�_WalkieTalkie::�_WalkieTalkie(const char* name, float antenna, float hz):c_Phone(name)
{
	this->antenna = antenna;
	this->hz = hz;
}

void �_WalkieTalkie::setAntenna(float length)
{
	if (length > 0)
	{
		this->antenna = length;
	}
}

void �_WalkieTalkie::setHZ(float hz)
{
	if (hz > 0)
	{
		this->hz = hz;
	}
}

std::ostream& operator<<(std::ostream& out, const �_WalkieTalkie& phone)
{
	out << "Name: " << phone.name << "\tType: walkie-talkie\tAntenna: " << phone.antenna << "m\tHZ: " << phone.hz << "Hz\n";
	return out;
}

std::istream& operator>>(std::istream& in, �_WalkieTalkie& phone)
{
	char* tmp = new char[MAX_LENGTH];
	in.getline(tmp, MAX_LENGTH);
	phone.setName(tmp);

	float diag;
	in >> diag;
	phone.setAntenna(diag);

	in >> diag;
	phone.setHZ(diag);

	return in;
}
