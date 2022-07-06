#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
		int ch=0;
			cout<<"\n\t\tHow many students do u want to Enter??"<<endl;
			cin>>ch;
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{
		    	cout<<"\n\t\t\tEnter the Data of Student "<<i+1<<endl<<endl;
				cout<<"\t\tEnter Name          : ";
				cin>>arr1[i];
				cout<<"\t\tEnter Roll no       : ";
				cin>>arr2[i];
				cout<<"\t\tEnter Branch        : ";
				cin>>arr3[i];
				cout<<"\t\tEnter Division      : ";
				cin>>arr4[i];
				cout<<"\t\tEnter Contact       : ";
				cin>>arr5[i];
				
			}
	    	}
	    	else
	    	{
	    		
	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\n\t\t\tEnter the Data of Student "<<i+1<<endl<<endl;
				cout<<"\t\tEnter Name          : ";
				cin>>arr1[i];
				cout<<"\t\tEnter Roll no       : ";
				cin>>arr2[i];
				cout<<"\t\tEnter Branch        : ";
				cin>>arr3[i];
				cout<<"\t\tEnter Division      : ";
				cin>>arr4[i];
				cout<<"\t\tEnter Contact       : ";
				cin>>arr5[i];
			}
			total=ch+total;
			}
	
}
void show()
{
	if(total==0)
	{
		cout<<"\n\t\t\tNo data is entered"<<endl;
	}
	else{
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\n\t\t\tData of Student "<<i+1<<endl<<endl;
	    		cout<<"\t\tName             : "<<arr1[i]<<endl;
	    		cout<<"\t\tRoll no.         : "<<arr2[i]<<endl;
	    		cout<<"\t\tBranch           : "<<arr3[i]<<endl;
	    		cout<<"\t\tDivision         : "<<arr4[i]<<endl;
	    		cout<<"\t\tContact          : "<<arr5[i]<<endl;
				cout<<"\n\n\t-------------------------------------------------------";
	    	    }
	    	}
}
void search()
{
	if(total==0)
	{
		cout<<"\n\t\t\tNo data is entered"<<endl;
	}
	else{
	string rollno;
				cout<<"\n\t\t\tEnter the roll no of student"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						cout<<"\t\tName          : "<<arr1[i]<<endl;
	    	        	cout<<"\t\tRoll no       : "<<arr2[i]<<endl;
	    		        cout<<"\t\tBranch        : "<<arr3[i]<<endl;
	    		        cout<<"\t\tDivision      : "<<arr4[i]<<endl;
	    	        	cout<<"\t\tContact       : "<<arr5[i]<<endl;
					}
				}
			}
}
void update()
{
	if(total==0)
	{
		cout<<"\n\t\t\tNo data is entered"<<endl;
	}
	else{
		string rollno;
				cout<<"\n\t\t\tEnter the roll no of student which you want to update"<<endl;
				cin>>rollno;
					for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						cout<<"\n\t\t\tPrevious data"<<endl<<endl;
						cout<<"\t\t\tData of Student  :-"<<i+1<<endl;
						cout<<"\t\tName             : "<<arr1[i]<<endl;
	    	        	cout<<"\t\tRoll no.         : "<<arr2[i]<<endl;
	    		        cout<<"\t\tBranch           : "<<arr3[i]<<endl;
	    		        cout<<"\t\tDivision         : "<<arr4[i]<<endl;
	    	        	cout<<"\t\tContact          : "<<arr5[i]<<endl;
	    	        	cout<<"\n\t\t\tEnter new data"<<endl<<endl;
							cout<<"\t\tEnter Name     : ";
				            cin>>arr1[i];
				            cout<<"\t\tEnter Roll no  : ";
				            cin>>arr2[i];
			             	cout<<"\t\tEnter Branch   : ";
				            cin>>arr3[i];
				            cout<<"\t\tEnter Division : ";
				            cin>>arr4[i];
				            cout<<"\t\tEnter Contact  : ";
				            cin>>arr5[i];
					}
				}
			}
		}

void deleterecord()
{
	if(total==0)
	{
		cout<<"\n\t\t\tNo data is entered"<<endl;
	}
	else{
		int a;
	        	cout<<"\t\tPress 1 to delete all record"<<endl;
				cout<<"\t\tPress 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"\n\t\tAll record is deleted..!!"<<endl;
				}
				else if(a==2)
				{
				string rollno;
				cout<<"\n\t\tEnter the roll no of student which you wanted to delete  : "<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						for(int j=i;j<total;j++)
						{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
				     	}
					total--;
					cout<<"\t\tYour required record is deleted"<<endl;
					}
				}
				}
				 
			
			else 
			{
				cout<<"\t\t\tInvalid input";
			}
}
}
main()
{
	cout<<"\n\n         -----------------------------------------------------------  "<< endl;
    cout<<"              Vishwakarma Institute Of Information Technology, Pune, 48"<<endl;
	cout<<"                  Department Of Engg. And Applied Science : First Year"<< endl;
	cout<<"                                Project Presentation         "<< endl;
	cout<<"                                        ON                   "<< endl;
	cout<<"                              Student Database Program  "<< endl;
	cout<<"                                   On C++ Compiler               "<<endl;
	cout<<"             -------------------------------------------------------- "<< endl;
	cout<<  endl << endl << endl<< endl;
	cout<<"                                   Presented by :                                          "<<endl;
	
	cout<<"\n         8011 : Yash Agarwal    8012 : Nikhil Meshram   8013 : Atharva Ashtekar "<<endl;

	cout<<"                 8014 : Kadambari Terdal       8015 : Sayali Sontakke          "<<endl;
	cout<<  endl << endl;
	cout<<"              Press Enter to continue...." << endl << endl << endl << endl;
	getch();
	system("cls");
	int value;
	while(true)
	{
	cout<<"\n\n\t-------------------------------------------------------";
	cout<<"\n\n\t\t\tSTUDENT MANAGEMENT SYSTEM";
    cout<<"\n\n\t----------------------------------------------------";	
	cout<<"\n\n\t\tPress 1 to ENTER STUDENT DATA"<<endl;
	cout<<"\t\tPress 2 to SHOW DATA"<<endl;
	cout<<"\t\tPress 3 to SEARCH PARTICULAR STUDENT"<<endl;
	cout<<"\t\tPress 4 to UPDATE DATA"<<endl;
	cout<<"\t\tPress 5 to DELETE DATA"<<endl;
	cout<<"\t\tPress 6 to EXIT"<<endl;
	cout<<"\n\n\t-------------------------------------------------------";
	cout<<"\n\n\tPlease Enter Your Choice (1-6): ";
	cin>>value;
	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"\n\t\t\tInvalid input"<<endl;
			break;
	}
}
}