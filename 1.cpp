#include <iostream>
using namespace std;
int main()
{
int age;
float radius, area;
char grade;
const float PI = 3.14;
cout << "Name: Aditya" << endl;
cout << "Enter your age: ";
cin >> age;
cout << "Enter the radius of circle: ";
cin >> radius;
cout << "Enter your grade: ";
cin >> grade;
area = PI * radius * radius;
bool adult = (age >= 18);
bool valid = (age > 0 && radius > 0);
cout << "\n----- OUTPUT -----" << endl;
cout << "Name: Aditya" << endl;
cout << "Age: " << age << endl;
cout << "Radius: " << radius << endl;
cout << "Grade: " << grade << endl;
cout << "Area of circle: " << area << endl;
cout << "Adult: " << adult << endl;
cout << "Valid input: " << valid << endl;
return 0;
}
OUTPUT_:- Name: Aditya
Enter your age: 19
Enter the radius of circle: 5
Enter your grade: A
