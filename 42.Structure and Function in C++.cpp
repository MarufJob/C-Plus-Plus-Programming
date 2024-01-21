#include <iostream>
using namespace std;

struct Person {
    //char name[50];
    string name;
    int age;
    float salary;
};

void displayData(Person);   // Function declaration

int main() {
    Person p;

    cout << "Enter Full name: ";
    //cin.get(p.name, 50);
    getline(cin,p.name);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    // Function call with structure variable as an argument
    displayData(p);

    return 0;
}

void displayData(Person p) {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

/*
Input:  Enter Full name: My name is Maruf
        Enter age: 25
        Enter salary: 50000
Output: Displaying Information.
        Name: My name is Maruf
        Age: 25
        Salary: 50000
*/
