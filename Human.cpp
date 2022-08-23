#pragma once
#include "Human.h"
#include <iostream>
using namespace std;

//����������� ������������ ������ Human
Human::Human(const char* name_, const char* surname_, short age_, double height_, double weight_)
{
	name = name_;
	surname = surname_;
	if (age_ >= 0)
	{
		age = age_;
	}
	else
	{
		cout << "������� �� ����� ���� ������ 0. ������� ����� �� ��������� = 1";
		age = 1;
	}
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "���� �� ����� ���� ������ 0.1. ���� ������ �� ��������� = 100" << endl;
		height = 100;
	}
	if (weight_ > 0)
	{
		weight = weight_;
	}
	else
	{
		cout << "��� �� ����� ���� ������ 0" << endl;
	}
}
Human::Human(const char* name_, const char* surname_, short age_, double height_)
{
	name = name_;
	surname = surname_;
	if (age_ >= 0)
	{
		age = age_;
	}
	else
	{
		cout << "������� �� ����� ���� ������ 0. ������� ����� �� ��������� = 1";
		age = 1;
	}
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "���� �� ����� ���� ������ 0.1. ���� ������ �� ��������� = 100" << endl;
		height = 100;
	}
}
Human::Human(const char* name_, const char* surname_, short age_)
{
	name = name_;
	surname = surname_;
	if (age_ >= 0)
	{
		age = age_;
	}
	else
	{
		cout << "������� �� ����� ���� ������ 0. ������� ����� �� ��������� = 1";
		age = 1;
	}
}
Human::Human(const char* name_, const char* surname_)
{
	name = name_;
	surname = surname_;
}
Human::Human(const char* name_)
{
	name = name_;
}


// ����������� ������������ ����������� ������ Human
Human::Human(const Human& copyOfHuman)
{
	name = copyOfHuman.name;
	surname = copyOfHuman.surname;
	age = copyOfHuman.age;
	height = copyOfHuman.height;
	weight = copyOfHuman.weight;
}

// ����������� �����������
Human::~Human() {};


// ����������� ������� ������ Human, ����������� � "Human.h"
void Human::initHuman(const char* name_, const char* surname_, short age_, double height_, double weight_)
{
	name = name_;
	surname = surname_;
	if (age_ >= 0)
	{
		age = age_;
	}
	else
	{
		cout << "������� �� ����� ���� ������ 0. ������� ����� �� ��������� = 1";
		age = 1;
	}
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "���� �� ����� ���� ������ 0.1. ���� ������ �� ��������� = 100" << endl;
		height = 100;
	}
	if (weight_ > 0)
	{
		weight = weight_;
	}
	else
	{
		cout << "��� �� ����� ���� ������ 0" << endl;
	}
}

short Human::getYearOfBirth() const
{
	return birthYear;
}
void Human::setYearOfBirth()// ��� ���������� �������� � ���������� �������, ��� �������� ������������� ������������� �� ������� 2022 - �������

{
	birthYear = 2022 - age;
}

// ��� ���������� �������� � ���������� �������, ��� �������� ������������� ������������� �� ������� 2022 - �������
void Human::setYearOfBirth(short birthYear_)
{
	birthYear = birthYear_;
}


double Human::getBodyIndex() const
{
	return bodyMassIndex;
}
void Human::setBodyIndex()// ��� ��������� ��������� ������� �������� ��������� ������ �� ���� � �����
{
	bodyMassIndex = (weight / 2.205) / ((height / 39.37) * (height / 39.37));
}
void Human::setBodyIndex(double bodyMassIndex_)
{
	bodyMassIndex = bodyMassIndex_;
}


short Human::getAge() const
{
	return age;
}
void Human::setAge(short age_)
{
	if (age_ > 0)
	{
		age = age_;
	}
	else
	{
		cout << "������ ������ ������� ���� 0.1" << endl;
	}
}

const char* Human::getName() const
{
	return name;
}
void Human::setName(const char* name_)
{
	name = name_;
}


const char* Human::getSurname() const
{
	return surname;
}

void Human::setSurname(const char* surname_)
{
	surname = surname_;
}

double Human::getHeight() const
{
	return height;
}
void Human::setHeight(double height_)
{
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "���� �� ����� ���� ������ 0.1" << endl;
	}
}

double Human::getWeight() const
{
	return weight;
}
void Human::setWeight(double weight_)
{
	if (weight_ > 0)
	{
		weight = weight_;
	}
	else
	{
		cout << "��� �� ����� ���� ������ 0" << endl;
	}
}

void Human::getHuman()
{
	cout << "�������: " << age << endl;
	cout << "���: " << name << endl;
	cout << "�������: " << surname << endl;
	cout << "����: " << height << endl;
	cout << "���: " << weight << endl;
	cout << "������ ����� ����: " << bodyMassIndex << endl;
	cout << "��� ��������: " << birthYear << endl;
}