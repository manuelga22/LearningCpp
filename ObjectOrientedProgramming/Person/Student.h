#include <iostream>
#include "Person.h"

class Student: public Person {
    private:

    public:
        Student() {}

        void aboutMe() {
            std::cout << "I am a Student\n";
        }


};