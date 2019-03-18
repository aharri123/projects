//OVERNIGHT.H

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
  


//OVERNIGHT.CPP
#include <iostream>
#include<string>
#include "overnightPackage.h"
#include "package.h"
using namespace std;

overNightPackage::overNightPackage()
{
  overnightFee = 0.0;
}

overNightPackage::overNightPackage(string na,string addr, string cit, string stat, long zi, string recname, string recaddr,string rcit, string rstat, long reczi, string lab, string dat, double we, double oun, string insur,string conf,string track, double onf):package( na, addr, cit, stat, zi, recname, recaddr, rcit,rstat, reczi, lab, dat, we, oun, insur, conf)
{
  overnightFee = onf;
  tracking = track;
}

void overNightPackage::setovernightfee(double OF)
{
  overnightFee = OF;
}

double overNightPackage::getovernightfee()const
{
  return overnightFee;
}


double overNightPackage::calculateCost()
{
  double insuranceFee;
  double trackingFee;
  double signatureFee;

  if(insuranceType == "none")
    {
      insuranceFee = 0;
    }
 if (insuranceType == "upto1000")
    {
      insuranceFee = 5.25;
    }
  if (insuranceType == "upto5000")
    {
      insuranceFee = 5.50;
    }

  //SIGNATURE CONFIRMATION FEES//
  if (signatureConfirmation == "none")
    {
      signatureFee = 0;
    }
  if (signatureConfirmation == "sign")
    {
      signatureFee = 2.90;
    }

  //TRACKING FEE INFO//
  if (tracking == "none")
    {
      trackingFee = 0;
    }
  if(tracking == "track")
    {
      trackingFee = 5.50;
    }

  double cost = weight * (costPerOunce + overnightFee)+insuranceFee+signatureFee+trackingFee;

  return cost;
}

void overNightPackage::printOPackage()
{
  cout<<"sender: "<<senderName<<endl;
  cout<<senderAddress<<endl;
  cout<<senderCity<<", ";
  cout<<senderState<<" ";
  cout<<senderZip<<" "<<endl;
  cout<<"Recipient: "<<recipName<<endl;
  cout<<recipAddress<<" "<<endl;
  cout<<recipCity<<", ";
  cout<<recipState<<" ";
  cout<<recipZip<<" "<<endl;
  cout<<"Label: "<<label<<endl;
  cout<<"date: "<<date<<endl;
  cout<<"Weight: "<<weight<<endl;
  cout<<"Cost per ounce: "<<costPerOunce<<endl;
  cout<<"Insurance: "<<insuranceType<<endl;
  cout<<"Signature: "<<signatureConfirmation<<endl;
  cout<<"Overnight Fee: "<<overnightFee<<endl;
  cout<<"Tracking: "<<tracking<<endl; 
  double a = calculateCost();
  cout<<a<<endl;
}
