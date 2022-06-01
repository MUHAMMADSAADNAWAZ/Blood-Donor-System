#include<iostream>
#include<fstream>
using namespace std;
const int u=1000;
void donor_record()
{
	ofstream out;
	out.open("bds_donor_data.txt",ios::binary|ios::out|ios::app);
	out<<"                                <--------------------------------->                                             "<<endl;
	out<<"                                WELCOME TO FCIT BLOOD DONOR SOCIETY                                             "<<endl;
	out<<"                                <---------------------------------->                                            "<<endl<<endl<<endl;
    out<<"                                A donor system made by \"MUHAMMAD SAAD NAWAZ\"                                   "<<endl<<endl<<endl;
    int a=1;
	while(a<7&&a!=0&&a>0)
	{	
	cout<<"If you want to add donor record press 1:"<<endl<<endl;
	cout<<"If you want to search a donor record based on name press 2:"<<endl<<endl;
	cout<<"If you want to search a list of donors based on blood group press 3:"<<endl<<endl;
	cout<<"If you want to update the donor record after succesful donation press 4:"<<endl<<endl;
	cout<<"If you want to remove donor record press 5:"<<endl<<endl;
	cout<<"And if you do not want to perform any operation press 0:"<<endl<<endl;
	cin>>a;
	bool flag1=true,flag2=true;
	string n[u],r[u],c[u],bg[u],g[u],ad[u],d[u];
	string age[u],ph[u];
	if(a==1)
	{
	for(int i=0;a==1;i++)
	{
		cout<<"Entering donor record"<<endl<<endl<<endl;
		cout<<"First of all you need to add your record"<<endl<<endl;
		cout<<"Enter your name:"<<endl<<endl;
		cin>>n[i];
		cout<<"Enter your age:"<<endl;
		cin>>age[i];
		cout<<"Enter your religion"<<endl<<endl;
		cin>>r[i];
		cout<<"Enter your cast"<<endl<<endl;
		cin>>c[i];
		cout<<"Enter your blood group"<<endl<<endl;
		cin>>bg[i];
		cout<<"Enter your phone number:"<<endl<<endl;
		cin>>ph[i];
		cout<<"Enter your gender"<<endl<<endl;
		cin>>g[i];
		cout<<"Enter your home adress"<<endl<<endl;
		cin>>ad[i];
		cout<<"Enter date of donation:"<<endl<<endl;
		cin>>d[i];
		out<<"Data entered for donor:"<<i+1<<"is"<<endl;
		out<<"Donor name is:"<<n[i]<<endl;
		out<<"Donor religion is:"<<r[i]<<endl;
		out<<"Donor cast is:"<<c[i]<<endl;
		out<<"Donor blood group is:"<<bg[i]<<endl;
		out<<"Donor phone number is:"<<ph[i]<<endl;
		out<<"Donor gender is:"<<g[i]<<endl;
		out<<"Donor adress is:"<<ad[i]<<endl;
		out<<"Donor last date of donation is:"<<endl;
	    cout<<endl<<endl;
	cout<<"If you want to add donor record press 1:"<<endl<<endl;
	cout<<"If you want to search a donor record based on name press 2:"<<endl<<endl;
	cout<<"If you want to search a list of donors based on blood group press 3:"<<endl<<endl;
	cout<<"If you want to update the donor record after succesful donation press 4:"<<endl<<endl;
	cout<<"If you want to remove donor record press 5:"<<endl<<endl;
	cout<<"If you want to see list of all donators press 6:"<<endl<<endl;
	cout<<"And if you do not want to perform any operation press 0:"<<endl<<endl;
	cin>>a;
	}
}
	while(a==2)
	{
		string e;
		cout<<"Searching donor record"<<endl<<endl<<endl;
		cout<<"Enter person name whose record you want to search"<<endl<<endl;
		cin>>e;
		for(int i=0;i<1000;i++)
		{
		if(e==n[i])
		{
			cout<<"Person name is:"<<n[i]<<endl<<endl;
			cout<<"Person age is:"<<age[i]<<endl<<endl;
			cout<<"Person religion is:"<<r[i]<<endl<<endl;
			cout<<"Person blood group is:"<<bg[i]<<endl<<endl;
			cout<<"Person phone number is:"<<ph[i]<<endl<<endl;
			cout<<"Person gender is:"<<g[i]<<endl<<endl;
			cout<<"Person home adress is:"<<ad[i]<<endl<<endl;
			cout<<endl<<endl;
			out<<"Searching donor record"<<endl<<endl<<endl;
			out<<"Person name is:"<<n[i]<<endl<<endl;
			out<<"Person age is:"<<age[i]<<endl<<endl;
			out<<"Person religion is:"<<r[i]<<endl<<endl;
			out<<"Person blood group is:"<<bg[i]<<endl<<endl;
			out<<"Person phone number is:"<<ph[i]<<endl<<endl;
			out<<"Person gender is:"<<g[i]<<endl<<endl;
			out<<"Person home adress is:"<<ad[i]<<endl<<endl;
			out<<"Person date of last donation is:"<<d[i]<<endl<<endl;
			break;
	}
	}
	cout<<"If you want to add donor record press 1:"<<endl<<endl;
	cout<<"If you want to search a donor record based on name press 2:"<<endl<<endl;
	cout<<"If you want to search a list of donors based on blood group press 3:"<<endl<<endl;
	cout<<"If you want to update the donor record after succesful donation press 4:"<<endl<<endl;
	cout<<"If you want to remove donor record press 5:"<<endl<<endl;
	cout<<"And if you do not want to perform any operation press 0:"<<endl<<endl;
	cin>>a;
	cout<<endl<<endl<<endl;	
}	
	    while(a==3)
        {
        cout<<"Searching blood group"<<endl<<endl;
		cout<<"Enter blood group which blood you need "<<endl<<endl;
		string d;
		cin>>d;
		cout<<"List of donators names for blood \""<<d<<"\"you entered is:"<<endl<<endl;
		for(int i=0;i<1000;i++)
   {
			
		if(d==bg[i])
		{
		cout<<"Names in our list of same blood donators are:"<<n[i]<<endl<<endl;
		cout<<endl<<endl;
		out<<"Names in our list of same blood donators are:"<<endl<<endl;
		out<<n[i]<<endl<<endl;
		flag2=false;
		break;
        } 
   }
   if(flag2==true)
   {
   	cout<<"No name is matched for blood group you enter:"<<endl;
   	cout<<"Please contact any other blood donor society:"<<endl<<endl;
   }
   	cout<<"If you want to add donor record press 1:"<<endl<<endl;
	cout<<"If you want to search a donor record based on name press 2:"<<endl<<endl;
	cout<<"If you want to search a list of donors based on blood group press 3:"<<endl<<endl;
	cout<<"If you want to update the donor record after succesful donation press 4:"<<endl<<endl;
	cout<<"If you want to remove donor record press 5:"<<endl<<endl;
	cout<<"And if you do not want to perform any operation press 0:"<<endl<<endl;
	cin>>a;
cout<<endl<<endl<<endl;

}
	while(a==4)
	{	
		cout<<"Updating donor record"<<endl<<endl<<endl;
		cout<<"Update donor record after succesful donation"<<endl<<endl;
		string v;
		cout<<"Enter name whose record you want to update:"<<endl<<endl;
		cin>>v;
		for(int i=0;i<1000;i++)
	{
		if(v==n[i])
		{
		cout<<"Enter your new date of donation:"<<endl<<endl;
		cin>>d[i];
		cout<<"Donor date updated:"<<endl;
		out<<"Enter your new date of donation:"<<endl<<endl;
		out<<d[i];
		out<<endl;
		out<<"Donor date updated:"<<endl;
		cout<<endl<<endl;
		break;
	}
	}
	cout<<"If you want to add donor record press 1:"<<endl<<endl;
	cout<<"If you want to search a donor record based on name press 2:"<<endl<<endl;
	cout<<"If you want to search a list of donors based on blood group press 3:"<<endl<<endl;
	cout<<"If you want to update the donor record after succesful donation press 4:"<<endl<<endl;
	cout<<"If you want to remove donor record press 5:"<<endl<<endl;
	cout<<"And if you do not want to perform any operation press 0:"<<endl<<endl;
	cin>>a;
}
	while(a==5)
	{
		cout<<"Removing donor record:"<<endl<<endl;
		out<<"Removing donor record:"<<endl;
		cout<<"Removing donor record due to some medical reasons or any else:"<<endl<<endl<<endl;
		cout<<"Enter donor name whose record you want to delete"<<endl<<endl;
		string t;
		cin>>t;
		for(int i=0;i<1000;i++)
		{
		if(t==n[i])
		{
			age[i]=" " ;
			r[i]=" ";
			c[i]=" ";
			bg[i]=" ";
			ph[i]=" ";
			g[i]=" ";
			ad[i]=" ";
			d[i]=" ";
			out<<"Donor record removed"<<endl<<endl;
			out<<"Person name is:"<<n[i]<<endl<<endl;
			out<<"Person age is:"<<age[i]<<endl<<endl;
			out<<"Person religion is:"<<r[i]<<endl<<endl;
			out<<"Person blood group is:"<<bg[i]<<endl<<endl;
			out<<"Person phone number is:"<<ph[i]<<endl<<endl;
			out<<"Person gender is:"<<g[i]<<endl<<endl;
			out<<"Person home adress is:"<<ad[i]<<endl<<endl;
			out<<"Person date of last donation is:"<<d[i]<<endl<<endl;
		
			cout<<"Donor record removed"<<endl<<endl;
			cout<<"You can check it by pressing 2(check donor record)"<<endl<<endl;
			cout<<"Now you are not able to find this person blood:"<<endl<<endl;
			flag1=false;
			break;
		}
	}
		if(flag1==true) 
		{
			cout<<"Your entered name is not matched:"<<endl<<endl;
			cout<<"Please enter correct name next time:"<<endl<<endl;
		}
	cout<<"If you want to add donor record press 1:"<<endl<<endl;
	cout<<"If you want to search a donor record based on name press 2:"<<endl<<endl;
	cout<<"If you want to search a list of donors based on blood group press 3:"<<endl<<endl;
	cout<<"If you want to update the donor record after succesful donation press 4:"<<endl<<endl;
	cout<<"If you want to remove donor record press 5:"<<endl<<endl;
	cout<<"And if you do not want to perform any operation press 0:"<<endl<<endl;
	cin>>a;
		cout<<endl<<endl<<endl;
	}	
}

	if(a<0||a>6)
	{
		cout<<"You enter wrong number:"<<endl<<"Please see menu driven program carefully and enter correct value next time"<<endl<<endl;
	}
	if(a==0)
	{
    cout<<"So you do not want to perform any more operation:"<<endl<<endl;
	cout<<"Good bye and stay blessed:"<<endl;
	out<<"So you do not want to perform any more operation:"<<endl<<endl;
	out<<"Good bye and stay blessed:"<<endl; 		
	}
	out.close();
}
int main ()
{
	cout<<"                                <--------------------------------->                                             "<<endl;
	cout<<"                                WELCOME TO FCIT BLOOD DONOR SOCIETY                                             "<<endl;
    cout<<"                                <--------------------------------->                                             "<<endl<<endl<<endl;
	cout<<"                               A donor system made by \"MUHAMMAD SAAD NAWAZ\"                                   "<<endl<<endl<<endl; 
	donor_record();
}
