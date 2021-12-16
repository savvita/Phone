#pragma once
#include"c_Contact.h"
class c_PhoneBook
{
private:
	c_Contact* contacts;
	int count;
public:
	c_PhoneBook();

	//gets
	inline int getCount() const
	{
		return this->count;
	}

	c_Contact& operator[](const int index)
	{
		if (index >= 0 && index < count)
		{
			return this->contacts[index];
		}
	}

	friend std::ostream& operator<<(std::ostream& out, const c_PhoneBook& contacts);

	void AddContact(const c_Contact& contact);
};

