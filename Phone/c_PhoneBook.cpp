#include "c_PhoneBook.h"

c_PhoneBook::c_PhoneBook()
{
	this->contacts = nullptr;
	this->count = 0;
}

void c_PhoneBook::AddContact(const c_Contact& contact)
{
	c_Contact* tmp = new c_Contact[count + 1];
	for (int i = 0; i < count; i++)
	{
		tmp[i].setName(this->contacts[i].getName());
		tmp[i].setName(this->contacts[i].getNumber());
	}
	tmp[count].setName(contact.getName());
	tmp[count].setNumber(contact.getNumber());
	count++;
}

std::ostream& operator<<(std::ostream& out, const c_PhoneBook& contacts)
{
	for (int i = 0; i < contacts.count; i++)
	{
		out << contacts.contacts[i];
	}
	return out;
}

