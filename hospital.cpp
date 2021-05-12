#include<iostream>
#include<conio.h>
#include<fstream>
#include<unistd.h>
using namespace std;
class password
{
    string pass = "";
	char ch;
public:
	void getaccess()
	{
	help:
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "                                                                        WELCOME TO BIR HOSPITAL  " << endl;
		cout << "                                             --------------------------------------------------------------------------" << endl;
		cout << "                                             ----                                                                  ----" << endl;
		cout << "                                             ----           YOU ARE ACCESSING THE PRIVATE INFORMATION  OF          ----" << endl;
		cout << "                                             ----                         THIS HOSPITAL                            ----" << endl;
		cout << "                                             ----                                                                  ----" << endl;
		cout << "                                             --------------------------------------------------------------------------" << endl;
		cout << "                                                                 ENTER THE PASSWORD:";
		ch = _getch();
		while (ch != 13)
		{
			pass.push_back(ch);//pushback  adds character to end of string
			cout << "*";
			ch = _getch();
		}
		if (pass == "pass")
		{
			cout << "\n\n\t\t\t\t\t\tAccess Granted! \n";
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n\n\t\t\t\tAccess not granted!\t\tTry Again!\n";
			system("pause");//It holds the screen until user presses key
			system("cls");//It clears screen
			pass.clear();
			goto help;
		}
	}
};
int main()
{
    char fname[20];
    int n,i;
    password p;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
    cout << "                                                     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "                                                      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                   WELCOME  TO  THE  HOSPITAL                  $$$" << endl;
	cout << "                                                      $$$                      MANAGEMENT  SYSTEM                       $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                MADE BY SUMAN BALAYAR          $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "                                                      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	system("pause");
	system("cls");
    p.getaccess();
 a: cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
    cout<<"                                                       ----------------------------------------------------------------------"<<endl;
    cout<<"                                                       ----------------------------------------------------------------------"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                  1.GENERAL CLINIC                                --"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                  2.LUNG CLINIC                                   --"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                  3.HEART CLINIC                                  --"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                                                                  --"<<endl;
    cout<<"                                                       --                  4.EXIT THE SYSTEM                               --"<<endl;
    cout<<"                                                       ----------------------------------------------------------------------"<<endl;
    cout<<"                                                       ----------------------------------------------------------------------"<<endl;

    cout<<"        \n\n\n\n     !!!!!!!!!!!!!     PLZ REFER THE DEPARTMENT !!!!!!!!!!! "<<endl;
    cout<<"                                 Press";
    cin>>n;
    if (n>4||n<1)
    {
        cout<<"\t\t\t\t\t\t\tINVALID CHOICE!!!!RETRY PLZ!!!!";
        system("pause");
        system("cls");
        goto a;
    }
    if(n==1||n==2||n==3)
    {
        system("pause");
        system("cls");
        goto b;
    }
    else
    {
        system("pause");
    system("cls");
     goto m;
    }
b:
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<" \t\t\t\t              ------------------------------------------------"<<endl;
cout<<" \t\t\t\t              -                                              -"<<endl;
cout<<" \t\t\t\t              -   1.ADD PATIENT RECORD                       -"<<endl;
cout<<" \t\t\t\t              -   2.TAKE PATIENT TO DOCTOR                   -"<<endl;
cout<<" \t\t\t\t              -   3.ADD DIAGNOSIS INFORMATION                -"<<endl;
cout<<" \t\t\t\t              -   4.FULL MEDICAL HISTORY                     -"<<endl;
cout<<" \t\t\t\t              -   5.INFORMATION ABOUT HOSPITAL               -"<<endl;
cout<<" \t\t\t\t              -   6.EXIT THE SYSTEN                          -"<<endl;
cout<<" \t\t\t\t              -                                              -"<<endl;
cout<<" \t\t\t\t              ------------------------------------------------"<<endl;
cout<<"             ENTER your Alternative";
cin>>i;
system("pause");
system("cls");
//Adding the record of the patient
if(i==1)
{
    ofstream forbit;//This data types helps in creating and writing to files
  cout<<"\n\n\n\nEnter the patient's file name : ";
  cin>>fname;
  forbit.open(fname);//opens the file named fname
  if(!fname)//checks whether the file exists
  {
      cout<<"\t\t\t\t\tError while opening the File!";
  }
  else
  {
  struct info
  {
      char name[20];
      int age;
      char sex[20];
      char bloodgroup[20];
      char phone[20];
      char disease[20];
      float patientID;
  };
  info m;
  cout<<"\n------------------------------------------------------------------\n";
  forbit<<"\n------------------------------------------------------------------\n";
  cout<<"\nName of patient:";
  forbit<<"\nName of patient:";
  cin>>m.name;
  forbit<<m.name;
  cout<<"\nAge :";
  forbit<<"\nAge :";
  cin>>m.age;
  forbit<<m.age;
  cout<<"\nSex:";
  forbit<<"\nSex:";
  cin>>m.sex;
  forbit<<m.sex;
  cout<<"\nBloodGroup:";
  forbit<<"\nBloodGroup:";
  cin>>m.bloodgroup;
  forbit<<m.bloodgroup;
  cout<<"\ndisease:";
  forbit<<"\ndisease:";
  cin>>m.disease;
  forbit<<m.disease;
  cout<<"\npatientID:";
  forbit<<"\npatientID:";
  cin>>m.patientID;
  forbit<<m.patientID;
  cout<<"\n------------------------------------------------------------------\n";
  forbit<<"\n-----------------------------------------------------------------\n";
  cout<<"\n\nInformation Saved Successfully";
}
system("pause");
system("cls");
goto b;
}
//ADDING THE DIAGNOSIS INFORMATION OF PATIENTS
if(i==3)
{
fstream forbit;
cout<<"enter the name of patient whose diagnosis information is to be added";
cin>>fname;
forbit.open(fname,ios::in);
if(!forbit)
{
    cout<<"\n\n!!!!!ERROR WHILE OPENING THE FILE!!!!!!";
}
else
{
    cout<<"\n\n\n\t\t ------------------------------ Medical Report Of "<<fname<<"--------------------------------\n\n\n";
    if(forbit.is_open())
    {
        string line;
        while(forbit.good())
        {
            getline(forbit,line);
            cout<<line<<endl;
        }
    }
}
forbit.close();
forbit.open(fname,ios::out | ios::app);
cout<<"\n\n\n\n\t--------------------------Further Diagnosis information of"<< fname<<"------------------------------\n\n\n";
struct diagnose
{
    char dis[20];
    char med[20];
    char admit[20];
    char WardNo[20];
    char covidstatus[20];
} ;
diagnose d;
cout<<"\n------------------------------------------------------------------\n";
  forbit<<"\n------------------------------------------------------------------\n";
  cout<<"\nDisease:";
  forbit<<"\nDisease:";
  cin>>d.dis;
  forbit<<d.dis;
  cout<<"\Medecine:";
  forbit<<"\nMedecine:";
  cin>>d.med;
  forbit<<d.dis;
  cout<<"\nAdmission:";
  forbit<<"\nAdmission:";
  cin>>d.admit;
  forbit<<d.admit;
  cout<<"\nWardNo:";
  forbit<<"\nWardno:";
  cin>>d.WardNo;
  forbit<<d.WardNo;
  cout<<"\nCovid Status:";
  forbit<<"\nCovidStatus:";
  cin>>d.covidstatus;
  forbit<<d.covidstatus;
  cout<<"\n-----------------------------------------------------\n";
  forbit<<"\n----------------------------------------------------\n";
  cout<<"     INFORMATION SAVED SUCCESSFULLY  ";
  forbit.close();
system("pause");
system("cls");
goto b;
}
//DISPLAYING INFORMATION ABOUT PATIENT STATUS
if(i==4)
{
    ifstream forbit;
    cout<<"Enter the name of patient file to be opened";
    cin>>fname;
forbit.open(fname,ios::in);
if(!forbit)
{
    cout<<"\n\n!!!!!ERROR WHILE OPENING THE FILE!!!!!!";
}
else
{
    cout<<"\n\n\n\t\t ------------------------------ Full medical history of "<<fname<<"--------------------------------\n\n\n";
    if(forbit.is_open())
    {
        string line;
        while(!forbit.eof())
        {
            getline(forbit,line);
            cout<<line<<endl;
        }
    }

}
system("pause");
system("cls");
goto b;
}
if(i==2)
{
    cout<<"\n\n\n\n\n\n\t\t\t\t\tOPERATING on "<<fname;
    for(int z=0;z<10;z++)
    {
        cout<<".";
        sleep(1);//standard library function to delay time
    }
    system("pause");
    system("cls");
    goto b;
}
if(i==5)
{
    ifstream file;
    file.open("information.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n\n\t\tERROR OPENING THE FILE";
    }
    else
    {
        string letter;
        cout<<"\n\n\n\n\t\t\t\                         INFORMATION ABOUT THE HOSPITAL         \n\n\n ";
        if(file.is_open())
        {
            while(!file.eof())
            {
                getline(file,letter);
                cout<<letter;
            }
        }
    }
    system("pause");
    system("cls");
    goto b;
}
if (i==6)
{
  m:cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
    cout << "                                                     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "                                                      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                      THANKS FOR USING                         $$$" << endl;
	cout << "                                                      $$$                HOSPITAL  MANAGEMENT  SYSTEM                   $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                MADE BY SUMAN BALAYAR          $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$                                                               $$$" << endl;
	cout << "                                                      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "                                                      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
}
    return 0;
}

