#include "esfera.h"

float sphereArea(float a)
{
  float pi = 3.1416; // 2 * acos(0.0)
  return 4 * pi * a * a;
}

float sphereVolume(float a)
{
  float pi = 3.1416; // 2 * acos(0.0)
  return (4 * pi * a * a * a) / 3;
}