#include "c_ButtonPhone.h"

c_ButtonPhone::c_ButtonPhone():c_Phone()
{
	this->countOfButtons = 11;
	this->buttons = new char[countOfButtons + 1];
	strcpy_s(this->buttons, countOfButtons + 1, "123456789*#");
}

c_ButtonPhone::c_ButtonPhone(const char* name):c_Phone(name)
{
	this->countOfButtons = 11;
	this->buttons = new char[countOfButtons + 1];
	strcpy_s(this->buttons, countOfButtons + 1, "123456789*#");
}

char c_ButtonPhone::getButton(int index) const
{
	if (index >= 0 && index < countOfButtons)
		return buttons[index];
	return '\0';
}

void c_ButtonPhone::setButtons(const char* buttons)
{
	if (buttons != nullptr)
	{
		if (this->buttons)
		{
			delete[] this->buttons;
		}
		this->buttons = new char[strlen(buttons) + 1];
		strcpy_s(this->buttons, strlen(buttons) + 1, buttons);
		this->countOfButtons = strlen(buttons);
	}
}

std::ostream& operator<<(std::ostream& out, const c_ButtonPhone& phone)
{
	out << "Name: " << phone.name << "\tType: button\tButtons: " << phone.buttons << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_ButtonPhone& phone)
{
	char* tmp = new char[MAX_LENGTH];
	in.getline(tmp, MAX_LENGTH);
	phone.setName(tmp);

	in.getline(tmp, MAX_LENGTH);
	phone.setButtons(tmp);

	return in;
}
