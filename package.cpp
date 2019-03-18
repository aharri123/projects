#include <iostream>
#include <string>
#include "package.h"
using namespace std;


package::package()
{
  senderName = "";
  senderAddress = "";
  senderCity = "";
  senderState = "";
  senderZip = 0;
  label = "";
  date="";
  costPerOunce = 0.0;
  insuranceType = "";
  signatureConfirmation = "";
}

package::package(string sname, string saddress, string scity, string sstate, long szip, string rname,string raddress, string rcity, string rstate, long rzip,string constructorlabel, string constructordate,double constructorweight, double constructorounce, string constructorinsurance, string sigConf)
{
  senderName = sname;
  senderAddress = saddress;
  senderCity = scity;
  senderState = sstate;
  senderZip = szip;

  recipName = rname;
  recipAddress = raddress;
  recipCity = rcity;
  recipState = rstate;
  recipZip = rzip;

  label = constructorlabel;
  date = constructordate;
  weight = constructorweight;
  costPerOunce = constructorounce;
  insuranceType = constructorinsurance;
  signatureConfirmation = sigConf;
}

void package:: setName(string n)
{
  senderName = n;
}
void package:: setAddress(string a)
{
  senderAddress = a;
}
void package:: setCity(string sc)
{
  senderCity = sc;
}
void package:: setState(string ss)
{
  senderState = ss;
}
void package:: setZip(long z)
{
  senderZip = z;
}

void package:: setRname(string rn)
{
  recipName = rn;
}
void package:: setRaddress(string ra)
{
  recipAddress = ra;
}
void package:: setRcity(string rc)
{
  recipCity = rc;
}

void package:: setRstate(string rs)
{
  recipState = rs;
}

void package:: setRzip(long rz)
{
  recipZip = rz;
}


void package:: setLabel(string sl)
{
  label = sl;
}

void package:: setDate(string d)
{
  date = d;
}
void package:: setWeight(double w)
{
  weight = w;
}
void package:: setOunce(double o)
{
  costPerOunce = o;
}
void package:: setInsurance(string i)
{
  insuranceType = i;
}




string package:: getName()const
{
  return senderName;
}

string package::getAddress()const
{
  return senderAddress;
}
string package::getCity()const
{
  return senderCity;
}
string package::getState()const
{
  return senderState;
}
long package::getZip()const
{
  return senderZip;
}


string package::getRname()const
{
  return recipName;
}
string package::getRaddress()const
{
  return recipAddress;
}
string package::getRcity()const
{
  return recipCity;
}
string package::getRstate()const
{
  return recipState;
}
long package::getRzip()const
{
  return recipZip;
}


string package::getLabel()const
{
  return label;
}
string package::getDate()const
{
  return date;
}
double package::getWeight()const
{
  return weight;
}
double package::getOunce()const
{
  return costPerOunce;
}
string package::getInsurance()const
{
  return insuranceType;
}



double package::calculateCost()
{
  //INSURANCE FEES//
  double insuranceFee;
  double signatureFee;
  if (insuranceType == "none")
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
  double cost = (weight * costPerOunce)+ insuranceFee;

  return cost;
}


void package::printPackage()
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
  cout<<"Mailed on: "<<date<<endl;
  cout<<"weight: "<<weight<<endl;
  cout<<"Cost per ounce: "<<costPerOunce<<endl;
  cout<<"Insurance: "<<insuranceType<<endl;
  cout<<"Signature: "<<signatureConfirmation<<endl;
  double packagecost=calculateCost();
  cout<<"Cost: "<<packagecost<<endl;
}
