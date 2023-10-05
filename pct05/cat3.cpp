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
		return name + u.name;    //+ 앞에 있는 클래스의 name과 매개변수로 받은 u의 name을 더하여 리턴한다
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