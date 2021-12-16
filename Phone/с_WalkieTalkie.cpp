#include "ñ_WalkieTalkie.h"

ñ_WalkieTalkie::ñ_WalkieTalkie():c_Phone()
{
	this->antenna = 0;
	this->hz = 0;
}

ñ_WalkieTalkie::ñ_WalkieTalkie(const char* name, float antenna, float hz):c_Phone(name)
{
	this->antenna = antenna;
	this->hz = hz;
}

void ñ_WalkieTalkie::setAntenna(float length)
{
	if (length > 0)
	{
		this->antenna = length;
	}
}

void ñ_WalkieTalkie::setHZ(float hz)
{
	if (hz > 0)
	{
		this->hz = hz;
	}
}

std::ostream& operator<<(std::ostream& out, const ñ_WalkieTalkie& phone)
{
	out << "Name: " << phone.name << "\tType: walkie-talkie\tAntenna: " << phone.antenna << "m\tHZ: " << phone.hz << "Hz\n";
	return out;
}

std::istream& operator>>(std::istream& in, ñ_WalkieTalkie& phone)
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
