#include "cylinder.h"

Cylinder::Cylinder(double radius_param, double height_param) {
    base_radius = radius_param;
    height = height_param;
}

double Cylinder::volume() {
    return PI * base_radius * base_radius * height;
}

double Cylinder::get_height() {
    return height;
}

double Cylinder::get_radius() {
    return base_radius;
}

void Cylinder::set_radius(double radius_param) {
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param) {
    height = height_param;
}