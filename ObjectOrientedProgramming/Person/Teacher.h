#include <iostream>
#include "Person.h"

class Teacher: public Person {
    private:

    public:
        Teacher() {

        }

        void aboutMe() {
            std::cout << "I am a Teacher\n";
        }


};