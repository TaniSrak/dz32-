#include <iostream>
#include <string>

class Animal
{
protected:
	std::string name;
	int age; 
	int weight;
public:
	Animal()
	{
		name = "fox";
		age = 1;
		weight = 5;
	}
	Animal(std::string name, int age, int weight)
	{
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	std::string getName()
	{
		return name;
	}
};

class Cat : Animal
{
protected:
	std::string type;
	int* voice;
	std::string eat;
public:
	Cat() : Animal()
	{
		type = "Siamse";
		voice = nullptr;
		eat = "fish";
	}
	void setvoice() {
		std::cout << "Мяу " << std::endl;
	}
	void seteat(const std::string& food) {
		std::cout << getName() << " съел " << food << std::endl;
	}
	std::string getName() {
		return Animal::name;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	Cat cat;
	cat.setvoice();
	cat.seteat("рыбу");

	return 0;
}