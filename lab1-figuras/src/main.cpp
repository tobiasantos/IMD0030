#include <iostream>
#include <string.h>

#include "quadrado.h"
#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"
#include "cubo.h"
#include "esfera.h"
#include "paralelepipedo.h"
#include "piramide.h"

using namespace std;

int main(int argc, char *argv[])
{
  if (argc < 3)
  {
    cout << "Quantidade inválida de argumentos\n";
    return 0;
  }

  string figure(argv[1]);

  if (!strcmp(figure.c_str(), "quadrado"))
  {
    if (argc != 3)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float side = stof(argv[2]);
    if (side <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area do quadrado: " << squareArea(side) << endl;
    cout << "Perimetro do quadrado: " << squarePerimeter(side) << endl;
  }
  else if (!strcmp(figure.c_str(), "retangulo"))
  {
    if (argc != 4)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float width = stof(argv[2]);
    float height = stof(argv[3]);
    if (width <= 0 || height <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area do retangulo: " << rectangleArea(width, height) << endl;
    cout << "Perimetro do retangulo: " << rectanglePerimeter(width, height) << endl;
  }
  else if (!strcmp(figure.c_str(), "triangulo"))
  {
    if (argc != 3)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float side = stof(argv[2]);
    if (side <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area do triangulo: " << triangleArea(side) << endl;
    cout << "Perimetro do triangulo: " << trianglePerimeter(side) << endl;
  }
  else if (!strcmp(figure.c_str(), "circulo"))
  {
    if (argc != 3)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float radius = stof(argv[2]);
    if (radius <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area do circulo: " << circleArea(radius) << endl;
    cout << "Perimetro do circulo: " << circlePerimeter(radius) << endl;
  }
  else if (!strcmp(figure.c_str(), "cubo"))
  {
    if (argc != 3)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float radius = stof(argv[2]);
    if (radius <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area do cubo: " << cubeArea(radius) << endl;
    cout << "Volume do cubo: " << cubeVolume(radius) << endl;
  }
  else if (!strcmp(figure.c_str(), "esfera"))
  {
    if (argc != 3)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float radius = stof(argv[2]);
    if (radius <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area da esfera: " << sphereArea(radius) << endl;
    cout << "Volume da esfera: " << sphereVolume(radius) << endl;
  }
  else if (!strcmp(figure.c_str(), "paralelepipedo"))
  {
    if (argc != 5)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float aSide = stof(argv[2]);
    float bSide = stof(argv[3]);
    float cSide = stof(argv[4]);
    if (aSide <= 0 || bSide <= 0 || cSide <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }

    cout << "Area do paralelepipedo: " << prismArea(aSide, bSide, cSide) << endl;
    cout << "Volume do paralelepipedo: " << prismVolume(aSide, bSide, cSide) << endl;
  }
  else if (!strcmp(figure.c_str(), "piramide"))
  {
    if (argc != 4)
    {
      cout << "Quantidade inválida de argumentos\n";
      return 0;
    }
    float baseSide = stof(argv[2]);
    float height = stof(argv[3]);
    if (baseSide <= 0 || height <= 0)
    {
      cout << "Argumentos negativos ou nulos são inválidos\n";
      return 0;
    }
    cout << "Area da piramide: " << pyramidArea(baseSide, height) << endl;
    cout << "Volume da piramide: " << pyramidVolume(baseSide, height) << endl;
  }
  else
  {
    cout << "Figura inválida\n";
  }

  return 0;
}