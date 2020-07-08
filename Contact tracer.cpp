#include<iostream>
#include<fstream>
using namespace std;
void tracer();
class isolation{
	int d;
	int m;
	int y;
	public: void date()
		{
			lb1: cout<<" Enter a date in dd/mm/yyyy format: ";
		   std::cin >> d; // read the day
		   if ( std::cin.get() != '/' ) // make sure there is a slash between DD and MM
		   {
		      std::cout << "expected /\n";
		      goto lb1;
		   }
		   std::cin >> m; // read the month
		   if ( std::cin.get() != '/' ) // make sure there is a slash between MM and YYYY
		   {
		      std::cout << "Enter year\n";
		      goto lb1;
		   }
		   std::cin >> y; // read the year
		   std::cout << "Onset of symptoms on: " << d << "/" << m << "/" << y <<endl<<endl;
		}
	public: void period()
		{
			int c=d+10;
			if(m==01||m==03||m==05||m==07||m==8||m==10||m==12)
			{
				if(c>31)
				{
					c=c-31;
					if(m!=12)
					m++;
					else
					{
						m=1;
						y++;
					}
					cout<<"	The number of days to Isolate: 10+"<<endl;
					cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
			
				else
				{
					cout<<"	The number of days to Isolate: 10+"<<endl;
					cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
			}
			else if(m==04||m==06||m==9||m==11)
			{
				if(c>30)
				{
					c=c-30;
					m++;
					cout<<"	The number of days to Isolate: 10+"<<endl;
					cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
				else
				{
					cout<<"	The number of days to Isolate: 10+"<<endl;
					cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
			}
			else if(m==2)
			{
				if(y%4==0)
					if(c>29)
					{
						c=c-29;
						m++;
						cout<<"	The number of days to Isolate: 10+"<<endl;
						cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
					else
					{
						cout<<"	The number of days to Isolate: 10+"<<endl;
						cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
				else
					if(c>28)
					{
						c=c-28;
						m++;
						cout<<"	The number of days to Isolate: 10+"<<endl;
						cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
					else
					{
						cout<<"	The number of days to Isolate: 10+"<<endl;
						cout<<"		Isolation till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
			}	
					
			
		}
	
};

class quarantine{
	int d;
	int m;
	int y;
	public: void date()
		{
			lb1: cout<<" Enter a date in dd/mm/yyyy format: ";
		   std::cin >> d; // read the day
		   if ( std::cin.get() != '/' ) // make sure there is a slash between DD and MM
		   {
		      std::cout << "expected /\n";
		      goto lb1;
		   }
		   std::cin >> m; // read the month
		   if ( std::cin.get() != '/' ) // make sure there is a slash between MM and YYYY
		   {
		      std::cout << "Enter year\n";
		      goto lb1;
		   }
		   std::cin >> y; // read the year
		   std::cout << "Date of exposure: " << d << "/" << m << "/" << y <<endl<<endl;
		}
	public: void period()
		{
			int c=d+14;
			if(m==01||m==03||m==05||m==07||m==8||m==10||m==12)
			{
				if(c>31)
				{
					c=c-31;
					if(m!=12)
					m++;
					else
					{
						m=1;
						y++;
					}
					cout<<"	 Number of days to Quarantine: 14+"<<endl;
					cout<<"		Stay in Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
			
				else
				{
					cout<<"	 Number of days to Quarantine: 14+"<<endl;
					cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
			}
			else if(m==04||m==06||m==9||m==11)
			{
				if(c>30)
				{
					c=c-30;
					m++;
					cout<<"	 Number of days to Quarantine: 14+"<<endl;
					cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
				else
				{
					cout<<"	 Number of days to Quarantine: 14+"<<endl;
					cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
				}
			}
			else if(m==2)
			{
				if(y%4==0)
					if(c>29)
					{
						c=c-29;
						m++;
						cout<<"	 Number of days to Quarantine: 14+"<<endl;
						cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
					else
					{
						cout<<"	 Number of days to Quarantine: 14+"<<endl;
						cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
				else
					if(c>28)
					{
						c=c-28;
						m++;
						cout<<"	 Number of days to Quarantine: 14+"<<endl;
						cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
					else
					{
						cout<<"	 Number of days to Quarantine: 14+"<<endl;
						cout<<"		Quarantine till:"<< c << "/" << m << "/" << y <<endl<<endl;
					}
			}	
					
			
		}
	
};

class Contacts
{
	public: void green()
	{	int contacts;
		cout<<"Your's is a Green Zone"<<endl;
	cout<<"Number of people to be traced is atleast: 3\n 1.One family member \n 2.Two neighbours "<<endl;
	cout<<"Enter number of contacts : ";
	cin>>contacts;
	long long cn;
	char name[50],surname[50],zone[2];
	  std::ofstream myfile;
	myfile.open("trial.csv",ios::out|ios::app);
	myfile<<"Patient Number"<<","<<"NAME"<<","<<"SURNAME"<<","<<"NUMBER"<<","<<"ZONE"<<endl<<endl;
		for(int i=0;i<contacts;i++)
		{
			cout<<" Enter name : ";
			cin>>name;
			cout<<" Enter surname : ";
			cin>>surname;
			cout<<" Enter contact number : ";
			cin>>cn;
			cout<<" Enter zone : ";
			cin>>zone;
			cout<<endl<<endl;
			myfile<<i+1<<","<<name<<","<<surname<<","<<cn<<","<<zone<<endl;
		}
	}
	public: void orange()
	{	int contacts;	
	cout<<"Your's is an Orange Zone"<<endl;
	cout<<"Number of contacts to be traced is: 10\n 1.Family members\n 2.Atleast one contact of all Neighbours\n 3.Milkman\n 4.Newspaper Provider"<<endl<<endl;
	cout<<"Enter number of contacts : ";
	cin>>contacts;
	long long cn;
	char name[50],surname[50],zone[2];
	  std::ofstream myfile;
	myfile.open("trial.csv",ios::out|ios::app);
	myfile<<"Patient Number"<<","<<"NAME"<<","<<"SURNAME"<<","<<"NUMBER"<<","<<"ZONE"<<endl<<endl;
		for(int i=0;i<contacts;i++)
		{
			cout<<" Enter name : ";
			cin>>name;
			cout<<" Enter surname : ";
			cin>>surname;
			cout<<" Enter contact number : ";
			cin>>cn;
			cout<<" Enter zone : ";
			cin>>zone;
			
			myfile<<i+1<<","<<name<<","<<surname<<","<<cn<<","<<zone<<endl;
		}
	}
	public: void red()
	{	int contacts;
		cout<<"Your's is a Red Zone"<<endl;
	cout<<"  Number of contacts to be traced is: 20\n 1.Family members\n 2.Atleast one contact of all Neighbours\n 3.Milkman\n 4.Newspaper Provider 5.Any other close contacts or extended relatives"<<endl<<endl;
	cout<<"Enter number of contacts : ";
	cin>>contacts;
	long long cn;
	char name[50],surname[50],zone[2];
	  std::ofstream myfile;
	myfile.open("trial.csv",ios::out|ios::app);
	myfile<<"Patient Number"<<","<<"NAME"<<","<<"SURNAME"<<","<<"NUMBER"<<","<<"ZONE"<<endl<<endl;
		for(int i=0;i<contacts;i++)
		{
			cout<<i+1<<"\)";
			cout<<" Enter name : ";
			cin>>name;
			cout<<" Enter surname : ";
			cin>>surname;
			cout<<" Enter contact number : ";
			cin>>cn;
			cout<<" Enter zone : ";
			cin>>zone;
			cout<<endl;
			myfile<<i+1<<","<<name<<","<<surname<<","<<cn<<","<<zone<<endl;
		}
	}

	
};


int main()
{	int p;			//to continue
	char z; 		//switch case constant for selecting zone
	
	cout<<"COVID-19 CONTACT TRACER"<<endl;
	cout<<"  Isolation:To keep infectious people separate from healthy people."<<endl;
	cout<<"  Quarantine:To keep healthy people who have been exposed to virus away from those who have not been exposed."<<endl<<endl;
	cout<<"What type of timeline do you need? \n  a.Isolation \n  b.Qurantine"<<endl;
	cin>>z;
	
	switch(z)
	{
		case 'a':
			{	
				isolation i;
				cout<<"When did signs and symptoms begin to develop ?"<<endl;
				i.date();
				i.period();	
				cout<<"Person can end isolation only if symptoms have improved and had no fever for past 3 days."<<endl;
				cout<<" If person has developed severe symptoms: \n  Contact: 020-26127394"<<endl;
				break;			
			}
		case 'b':
			{
				quarantine q;
				cout<<"When was the contact\'s last exposure with the case ?"<<endl;
				q.date();
				q.period();	
				cout<<"Person can end quarantine if 14 days have passed since coming in contact with the case."<<endl;
				cout<<" If person has developed some severe symptoms: \n  Contact: 020-26127394"<<endl<<endl;
				break;	
				
			}
	}
	cout<<"Enter 0 to continue ";
	cin>>p;
	tracer();
	cout<<endl;
	cout<<"Thankyou for your time! Stay Home! Stay Safe!"<<endl;
return 0;
}

void tracer()
{
		int t;		//switch case constant for selecting type of timeline
	cout<<"Enter the number of your Zone"<<endl;
	cout<<"  1. A-1 \n 2. A-2 \n 3. A-3 \n 4. B-1 \n 5. B-2 \n 6. B-3"<<endl;
	lb2: cin>>t;
	switch(t)
	{
		case 1:
			{
				cout<<" Please give details of people you came in contact in last 2 days."<<endl;
				Contacts con;
				con.green();
				break;
			}
		case 2:
			{
				cout<<" Please give details of people you came in contact in last 2 days."<<endl;
				Contacts con;
				con.orange();
				break;
			}
		case 3:
			{
				cout<<" Please give details of people you came in contact in last 2 days."<<endl;
				Contacts con;
				con.red();
				break;
			}
		case 4:
			{
				cout<<" Please give details of people you came in contact in last 2 days."<<endl;
				Contacts con;
				con.green();
				break;
			}
		case 5:
			{
				cout<<" Please give details of people you came in contact in last 2 days."<<endl;
				Contacts con;
				con.orange();
				break;
			}
		case 6:
			{
				cout<<" Please give details of people you came in contact in last 2 days."<<endl;
				Contacts con;
				con.red();
				break;
			}
		default: 
			{
				cout<<"Enter a valid Number"<<endl;
				goto lb2;
			}
			
	}
	
}
	


