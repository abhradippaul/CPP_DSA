#include <iostream>
using namespace std;

// class Teacher
// {
// public:
//     string name;
//     string subject;
//     string dept;
//     double *salaryPtr;
//     Teacher(
//         string name,
//         string subject,
//         string dept,
//         double salary)
//     {
//         this->name = name;
//         this->subject = subject;
//         this->dept = dept;
//         salaryPtr = new double(salary);
//     }
//     // Custom copy constructor
//     // Types of copy Shallow copy, Deep copy
//     Teacher(const Teacher &obj)
//     {
//         this->name = obj.name;
//         this->subject = obj.subject;
//         this->dept = obj.dept;
//         this->salaryPtr = new double(*(obj.salaryPtr));
//     }
//     // Destructure
//     ~Teacher()
//     {
//         cout << "hi destructing the class" << endl;
//         delete salaryPtr;
//         salaryPtr = nullptr;
//     }

//     void changeDept(string newDept)
//     {
//         this->dept = newDept;
//     }
//     void teacherDetails()
//     {
//         cout << "Name of the teacher is " << name << endl;
//         cout << "Subject of the teacher is " << subject << endl;
//         cout << "Departemnt of the teacher is " << dept << endl;
//         cout << "salary of the teacher is " << *salaryPtr << endl;
//     }
// };

class Person
{ // abstract class
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    virtual void draw() = 0; // pure virtual function
};

class Student : public Person
{
public:
    int rollno;
    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }
    void draw()
    {
    }
};

int main()
{
    // Teacher t1 = Teacher("Abhradip", "C++", "Computer Science", 10.0);
    // Teacher t2 = Teacher(t1);
    // *(t2.salaryPtr) = 9.2;
    // t1.teacherDetails();
    // t1.changeDept("Maths");
    // t2.teacherDetails();
    // t1.teacherDetails();
    Student s1("Abhradip", 24, 123);
    s1.getInfo();
    cout << "Learning oops" << endl;
    return 0;
}