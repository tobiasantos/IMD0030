#include "piramide.h"

float pyramidArea(float l, float h)
{
  float baseArea = pow(l, 2);
  float sideArea = 4 * ((sqrt(pow(h, 2) + (pow(l, 2) / 4)) * l) / 2);
  return baseArea + sideArea;
}

float pyramidVolume(float l, float h)
{
  return (pow(l, 2) * h) / 3;
}