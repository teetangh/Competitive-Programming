#include <iostream>
using namespace std;
#include "include/Student.hpp"

int main(int argc, char const *argv[])
{
    Student s1;
    Student *s2 = new Student;

    s1.setAge(20, 123);
    s2->setAge(24, 123);

    s1.display();
    s2->display();
}
