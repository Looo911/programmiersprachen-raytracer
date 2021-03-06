
#include <iostream>
#include <fstream>
#include <string>
#include "material.hpp"
 #include <sstream>


int main () {
  std::string line;
  std::ifstream myfile ("../../../framework/material.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      std::stringstream ss;
      ss<<line;
      Material mat;
      std::string keyword;
      ss>>keyword;
      ss>>keyword;
      ss>>mat.name;

      ss >> mat.ka.r;
      ss >> mat.ka.g;
      ss >> mat.ka.b;

      ss >> mat.kd.r;
      ss >> mat.kd.g;
      ss >> mat.kd.b;

      ss >> mat.ks.r;
      ss >> mat.ks.g;
      ss >> mat.ks.b;

      ss >> mat.m;

      Material[mat.name] = mat;

      std::cout<<mat;
    }
    myfile.close();
  }

  else std::cout << "Unable to open file"; 

  return 0;
}