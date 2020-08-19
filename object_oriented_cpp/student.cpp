#include <iostream>
#include <string>
using std::string;
using std::cout;

class Student {
    private:
        string name{NULL};
        int grade{NULL};
        double avg{NULL};
    public:
        Student(string n, int g, double a);

        string Name() {return name;}
        int Grade() {return grade;}
        double Average() {return avg;}

        void setName(string n);
        void setGrade(int g);
        void setAverage(double a);
};

Student::Student(string n, int g, double a) {
    setName(n);
    setGrade(g);
    setAverage(a);
}

void Student::setName(string n) {
    Student::name = n;
}

void Student::setGrade(int g) {
    if (g >= 0 && g <= 12)
    {
        Student::grade = g;
    }
    else
    {
        cout << "exception" << "\n";
    }
    
}

void Student::setAverage(double a) {
    if (a >= 0 && a <=4)
    {
        Student::avg = a;
    }
    else
    {
        cout << "exception" << "\n";
    }
    
}

int main() {
    Student student("Barry", -2 , 2.1);
    cout << student.Name() << " " << student.Grade() << " " << student.Average() << "\n";
}