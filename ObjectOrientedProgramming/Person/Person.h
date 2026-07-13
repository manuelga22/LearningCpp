#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
    private:

    public:
        Person() {}

        virtual void aboutMe() {
            std::cout << "I am a Person\n";
        }

};

#endif