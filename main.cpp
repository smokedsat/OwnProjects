#include "Human.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	Human* a1 = new Human("Semen");
	Human* a2 = new Human("Semen", "Trotsenko");
	Human* a3 = new Human("Sen", "Ssd", 32);
	Human* a4 = new Human("sdads", "dwfe", 433, 342, 444);

	a1->initHuman("Semen", "Trotsenko", 22, 196, 89);
	a1->getBodyIndex();
	a1->getYearOfBirth();
	a1->getHuman();
	a2->initHuman("Arsen", "Avetisyan", 47, 178, 68);
	a2->getBodyIndex();
	a2->getYearOfBirth();
	a2->getHuman();
	a3->getHuman();
	a4->getHuman();

	// Пример использования конструктора копироавния 
	Human* a5 = new Human(*a1);
	a5->getHuman();


	// Далее 2 строки мусор
	a1->setAge(a3->getAge());
	a1->getHuman();
	delete a1;
	delete a2;
	delete a3;
	delete a4;
	
}
