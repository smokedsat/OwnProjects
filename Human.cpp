#pragma once
#include "Human.h"
#include <iostream>
using namespace std;

//Определение конструктора класса Human
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
		cout << "Возраст не может быть меньше 0. Возраст задан по умолчанию = 1";
		age = 1;
	}
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "Рост не может быть меньше 0.1. Рост задани по умолчанию = 100" << endl;
		height = 100;
	}
	if (weight_ > 0)
	{
		weight = weight_;
	}
	else
	{
		cout << "Вес не может быть меньше 0" << endl;
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
		cout << "Возраст не может быть меньше 0. Возраст задан по умолчанию = 1";
		age = 1;
	}
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "Рост не может быть меньше 0.1. Рост задани по умолчанию = 100" << endl;
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
		cout << "Возраст не может быть меньше 0. Возраст задан по умолчанию = 1";
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


// Определение конструктора копирования класса Human
Human::Human(const Human& copyOfHuman)
{
	name = copyOfHuman.name;
	surname = copyOfHuman.surname;
	age = copyOfHuman.age;
	height = copyOfHuman.height;
	weight = copyOfHuman.weight;
}

// Определение деструктора
Human::~Human() {};


// Определение функций класса Human, объявленных в "Human.h"
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
		cout << "Возраст не может быть меньше 0. Возраст задан по умолчанию = 1";
		age = 1;
	}
	if (height_ > 0)
	{
		height = height_;
	}
	else
	{
		cout << "Рост не может быть меньше 0.1. Рост задани по умолчанию = 100" << endl;
		height = 100;
	}
	if (weight_ > 0)
	{
		weight = weight_;
	}
	else
	{
		cout << "Вес не может быть меньше 0" << endl;
	}
}

short Human::getYearOfBirth() const
{
	return birthYear;
}
void Human::setYearOfBirth()// При отсутствии значения в параметрах функции, год рождения высчитывается автоматически по формуле 2022 - возраст

{
	birthYear = 2022 - age;
}

// При отсутствии значения в параметрах функции, год рождения высчитывается автоматически по формуле 2022 - возраст
void Human::setYearOfBirth(short birthYear_)
{
	birthYear = birthYear_;
}


double Human::getBodyIndex() const
{
	return bodyMassIndex;
}
void Human::setBodyIndex()// При отсутсвии параметра функции значение считается исходя из веса и роста
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
		cout << "Нельзя задать возраст ниже 0.1" << endl;
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
		cout << "Рост не может быть меньше 0.1" << endl;
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
		cout << "Вес не может быть меньше 0" << endl;
	}
}

void Human::getHuman()
{
	cout << "Возраст: " << age << endl;
	cout << "Имя: " << name << endl;
	cout << "Фамилия: " << surname << endl;
	cout << "Рост: " << height << endl;
	cout << "Вес: " << weight << endl;
	cout << "Индекс массы тела: " << bodyMassIndex << endl;
	cout << "Год рождения: " << birthYear << endl;
}