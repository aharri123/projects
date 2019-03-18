#include <iostream>
#include <string>
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;

class package
{
 protected: 
  //SENDER INFO
  string senderName;
  string senderAddress;
  string senderCity;
  string senderState;
  long senderZip;
  
  //RECIPIENT INFO
  string recipName;
  string recipAddress;
  string recipCity;
  string recipState;
  long recipZip;

  //OTHER PACKAGE DETAILS
  string label;
  string date; //date shipped
  double weight;
  double costPerOunce; 
  string insuranceType;
  string signatureConfirmation;
 
 public:
  package();
  package(string, string, string, string, long, string, string, string, string, long, string, string, double, double, string,string);

 /** 
 void setName(string);
  void setAddress(string);
  void setCity(string);
  void setState(string);
  void setZip(long);

  void setRname(string);
  void setRaddress(string);
  void setRcity(string);
  void setRstate(string);
  void setRzip(long);

  void setLabel(string);
  void setDate(string);
  void setWeight(double);
  void setOunce(double);
  void setInsurance(string);

  string getName()const;
  string getAddress()const;
  string getCity()const;
  string getState()const;
  long getZip()const;

  string getRname()const;
  string getRaddress()const;
  string getRcity()const;
  string getRstate()const;
  long getRzip()const;

  string getLabel()const;
  string getDate()const;
  double getWeight()const;
  double getOunce()const;
  string getInsurance()const;
**/
  double calculateCost();
  void printPackage();
};
#endif

  
