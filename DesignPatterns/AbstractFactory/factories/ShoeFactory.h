#include <iostream>


class ShoeFactory {
    public:
        virtual ~ShoeFactory() = default;
     
        virtual std::unique_ptr<RunningShoe> create_running_shoe() const = 0;
        virtual std::unique_ptr<CasualShoe>  create_casual_shoe()  const = 0;
        virtual std::unique_ptr<Boot>        create_boot()         const = 0;
};