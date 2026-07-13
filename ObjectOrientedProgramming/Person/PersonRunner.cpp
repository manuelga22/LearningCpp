// #include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main() {
    Person* student = new Student();
    Person* teacher = new Teacher();

    Person person;

    student->aboutMe();
    teacher->aboutMe();
    person.aboutMe();

    delete student;
    delete teacher;
}