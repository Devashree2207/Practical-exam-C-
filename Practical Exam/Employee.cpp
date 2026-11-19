#include <iostream>
using namespace std;

class Employee 
{
private:
    string name;
    int salary;
    string designation;

public:
    void setName(string n) { name = n; }

    void setSalary(int s) {
        if (s >= 0)
            salary = s;
        else {
            cout << "Invalid salary! Setting salary to 0." << endl;
            salary = 0;
        }
    }

    void setDesignation(string d) { designation = d; }

    string getName() { return name; }
    int getSalary() { return salary; }
    string getDesignation() { return designation; }
};

int main() {
    Employee e;

    e.setName("Devashree");
    e.setSalary(75000);
    e.setDesignation("Software Engineer");

    cout << "Employee Details" << endl;
    cout << "Name :" << e.getName()<< endl;
    cout << "Salary :" << e.getSalary()<< endl;
    cout << "Designation :" << e.getDesignation();

    return 0;
}
