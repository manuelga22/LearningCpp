#include "ShoeFactory.h"

class NikeFactory : public ShoeFactory {
    
    public:
        std::unique_ptr<RunningShoe> create_running_shoe() const override {
            return std::make_unique<NikeRunningShoe>();
        }
        std::unique_ptr<CasualShoe> create_casual_shoe() const override {
            return std::make_unique<NikeCasualShoe>();
        }
        std::unique_ptr<Boot> create_boot() const override {
            return std::make_unique<NikeBoot>();
        }
};