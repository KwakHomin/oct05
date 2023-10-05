#include <iostream>
#include <string>

class Animal {
private:
	std::string name;

public:
	Animal() {};
	Animal(std::string name) : name(name) {};

	void showName() {
		std::cout << "Name is " << name << std::endl;
	}

	Animal operator+ (const Animal& u)
	{
		return name + u.name;    //+ �տ� �ִ� Ŭ������ name�� �Ű������� ���� u�� name�� ���Ͽ� �����Ѵ�
	}

};

int main() {

	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();

	Animal catDog = dog + cat;
	catDog.showName();

	dog.showName();

	getchar();
	return 0;
}