#include <cmath>
#include <iostream>
#include <string>
#include <vector>

struct point {
    double x;
    double y;
};

double get_distance(point first, point second) {
    double x_difference = first.x - second.x;
    double y_difference = first.y - second.y;
    return sqrt(x_difference * x_difference + y_difference * y_difference);
}

int main() {
    point first_point, second_point, temp_point;

    std::cout << "Enter the coordinates of the first point\n";
    std::cin >> first_point.x >> first_point.y;

    std::cout << "Enter the coordinates of the second point\n";
    std::cin >> second_point.x >> second_point.y;

    temp_point.x = first_point.x;
    temp_point.y = second_point.y;

    double side_a, side_b;
    side_a = get_distance(first_point, temp_point);
    side_b = get_distance(second_point, temp_point);

    std::cout << "The sides do " << (side_a == side_b ? "" : "not ")
              << "form a square diagonal\n";

    return 0;
}
