// Copyright 2022 Belyaev Ilya
#ifndef MODULES_BELYAEV_VOLUME_FIGURES_INCLUDE_VFIG_H_
#define MODULES_BELYAEV_VOLUME_FIGURES_INCLUDE_VFIG_H_
#include <stdlib.h>
#include <math.h>
const double PI = 3.14;


class Body_Volume {
 private:
  double a;
  double b;
 public:
     int n = 100;
     Body_Volume();
     Body_Volume(double _a, double _b);
     double section_function_Ball(double x);
     double calculation_volume_Ball(double a, double b, int n);
     double calculation_volume_cube(double a, double b);
};
#endif  // MODULES_BELYAEV_VOLUME_FIGURES_INCLUDE_VFIG_H_
