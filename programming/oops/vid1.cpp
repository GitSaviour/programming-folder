#include<iostream>
using namespace std;
// //creating a class
// class Car {
// public:
//     string color;
//     string model;

//     void start() {
//         cout << "Car started." << endl;
//     }

//     void stop() {
//         cout << "Car stopped." << endl;
//     }
// };


// function overriding
// class robot{
// public:
// string name;
// bool ai;
// void speak(){
//     cout<<"krrkrrr";
// }
// };

// class humanoid: public robot{
//     public:
// void speak(){
// cout<<"hello am humanoid";
// }
// };
// int main(){
//     robot r1;
// humanoid r2;
//     r1.name="robota";
//     r1.ai=true;
//     r1.speak();
//     cout<<endl;
//     r2.speak();

// return 0;
// }



//structure
// struct Student {
//     string name;
//     int rollNo;
//     float marks;
// };

// int main() {
//     Student student1; 
//     student1.name = "Alice";
//     student1.rollNo = 123;
//     student1.marks = 95.5;

//     cout << "Student Name: " << student1.name << endl;
//     cout << "Roll No: " << student1.rollNo << endl;
//     cout << "Marks: " << student1.marks << endl;

//     return 0;
// }


// array of structures
// #include <iostream>
// #include <string>

// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float marks;
// };

// int main() {
//     Student students[3]; // Array of 3 Student structures

//     // Assign values to the first student
//     students[0].name = "Alice";
//     students[0].rollNo = 123;
//     students[0].marks = 95.5;

//     // Assign values to the second student
//     students[1].name = "Bob";
//     students[1].rollNo = 124;
//     students[1].marks = 88.2;

//     // Assign values to the third student
//     students[2].name = "Charlie";
//     students[2].rollNo = 125;
//     students[2].marks = 79.8;

//     // Access and print student information
//     for (int i = 0; i < 3; ++i) {
//         cout << "Student " << i + 1 << ":" << endl;
//         cout << "Name: " << students[i].name << endl;
//         cout << "Roll No: " << students[i].rollNo << endl;
//         cout << "Marks: " << students[i].marks << endl;
//         cout << endl;
//     }

//     return 0;
// }


// structure of array
// #include <iostream>
// #include <string>

// using namespace std;

// struct Student {
//     string name;
//     int grades[5]; // Array to store grades for 5 subjects
// };

// int main() {
//     Student student1;

//     student1.name = "Alice";
//     student1.grades[0] = 90;
//     student1.grades[1] = 85;
//     student1.grades[2] = 92;
//     student1.grades[3] = 88;
//     student1.grades[4] = 95;

//     cout << "Student Name: " << student1.name << endl;
//     cout << "Grades: ";
//     for (int i = 0; i < 5; ++i) {
//         cout << student1.grades[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Access specifiers in C++ control the visibility and accessibility of class members (data members and member functions). They are crucial for implementing data hiding and encapsulation, core principles of object-oriented programming.

// 1. Public:

// Accessibility: Accessible from anywhere in the program (outside the class, within the class, and from derived classes).
// Purpose:
// Defines the public interface of the class.
// Allows other parts of the program to interact with the class.
// Used for methods that should be freely used by other parts of the program.
// 2. Private:

// Accessibility: Accessible only within the class itself.
// Purpose:
// Hides implementation details from the outside world.
// Protects data integrity by preventing unauthorized modification.
// Encapsulates data, making the class more robust and maintainable.
// 3. Protected:

// Accessibility: Accessible within the class itself and in derived classes.
// Purpose:
// Allows derived classes to access and modify certain members of the base class.
// Provides a level of access between the base class and its derived classes.

// class Animal {
// public:
//     void makeSound() { 
//         // Can be accessed from anywhere
//     } 

// protected:
//     int age; // Accessible within Animal and its derived classes

// private:
//     string name; // Accessible only within the Animal class
// };

// class Dog : public Animal { 
// public:
//     void displayAge() { 
//         cout << "Age: " << age << endl; // Can access protected member 'age'
//     }
// };

// In this example:

// makeSound() is public, so any part of the program can call it on an Animal object.
// age is protected, so it can be accessed within the Animal class and by the Dog class (which is derived from Animal).
// name is private, so it can only be accessed within the Animal class itself.
// Key Points:

// By default, if no access specifier is explicitly mentioned, members of a class are considered private.
// Access specifiers can be used multiple times within a class.
// Access specifiers help to achieve data hiding, encapsulation, and code modularity.

//dedfining member fxn outside the class
// class ClassName {
// public:
//     void memberFunction(); 
// };

// void ClassName::memberFunction() { 
//     // Function body
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class Student {
// public:
//     string name;
//     int age;

//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student students[3]; // Array of 3 Student objects

//     // Assign values to the first student
//     students[0].name = "Alice";
//     students[0].age = 20;

//     // Assign values to the second student
//     students[1].name = "Bob";
//     students[1].age = 22;

//     // Assign values to the third student
//     students[2].name = "Charlie";
//     students[2].age = 19;

//     // Access and display information
//     for (int i = 0; i < 3; ++i) {
//         students[i].displayInfo(); 
//     }

//     return 0;
// }

// inline fxn
// inline int add(int a, int b) {
//     return a + b;
// }


//  function with default arguments
// #include <iostream>

// using namespace std;

// int multiply(int a, int b = 1) {
//     return a * b;
// }

// int main() {
//     cout << multiply(5) << endl;     // b will use the default value (1) -> 5 * 1 = 5
//     cout << multiply(5, 3) << endl;   // b will be 3 -> 5 * 3 = 15
//     return 0;
// }


















