#ifndef HYPED_GIT_PR_WORKSHOP
#define HYPED_GIT_PR_WORKSHOP

#include <string>

class Pod
{
    public:
        Pod();
        void setName(std::string name);
        void setMaxSpeed(double speed);
        std::string getName();
        double getMaxSpeed();
        void increaseSpeedBy10();

    private:
        std::string name_;
        double max_speed_;
};

#endif  // HYPED_GIT_PR_WORKSHOP
