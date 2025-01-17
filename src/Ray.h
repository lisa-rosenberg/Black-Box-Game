#ifndef SOSE19_PADI02_RAY_H
#define SOSE19_PADI02_RAY_H

#include "Cell.h"
#include <vector>

using namespace std;

class Ray {

public:
    explicit Ray(Cell cell, bool gameFinished);

    enum Type {
        HIT,
        REFLECTION,
        DEFLECTION
    };

    void addRayCell(Cell cell);
    void setRayColor(QColor colorValue);
    void setRayType(Type rayType);

    vector<Cell> getRayCells();
    QColor getRayColor();
    Type getRayType();
    bool getIngameRay();

private:
    vector<Cell> rayCells;
    QColor color;
    Type type;
    bool ingameRay;

    QColor getNewColor();
};


#endif //SOSE19_PADI02_RAY_H
