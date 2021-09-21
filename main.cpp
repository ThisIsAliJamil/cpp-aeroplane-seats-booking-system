//Created by Ali Jamil

#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char emptySeat = '*';
	char fullSeat = 'X';
	int FirstClass = 12;
	int BussinessClass = 28;
	int EconomyClass = 50;
	char FirstClassSeat[FirstClass];
	char BussinessClassSeat[BussinessClass];
	char EconomyClassSeat[EconomyClass];
	int i,j;
	int placeSeat, seatNo, wantSeat;
	char againTry;
	// initiallization First Class //
	for(i=0;i<FirstClass;i++)
	{
			FirstClassSeat[i]= emptySeat;
	}
	// initiallization Bussiness Class //
	for(i=0;i<BussinessClass;i++)
	{
			BussinessClassSeat[i] = emptySeat;
	}
	// initiallization Economy Class //
	for(i=0;i<EconomyClass;i++)
	{
			EconomyClassSeat[i]= emptySeat;
	}
	
	//output
	cout<<"================================ SEATS PATTERN ================================"<<endl<<endl;
	cout<<"Rows 1 to 3 are first class "<<endl;
	cout<<"Rows 4 to 7 are business class"<<endl;
	cout<<"Rows 8 to 12 are economy class"<<endl<<endl;

    // display First Class //
    cout<<endl;
    cout<<"\t\t\t\t";
	for(i=0;i<FirstClass;i++)
	{ 
	// seats sepration //
	       if(i==2)
	       {
	       	cout<<" ";
		   }
		   if(i==6)
	       {
	       	cout<<" ";
		   }
		   if(i==10)
	       {
	       	cout<<" ";
		   }
	// new line seats //
	       if(i==4)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
		   if(i==8)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
			cout<<FirstClassSeat[i]<<" ";
	}
	// display Bussiness Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t     ";
	for(i=0;i<BussinessClass;i++)
	{
		// seats sepration //
		 if(i==2)
	       {
	       	cout<<" ";
		   }
		    if(i==5)
	       {
	       	cout<<" ";
		   }
		   if(i==9)
	       {
	       	cout<<" ";
		   }
		    if(i==12)
	       {
	       	cout<<" ";
		   }
		    if(i==16)
	       {
	       	cout<<" ";
		   }
		    if(i==19)
	       {
	       	cout<<" ";
		   }
		   if(i==23)
	       {
	       	cout<<" ";
		   }
		   if(i==26)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==7)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==14)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==21)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==28)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			cout<<BussinessClassSeat[i]<<" ";
	}
	// display Economy Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t  ";
	for(i=0;i<EconomyClass;i++)
	{
		// seats sepration //
		if(i==3)
	       {
	       	cout<<" ";
		   }
		    if(i==7)
	       {
	       	cout<<" ";
		   }
		   if(i==13)
	       {
	       	cout<<" ";
		   }
		    if(i==17)
	       {
	       	cout<<" ";
		   }
		    if(i==23)
	       {
	       	cout<<" ";
		   }
		    if(i==27)
	       {
	       	cout<<" ";
		   }
		   if(i==33)
	       {
	       	cout<<" ";
		   }
		   if(i==37)
	       {
	       	cout<<" ";
		   }
		   if(i==43)
	       {
	       	cout<<" ";
		   }
		   if(i==47)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==10)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==20)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==30)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==40)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==50)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			
			cout<<EconomyClassSeat[i]<<" ";
	}
	                                               // START HERE
