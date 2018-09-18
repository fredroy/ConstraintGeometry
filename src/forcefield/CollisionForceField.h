#pragma once

#include <constraintGeometry.h>
#include <BaseGeometry.h>
#include <Collision.h>

namespace constraintGeometry {

class CollisionForceField :  public ForceField {
public:

    Data<double> d_stiffness;
    PortIn<collisionAlgorithm::Collision,REQUIRED> p_collision;

    CollisionForceField();

    void addForce(VecDerivId f);

    void addToMatrix(BaseMatrix *M);

    void draw(const VisualParams * );

};

}
