#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    public:
    Person(string ch){
        this->name=ch;
 
    }
     void virtual display() {
        cout << "Name: " << name << endl;
    }
};
class Student: public Person{
    private:
    string course;
    float marks;
    int year;
    public:
    char name;
    Student(string stnm, string cour, float mar, int yr  ): Person(stnm){
        this->course=cour;
        this->marks=mar;
        this->year=yr;
    }
    void display() override {
        Person::display();
        cout << "Course: " << course << std::endl;
        cout << "Marks: " << marks << std::endl;
        cout << "Year: " << year << std::endl;
    }
};
class Employee: public Person{
    private:
    string dept;
    float salary;
    public:
    Employee(string enm, string dep, float sal ): Person(enm){
        this->dept=dep;
        this->salary=sal;
    }
    void display() override {
        Person::display();
        cout << "Department: " << dept << std::endl;
        cout << "Salary: " << salary << std::endl;
    }
};
int main(){
    Student student("MAYANK", "Computer Science", 85.0, 2023);
    Employee employee("RAHUL", "Data Analyst", 50000.0);
    cout << "Student Info:" << endl;
    Person* person1 = &student;
    student.display();
   
    cout << "\nEmployee Info:" << endl;
    Person* person2 = &employee;
    employee.display();
 
    return 0;
}
