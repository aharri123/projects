#include<iostream>
#include <string>
#include "flatRatePackage.h"
#include "package.h"
using namespace std;

FlatRatePackage::FlatRatePackage()
{
  type = "";
  width = 0.0;
  length = 0.0;
  height = 0.0;
}

FlatRatePackage::FlatRatePackage(string na,string addr, string cit, string stat, long zi, string recname, string recaddr,string rcit, string rstat, long reczi,string lab,string dat, double we,double oun, string insur,string conf,string typ, double wid, double len, double hei):package( na, addr, cit, stat, zi, recname, recaddr, rcit,rstat, reczi, lab, dat, we, oun, insur, conf)
{
  type = typ;
  //  if(wid > 0 && wid < 12)
  // {
      width = wid;
      // }
      // if (len > 0 && len < 12)
      // {
      length = len;
      // }  
      // if (hei > 0 && hei < 5)
      // {
      height = hei;
      // }
}

double FlatRatePackage::calculateCost()
{
  double totalShippingCost;  
  double shippingCost;
  double insuranceFee;
  double signatureFee;


  if(type == "box")
    {
      /**      if (width>12 || width < 0 || length > 12 || length < 0||height > 5||height<0)
	{
	  cout<<"Cannot add"<<endl;
	}
      **/
      if(width < 8 && length < 5 && height < 2)
	{
	  shippingCost = 11.30;
	}
      else if(width < 11 && length < 8 && height < 5)
	{
	  shippingCost = 17.75;
	}
      else 
	{
	  shippingCost = 20.10;
	}
    }
  
  if (type == "paddedEnvelope")
    {
      shippingCost = 9.45;
    }
  if (type =="LegalEnvelope")
    {
      shippingCost = 7.65;
    }
  if (type == "letter")
    {
      shippingCost = 3.20;
    }


  //INSURANCE FEE INFO//
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

  totalShippingCost = shippingCost + insuranceFee + signatureFee;
  return totalShippingCost;
}

void FlatRatePackage::printFPackage()
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
  cout<<"Type: "<<type<<endl;
  cout<<"Width: "<<width<<endl;
  cout<<"Length: "<<length<<endl;
  cout<<"Height: "<<height<<endl;
  double fcost = calculateCost();
  cout<<"Cost: "<<fcost<<endl;
}