START:
	cout<<endl<<endl;
	
	cout<<"1. First Class \n2. Business Class \n3. Economy Class "<<endl;
	cout<<"\nWhere you want to place your seat: ";
	cin>>placeSeat;
	cout<<endl;
	
	 // 1ST CONDITION //
    if(placeSeat == 1)
    {
FirstClassNumber:
	// initiallization First Class //
	for(i=0;i<FirstClass;i++)
	{
			FirstClassSeat[i]= emptySeat;
	}
    	cout<<"\t\t\tAVAILABLE SEATS FOR FIRST CLASS"<<endl<<endl;
    	cout<<"\t\t\t\t";
    	for(i=0;i<FirstClass;i++)
	{ 
	// seats sepration //
	       if(i==2)
	       {
	       	cout<<" ";
		   }
		   if(i==6)
	       {
	       	cout<<" ";
		   }
		   if(i==10)
	       {
	       	cout<<" ";
		   }
	// new line seats //
	       if(i==4)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
		   if(i==8)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
			cout<<FirstClassSeat[i]<<" ";
	}
    // Seat number //
    cout<<endl<<endl;
    cout<<"How much seats you want: ";
    cin>>wantSeat;
    if(wantSeat>12)
	{
		cout<<endl;
		cout<<"============================= NOT AVAILABLE SEATS =============================";
		cout<<endl<<endl;
		goto FirstClassNumber;
	}
    for(i=1;i<=wantSeat;i++)
    {
         cout<<"\nEnter seat "<<i<<" number: ";
         cin>>seatNo;
         if(seatNo>12)
	     {
		cout<<endl;
		cout<<"============================== INVALID SEAT NUMBER =============================";
		cout<<endl<<endl;
		goto FirstClassNumber;
	    }
	   else
	   {
	   	FirstClassSeat[seatNo-1] = fullSeat;
	   }
         
	}
	
	                                 // OUTPUT //
	// display First Class //
    cout<<endl;
    cout<<"\t\t\t\t";
	for(i=0;i<FirstClass;i++)
	{ 
	// seats sepration //
	       if(i==2)
	       {
	       	cout<<" ";
		   }
		   if(i==6)
	       {
	       	cout<<" ";
		   }
		   if(i==10)
	       {
	       	cout<<" ";
		   }
	// new line seats //
	       if(i==4)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
		   if(i==8)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
			cout<<FirstClassSeat[i]<<" ";
	}
	// display Bussiness Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t     ";
	for(i=0;i<BussinessClass;i++)
	{
		// seats sepration //
		 if(i==2)
	       {
	       	cout<<" ";
		   }
		    if(i==5)
	       {
	       	cout<<" ";
		   }
		   if(i==9)
	       {
	       	cout<<" ";
		   }
		    if(i==12)
	       {
	       	cout<<" ";
		   }
		    if(i==16)
	       {
	       	cout<<" ";
		   }
		    if(i==19)
	       {
	       	cout<<" ";
		   }
		   if(i==23)
	       {
	       	cout<<" ";
		   }
		   if(i==26)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==7)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==14)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==21)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			cout<<BussinessClassSeat[i]<<" ";
	}
	// display Economy Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t  ";
	for(i=0;i<EconomyClass;i++)
	{
		// seats sepration //
		if(i==3)
	       {
	       	cout<<" ";
		   }
		    if(i==7)
	       {
	       	cout<<" ";
		   }
		   if(i==13)
	       {
	       	cout<<" ";
		   }
		    if(i==17)
	       {
	       	cout<<" ";
		   }
		    if(i==23)
	       {
	       	cout<<" ";
		   }
		    if(i==27)
	       {
	       	cout<<" ";
		   }
		   if(i==33)
	       {
	       	cout<<" ";
		   }
		   if(i==37)
	       {
	       	cout<<" ";
		   }
		   if(i==43)
	       {
	       	cout<<" ";
		   }
		   if(i==47)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==10)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==20)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==30)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==40)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==50)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			
			cout<<EconomyClassSeat[i]<<" ";
	}
	cout<<endl<<endl;
	}
	
	// 2ND CONDITION //
	else if(placeSeat == 2)
	{
BussinessClassNumber:
	// initiallization Bussiness Class //
	for(i=0;i<BussinessClass;i++)
	{
			BussinessClassSeat[i] = emptySeat;
	}
		cout<<"\t\t\tAVAILABLE SEATS FOR BUSSINESS CLASS"<<endl<<endl;
    	cout<<"\t\t\t     ";
	for(i=0;i<BussinessClass;i++)
	{
		// seats sepration //
		 if(i==2)
	       {
	       	cout<<" ";
		   }
		    if(i==5)
	       {
	       	cout<<" ";
		   }
		   if(i==9)
	       {
	       	cout<<" ";
		   }
		    if(i==12)
	       {
	       	cout<<" ";
		   }
		    if(i==16)
	       {
	       	cout<<" ";
		   }
		    if(i==19)
	       {
	       	cout<<" ";
		   }
		   if(i==23)
	       {
	       	cout<<" ";
		   }
		   if(i==26)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==7)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==14)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==21)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==28)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			cout<<BussinessClassSeat[i]<<" ";
	}
    // Seat number //
    cout<<endl<<endl;
    cout<<"How much seats you want: ";
    cin>>wantSeat;
    if(wantSeat>28)
	{
		cout<<endl;
		cout<<"============================= NOT AVAILABLE SEATS =============================";
		cout<<endl<<endl;
		goto BussinessClassNumber;
	}
    for(i=1;i<=wantSeat;i++)
    {
         cout<<"\nEnter seat "<<i<<" number: ";
         cin>>seatNo;
         if(seatNo>28)
	   {
		cout<<endl;
		cout<<"============================== INVALID SEAT NUMBER =============================";
		cout<<endl<<endl;
		goto BussinessClassNumber;
     	}
     	else
     	{
     		BussinessClassSeat[seatNo-1] = fullSeat;
		 }
         
	}

	                                 // OUTPUT //
	// display First Class //
    cout<<endl;
    cout<<"\t\t\t\t";
	for(i=0;i<FirstClass;i++)
	{ 
	// seats sepration //
	       if(i==2)
	       {
	       	cout<<" ";
		   }
		   if(i==6)
	       {
	       	cout<<" ";
		   }
		   if(i==10)
	       {
	       	cout<<" ";
		   }
	// new line seats //
	       if(i==4)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
		   if(i==8)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
			cout<<FirstClassSeat[i]<<" ";
	}
	// display Bussiness Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t     ";
	for(i=0;i<BussinessClass;i++)
	{
		// seats sepration //
		 if(i==2)
	       {
	       	cout<<" ";
		   }
		    if(i==5)
	       {
	       	cout<<" ";
		   }
		   if(i==9)
	       {
	       	cout<<" ";
		   }
		    if(i==12)
	       {
	       	cout<<" ";
		   }
		    if(i==16)
	       {
	       	cout<<" ";
		   }
		    if(i==19)
	       {
	       	cout<<" ";
		   }
		   if(i==23)
	       {
	       	cout<<" ";
		   }
		   if(i==26)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==7)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==14)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==21)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==28)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			cout<<BussinessClassSeat[i]<<" ";
	}
	// display Economy Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t  ";
	for(i=0;i<EconomyClass;i++)
	{
		// seats sepration //
		if(i==3)
	       {
	       	cout<<" ";
		   }
		    if(i==7)
	       {
	       	cout<<" ";
		   }
		   if(i==13)
	       {
	       	cout<<" ";
		   }
		    if(i==17)
	       {
	       	cout<<" ";
		   }
		    if(i==23)
	       {
	       	cout<<" ";
		   }
		    if(i==27)
	       {
	       	cout<<" ";
		   }
		   if(i==33)
	       {
	       	cout<<" ";
		   }
		   if(i==37)
	       {
	       	cout<<" ";
		   }
		   if(i==43)
	       {
	       	cout<<" ";
		   }
		   if(i==47)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==10)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==20)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==30)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==40)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==50)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			
			cout<<EconomyClassSeat[i]<<" ";
	}
	cout<<endl<<endl;
	}
	// 3RD CONDITION //
	else if(placeSeat == 3)
	{
EconomyClassNumber:
	// initiallization Economy Class //
	for(i=0;i<EconomyClass;i++)
	{
			EconomyClassSeat[i]= emptySeat;
	}
		cout<<"\t\t\tAVAILABLE SEATS FOR ECONOMY CLASS"<<endl<<endl;
    cout<<"\t\t\t  ";
	for(i=0;i<EconomyClass;i++)
	{
		// seats sepration //
		if(i==3)
	       {
	       	cout<<" ";
		   }
		    if(i==7)
	       {
	       	cout<<" ";
		   }
		   if(i==13)
	       {
	       	cout<<" ";
		   }
		    if(i==17)
	       {
	       	cout<<" ";
		   }
		    if(i==23)
	       {
	       	cout<<" ";
		   }
		    if(i==27)
	       {
	       	cout<<" ";
		   }
		   if(i==33)
	       {
	       	cout<<" ";
		   }
		   if(i==37)
	       {
	       	cout<<" ";
		   }
		   if(i==43)
	       {
	       	cout<<" ";
		   }
		   if(i==47)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==10)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==20)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==30)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==40)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==50)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			
			cout<<EconomyClassSeat[i]<<" ";
	}
    // Seat number //
    cout<<endl<<endl;
    cout<<"How much seats you want: ";
    cin>>wantSeat;
    if(wantSeat>50)
	{
		cout<<endl;
		cout<<"============================= NOT AVAILABLE SEATS =============================";
		cout<<endl<<endl;
		goto EconomyClassNumber;
	}
    for(i=1;i<=wantSeat;i++)
    {
         cout<<"\nEnter seat "<<i<<" number: ";
         cin>>seatNo;
         if(seatNo>50)
	{
		cout<<endl;
		cout<<"============================== INVALID SEAT NUMBER =============================";
		cout<<endl<<endl;
		goto EconomyClassNumber;
	}
	else
	{
		EconomyClassSeat[seatNo-1] = fullSeat;
	}
         
	}
	
	
	                                 // OUTPUT //
	// display First Class //
    cout<<endl;
    cout<<"\t\t\t\t";
