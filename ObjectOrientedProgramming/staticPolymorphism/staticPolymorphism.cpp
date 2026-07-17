#include <iostream>

template <typename T> class Base {
    public:
        void whoAmI() {
            static_cast<T*>(this)->whoAmI();
        }

        void getName(){
            std::cout << "Running getName in Base\n";
        }
};

class Derived: public Base<Derived> {
    public:

        void whoAmI() {
            std::cout << "I am derived\n";
        }

        void getName() {
            std::cout << "Running getName in Derived\n";
        }
        
};

int main() {

    Base<Derived> base;
    
    // this should print "I am derived"
    base.whoAmI(); 
    // this should print "Running getName in Base"
    base.getName();
}