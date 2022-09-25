#include <cmath>
#include <iostream>

struct Point {
    float x, y;
};

struct Circle {
    Point center;
    float r;
};

enum RelativePosition { NO_COMMON_POINTS, TOUCHING, INTERSECTING, SAME };

double get_distance(const Circle &A, const Circle &B) {
    double x_diff = A.center.x - B.center.x;
    double y_diff = A.center.y - B.center.y;
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

RelativePosition findRelativePosition(const Circle &A, const Circle &B) {
    double distance = get_distance(A, B);
    double rs = A.r + B.r;
    if (distance == 0) {
        // Same circles
        if (A.r == B.r) {
            return SAME;
        }
        // Little circle inside a bigger one with same center
        return NO_COMMON_POINTS;
    }

    // Little circle inside a bigger one with different centers
    if (distance < abs(A.r - B.r)) {
        return NO_COMMON_POINTS;
    }

    // Two separate circles
    if (distance > rs) {
        return NO_COMMON_POINTS;
    }

    // Touching from the outside
    if (distance == rs) {
        return TOUCHING;
    }

    // Touching from the inside
    if (distance == abs(A.r - B.r)) {
        return TOUCHING;
    }

    return INTERSECTING;
}

int main() {
    Circle first = {0, 0, 2}, second = {0, 1, 1};
    std::cout << findRelativePosition(first, second) << '\n';
    return 0;
}
