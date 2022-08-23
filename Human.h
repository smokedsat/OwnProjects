#pragma once
// ���������� � ����������� ������ Human
class Human
{
// �������� ������
public:
	// ���������� ������������������ ������������ 
	Human(const char* name_, const char* surname_, short age_, double height_, double weight_);
	Human(const char* name_, const char* surname_, short age_, double height_);
	Human(const char* name_, const char* surname_, short age_);
	Human(const char* name_, const char* surname_);
	Human(const char* name_);

	// ���������� ������������ �����������
	Human(const Human& copyOfHuman);

	// ���������� �����������
	~Human();
	
	//���������� ������� ������ Human
	void initHuman(const char* name_, const char* surname_, short age_, double height_, double weight_);
	
	short getYearOfBirth() const;
	void setYearOfBirth();
	void setYearOfBirth(short birthYear_);

	double getBodyIndex() const;
	void setBodyIndex();
	void setBodyIndex(double bodyMassIndex_);

	short getAge() const;
	void setAge(short age_);

	const char* getName() const;
	void setName(const char* name_);

	const char* getSurname() const;
	void setSurname(const char* surname_);

	double getHeight() const;
	void setHeight(double height_);
	
	double getWeight() const;
	void setWeight(double weight_);

	void getHuman();

// ���������� ������
private:
	//���������� �������� ������ Human
	const char* name;
	const char* surname;
	int age;
	double height;
	double weight;
	double bodyMassIndex;
	short birthYear;
};