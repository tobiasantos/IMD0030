#include "paralelepipedo.h"

float prismArea(float a, float b, float c)
{
  return 2 * (a * b + a * c + b * c);
}

float prismVolume(float a, float b, float c)
{
  return a * b * c;
}