for(i=0;i<FirstClass;i++)
	{ 
	// seats sepration //
	       if(i==2)
	       {
	       	cout<<" ";
		   }
		   if(i==6)
	       {
	       	cout<<" ";
		   }
		   if(i==10)
	       {
	       	cout<<" ";
		   }
	// new line seats //
	       if(i==4)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
		   if(i==8)
	       {
	       	cout<<endl;
	       	cout<<"\t\t\t\t";
		   }
			cout<<FirstClassSeat[i]<<" ";
	}
	// display Bussiness Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t     ";
	for(i=0;i<BussinessClass;i++)
	{
		// seats sepration //
		 if(i==2)
	       {
	       	cout<<" ";
		   }
		    if(i==5)
	       {
	       	cout<<" ";
		   }
		   if(i==9)
	       {
	       	cout<<" ";
		   }
		    if(i==12)
	       {
	       	cout<<" ";
		   }
		    if(i==16)
	       {
	       	cout<<" ";
		   }
		    if(i==19)
	       {
	       	cout<<" ";
		   }
		   if(i==23)
	       {
	       	cout<<" ";
		   }
		   if(i==26)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==7)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==14)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			if(i==21)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t     ";
			}
			cout<<BussinessClassSeat[i]<<" ";
	}
	// display Economy Class //
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t  ";
	for(i=0;i<EconomyClass;i++)
	{
		// seats sepration //
		if(i==3)
	       {
	       	cout<<" ";
		   }
		    if(i==7)
	       {
	       	cout<<" ";
		   }
		   if(i==13)
	       {
	       	cout<<" ";
		   }
		    if(i==17)
	       {
	       	cout<<" ";
		   }
		    if(i==23)
	       {
	       	cout<<" ";
		   }
		    if(i==27)
	       {
	       	cout<<" ";
		   }
		   if(i==33)
	       {
	       	cout<<" ";
		   }
		   if(i==37)
	       {
	       	cout<<" ";
		   }
		   if(i==43)
	       {
	       	cout<<" ";
		   }
		   if(i==47)
	       {
	       	cout<<" ";
		   }
		// new line seats //
		    if(i==10)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==20)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==30)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==40)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			if(i==50)
		    {
		    	cout<<endl;
		    	cout<<"\t\t\t  ";
			}
			
			cout<<EconomyClassSeat[i]<<" ";
	}
	cout<<endl<<endl;
	}
	else if((placeSeat>3) || (placeSeat<1))
	{
		cout<<endl;
		cout<<"================================= INVALID CLASS ================================";
		goto START;
	}
	cout<<"Want to try again Y/N : ";
	cin>>againTry;
	if((againTry =='Y') || (againTry =='y'))
	{
		goto START;
	}
	else if((againTry =='N') || (againTry =='n'))
	{
		cout<<endl;
		cout<<"=================================== ENDED ====================================";
	}
	else
	{
		goto STOP;
	}
STOP:
	getch();
}
