#ifndef EQUATIONSOFMOTION_H
#define EQUATIONSOFMOTION_H

class EquationsOfMotion {
private:
    double finalVelocity;
    double initialVelocity;
    double acceleration;
    double time;
    double displacement;

public:
    EquationsOfMotion(double finalVelocity, double initialVelocity, 
                      double acceleration, double time, double displacement) {
        this->finalVelocity = finalVelocity;
        this->initialVelocity = initialVelocity;
        this->acceleration = acceleration;
        this->time = time;
        this->displacement = displacement;
    }

    double getFinalVelocity() const {
        return finalVelocity;
    }

    double getInitialVelocity() const {
        return initialVelocity;
    }

    double getAcceleration() const {
        return acceleration;
    }

    double getTime() const {
        return time;
    }

    double getDisplacement() const {
        return displacement;
    }
};

#endif