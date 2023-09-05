#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
    private:
        double base_radius {1.0};
        double height {1.0};
        const double PI {3.14};

    public:
        Cylinder() = default;

        Cylinder(double radius_param, double height_param);

        double volume();     

        double get_radius();

        double get_height();

        void set_radius(double radius_param);

        void set_height(double height_param);
};

#endif