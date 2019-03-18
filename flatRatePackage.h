
//FLATERATE.H

#include <iostream>
#include "package.h"
#include <string>
#ifndef FLATRATE_H
#define FLATRATE_H
using namespace std;

class FlatRatePackage:public package
{
 protected:
  string type;
  double width;
  double length;
  double height;

 public:
  FlatRatePackage();
  FlatRatePackage(string na,string addr, string cit, string stat, long zi, string recname, string recaddr,string rcit, string rstat, long reczi, string lab, string dat, double we,double oun, string insur,string conf,string typ, double wid, double len, double hei);
  double calculateCost();
  void printFPackage();
};
#endif
