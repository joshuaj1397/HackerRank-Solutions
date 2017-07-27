#include <iostream>

using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};

Person::Person(int initialAge){
    if (initialAge >= 0) {
        this->age = initialAge;
    }
    else {
        cout << "Age is not valid, setting age to 0.\n";
        this->age = 0;
    }

}

void Person::amIOld(){
    if (this->age < 13) {
        cout << "You are young.\n";
    }
    else if (this->age >= 13 && this->age < 18) {
        cout << "You are a teenager.\n";
    }
    else {
        cout << "You are old.\n";
    }

}

void Person::yearPasses(){
    this->age++;

}

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
