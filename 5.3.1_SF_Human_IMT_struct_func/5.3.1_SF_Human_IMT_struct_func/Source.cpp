#include <iostream>	
using namespace std;

struct Human {
	short age; // Возраст
	const char* sex; // Пол
	const char* name; // Имя
	const char* surname; // Фамилия
	double height; // Рост
	double weight; // Вес
	double indexMass; // Индекс массы тела
	short birthYear; // Год рождения
};

Human IMT(Human *m)
{
	m->birthYear = 2022.0 - m->age;
	m->indexMass = (m->weight / 2.205) / ((m->height/39.37)*(m->height / 39.37));
	return *m;
}

void Show(Human* m)
{
	cout << "Age: " << m->age << endl;
	cout << "Sex: " << m->sex << endl;
	cout << "Name: " << m->name << endl;
	cout << "Surname: " << m->surname << endl;
	cout << "Height: " << m->height << endl;
	cout << "Weight: " << m->weight << endl;
	cout << "IMT: " << m->indexMass << endl;
	cout << "Year of birth: " << m->birthYear << endl<< " ________________________________________________\n";
}

int main()
{
	
	Human*h1 = new Human{ 31 , "Trans", "Ella", "Nice", 1600, 67 ,0 ,0 };
	Human* h2 = new Human{ 31 , "Man", "Rob", "Mullin", 196, 79, 0, 0 };
	Human* h3 = new Human{ 15 , "Woman", "Kate", "Poppers", 170, 57, 0, 0};
	Human* h4 = new Human{ 22, "Bisex", "Paul", "Mulan", 177, 65, 0 ,0 };
	Human* h5 = new Human{ 1 , "Trans", "Killa", "Nice", 200, 67 ,0 ,0};
	Human* h6 = new Human{ 14 , "Trans", "Kira", "Nike", 180, 47 ,0 ,0 };
	Human* h7 = new Human{ 11 , "Him", "Killa", "Nice", 200, 67 ,0 ,0 };

	IMT(h1);
	Show(h1);
	delete h1;

	IMT(h2);
	Show(h2);
	delete h2;

	IMT(h3);
	Show(h3);
	delete h3;

	IMT(h4);
	Show(h4);
	delete h4;

	IMT(h5);
	Show(h5);
	delete h5;

	IMT(h6);
	Show(h6);
	delete h6;

	IMT(h7);
	Show(h7);
	delete h7;

	return 0;

}