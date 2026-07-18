#include "ShoeFactory.h"

class AdidasFactory : public ShoeFactory {
    public:
        std::unique_ptr<RunningShoe> create_running_shoe() const override {
            return std::make_unique<AdidasRunningShoe>();
        }
        std::unique_ptr<CasualShoe> create_casual_shoe() const override {
            return std::make_unique<AdidasCasualShoe>();
        }
        std::unique_ptr<Boot> create_boot() const override {
            return std::make_unique<AdidasBoot>();
        }
};