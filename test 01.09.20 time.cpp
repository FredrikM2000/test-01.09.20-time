#include <iostream>
#include <string>
//using namespace std;

int age;
bool sw = true;
char initial = 'm';
std::string name = "Fredrik";
double pi = 3.14;

int main() {
	std::cout << sw;
	std::cout << "Enter your age :";
	std::cin >> age;
	std::cout << "Your age is : " << age;
	std::cout << "\nYou are young";
}