#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct data
	{
		char nm[10],district[10];
		int age;
		double ph;
	};	

float elec_price(int ch)
{
  switch(ch)
  {
  	case 1:  return(1.5);
  	         break;
  	case 2:  return(2.0);
  	         break;
  	case 3:  return(2.2);
  	         break;
  	case 4:  return(2.1);
  	         break;
  	case 5:  return(1.2);
  	         break; 
  	default: return(-1);                                            
  }
}

int g_roof(int ch)
{
	switch(ch)
  {
  	case 1:  return(12000);
  	         break;
  	case 2:  return(13700);
  	         break;
  	case 3:  return(20000);
  	         break;
  	case 4:  return(14800);
  	         break;
  	case 5:  return(9997);
  	         break; 
  	default: return(-1);                                            
  }
}

void sms(char msg_e, char msg_w)
{
    if(msg_e=='y')
    	cout<<"Send details for education.";	 
    if(msg_w=='y')
    	cout<<"Send details to water authority.";
} 


int main()
{
	int age,ph,ch,ngo=5500;
	char nm[10];
	float ep,tgp;

	cout<<"Name: ";
	cin>>nm;
	cout<<"Age: ";
	cin>>age;
	cout<<"Phone: ";
	cin>>ph;

	cout<<"\nChoose your district:";
	cout<<"\n1.Dallas";
	cout<<"\n2.Texas";
	cout<<"\n3.Florida";
	cout<<"\n4.New mexico";
	cout<<"\n5.Ohio\n";
	cin>>ch;
    int gp=0;
	gp=g_roof(ch);
    //ep=elec_price(ch);
    
    if(gp>14000)
    {
    	cout<<"\nProposed Project is Feasible";
    	tgp=gp/2;
    	if (tgp>=ngo)
    	{
    		cout<<"\nProceed Details To NGO";
    	}
        else
        {
        	cout<<"\nNo Sufficient Fund";
        }	
    }
    else
    {
    	cout<<"\nProject Initialization is Not Feasible";
    }
    
    if (tgp>=ngo)
    {
    	cout<<"\nSend education details to NGO";
    }

}   
