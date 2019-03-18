#include <iostream>
#include <string>
#include "package.h"
#ifndef OVERNIGHT_H
#define OVERNIGHT_H
using namespace std;

class overNightPackage: public package
{
 protected:
  double overnightFee;
  string tracking;
 public:
 overNightPackage();
 overNightPackage(string na,string addr, string cit, string stat, long zi, string recname, string recaddr,string rcit, string rstat, long reczi, string lab, string dat, double we, double oun, string insur,string conf,string track,double onf);
  void setovernightfee(double);
  double getovernightfee()const;
  double calculateCost();
  void printOPackage();

};
#endif  
  
