#include <iostream>

class Base {
    public:
        virtual void whoAmI() {
            std::cout << "I am Base\n";
        }

        void getName(){
            std::cout << "Running getName in Base\n";
        }
};

class Derived: public Base {
    public:

        void whoAmI() override final{
            std::cout << "I am derived\n";
        }

        void getName() {
            std::cout << "Running getName in Derived\n";
        }
        
};

int main() {
    Derived d {};
    Base* base {&d};
    
    // this should print "I am derived"
    base->whoAmI(); 
    // this should print "Running getName in Base"
    base->getName();
}