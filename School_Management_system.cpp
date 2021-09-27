#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int total_student=0;
int total_teacher=0;
class intro{

public:
    intro()
    {
        cout<< "\n\n\t\t\t                INTRODUCTION  TO PROJECT                \t\t\t\n\n"
        <<"\t\t Every school needs to maintain data bases of the students , teachers and staff etc.\n\t\t The data base on the students is required for general purpose. School management is a software\n\t\t development by a team of students as part of the curriculum of CSE .\n\n"
        <<"\n\t\t This software is useful to maintain updated and error free status of all the student\n\t\t and teacher.Here a student also a teacher can register by username\n"
        <<"\t\t password. A student can modify his account, can show the details. When a student leaves\n\t\t the school he can delete his record.. A teacher can also modify his account,\n "
        <<"\t\t also can show his details.\n\n";
        cout<< "\t\tPress any key to go to next page";
        getch();
        system("cls");

        cout<<"\n\n\n\t\t\t**********************************************************";
        cout<<"\n\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t****************************************************************************";
        cout<<"\n\n\t\tProject Members :  ";
        cout<<"\n\t\t\tNADIM NAWSHAD               20-42609-1  \n";
        cout<<"\t\t\tMD. FAHIM KABIR  CHOWDHURY  20-42595-1  \n";
        cout<<"\t\t\tSANJANA AHMED SHUSME        20-42589-1  \n";
        cout<<"\t\t\tTAHASEN HOSSAIN             20-42584-1  \n";
        cout<<"\t\t\tMD ASHIKUZZAMAN SRESTO      20-42609-1  \n";
        cout<<"\n\n\n\t\t\tUnder The guidence of Md. Nazmul Hossain\n\t\t\t\tLECTURER Department of Computer Science\n\t\t\t\tFaculty of Science and Technology\n\t\t\t\tAmerican International University-Bangladesh \n";
        cout<<"\n\n\n\t\t\tPress any key to go to the next page  ";
        getch();
        system("cls");


    }

};




   //void forget();
void S_login();
void T_login();
void registr(string);
void forgot();
void S_entry();
void T_entry();
void setS_new_entry();
void set_T_new_entry();
void S_new_entry();
void T_new_entry();
void getS_new_entry();
void getT_new_entry();
void S_modify();
void S_result();
void T_entry();
void database();
main()
{

//first outer loop
  char choice;
  intro();
  while(choice!='0')//inner loop
    {

//Step 1-Display process
        cout<<"\n\n\n\t\t\t**********************************************************";
        cout<<"\n\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t****************************************************************************";
 cout<<"\n\n\t\t\t\t\t   MAIN SCREEN\n\n";
 cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
 cout<<"\t\t\tEnter your choice: "<<endl<<endl;
 cout<<"\t\t\t\t\t1. Student information"<<endl;
 cout<<"\t\t\t\t\t2. Teacher information"<<endl;
 cout<<"\t\t\t\t\t3. Database Management"<<endl;
 cout<<"\t\t\t\t\t4. Search Information by ID "<<endl;
 cout<<"\t\t\t\t\t0. Exit program"<<endl;
 cout<<"\n\t\t\t\t\tSelect Your Option  :    ";
 cin>>choice;

system("cls");

 switch(choice)
 {
 case '1':
     {
     S_entry();

     //student_info s1;

     //s1.student();
     //s1.setInfo();
     //s1.getInfo();
     }
     break;
 case '2':
     {
     T_entry();
     //teacher_info s2;
     //s2.teacher();
     }
     break;
 case '3' :
     {

     cout<<"\n\n\t\t\t\t\t   Data Base Management\n\n";
     cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
     cout<<"\n\n\n\t\t\t\t\tTotal Number of Student   "<< total_student;
     cout<<"\n\t\t\t\t\tTotal Number of Teacher   "<< total_teacher<<endl;
     cout<<"\n\n\n\t\t\t\t\tPress any key to Back   ";
     getch();
     system("cls");
     }
     break;
 case '4' :
     {

     //search_info s4;

     }
     break;
 case '0' :
     {

     cout<< "\n\n\n\n\n\n\n\n\t\t\t Please wait...............";
     break;
     }
 default :
    {
         cout<< "\n\n\n\t\t\tInvalid Option.";
    }
 }


}
 system("cls");

 cout<<"\n\n\n\n\n\n\n\n\t\t\t**********************************************************";
 cout<<"\n\t\t\t\t\tTHANK YOU for being with us.\n";
 cout<<"\t\t****************************************************************************";

 getch();
}


 // ****************************First Screen ***********************************************
 registr(string uname,string password)
    {
        cout<<"\n\n\t\t\t\t\t  Registration\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tPlease provide Your Username and Password "<<endl<<endl;
        cout<<"\t\t\t\t\tEnter User Name        :   ";
        cin>>uname;


        cout<<"\n\t\t\t\t\tEnter Yor Passwowrd    :   ";
        cin>>password;

        ofstream data("login.txt",ios::out|ios::app);
        data<<uname<<"\t\t\t"<<password<<"\n";
        data.close();

        cout<< "\n\n\t\t\tRegister Successfully\n";
        cout<< "\n\t\t\tPress any key to back  ";
        getch();
        system("cls");

    }

/******************************************** */
void setS_new_entry()
    {
                string fname,lname,father_name,mother_name,religion,gender,blood,admission_date;
                int admission_class,age;
                char sId[15];


                cout<<"\n\n\t\t\t\tEnter Your First Name        :    ";
                cin>>fname;
                cout<<"\t\t\t\tEnter Your Last Name         :    ";
                cin>>lname;
                cout<<"\n\t\t\t\tEnter Father`s       Name    :    ";
                cin.ignore();
                getline(cin,father_name);
                cout<<"\t\t\t\tEnter Mother`s      Name     :    ";
                getline(cin,mother_name);
                cout<<"\n\t\t\t\tEnter Religion               :    ";
                cin>>religion;
                cout<<"\t\t\t\tSelect Gender"<<endl<<
                "\t\t\t(Male=M, Female=F, Other=O)          :    ";
                cin>>gender;
                cout<<"\t\t\t\tEnter Blood group            :    ";
                cin>>blood;
                cout<<"\t\t\t\tEnter age                    :    ";
                cin>>age;
                cout<<"\t\t\t\tEnter Admission Date         :    ";
                cin>>admission_date;
                cout<<"\t\t\t\tEnter Admitted Class         :    ";
                cin>>admission_class;
                cout<<"\t\t\t\tEnter A ID Number            :    ";
                cin>>sId[15];
                cout<<"\n\n\t\tUpdate Information successfully.\n";

                ofstream student("student_info.txt" , ios::app);
                student<<
                "\n\n\t\t\tYour name is              "<<fname<<" "<<lname<<
                "\n\t\t\tYour Father`s name is     "<<father_name<<
                "\n\t\t\tYour Mother`s name is     "<<mother_name<<
                "\n\t\t\tYour Religion is          "<<religion<<
                "\n\t\t\tYour Gender               "<<gender<<
                "\n\t\t\tYour Blood group is       "<<blood<<
                "\n\t\t\tYour age is               "<<age<<
                "\n\t\t\tYour admission Date       "<<admission_date<<
                "\n\t\t\tYour are in class         "<<admission_class<<
                "\n\t\t\tYour Id Number is         "<<sId[15];
                student.close();
}


/******************************************/

/*******************************/


void getS_new_entry()

/**********************/
{
    char idnum[15],id[15];
    int num;


    cout<<"\n\n\t\t\t\tEnter Your ID Number          :    ";
    cin>>idnum[15];


    ifstream match("student_info.txt");
        while(match>>id[15] )
        {
              if(id[15]=idnum[15])
              {
                num=1;
              }

        if(num=1)
        {

    ifstream teacher("student_info.txt");

    cout<<idnum[15]<<endl;
        }

    else
    {
        cout<<"\n\n\t\t\t\tIncorrect ID , Please try Again    ";
        getch();
        system("cls");
    }



}
}


/**************************************************/


/*************************************/


/****************************************/

void S_login()
{
        int log;
        string userName,Name,userPassword,Pass;
        cout<<"\n\n\t\t\t\t\t   Please Login\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tPlease Enter The Information Carefully "<<endl<<endl;
        cout<<"\t\t\t\t\tEnter User Name          :   ";
        cin>>userName;
        cout<<"\n\t\t\t\t\tEnter Your Password      :   ";
        cin>>userPassword;

        ifstream match("login.txt");
        while(match>>Name>>Pass)
        {
              if(Name==userName && Pass==userPassword)
              {
                log=1;
              }
        }
        if (log==1)
        {
        cout<<"\n\n\t\t\t\t\t   Thank You For Login\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        system("cls");
        char choice;
        do
        {
        cout<<"\n\n\t\t\t\t\t   Student Information\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tPlease choose your option"<<endl<<endl;
        cout<< "\t\t\t\t\t1.Create New Entry  ";
        cout<< "\n\t\t\t\t\t2.View Account        ";
        cout<< "\n\t\t\t\t\t3.Modify Account        ";
        //cout<< "\n\t\t\t\t\t3.Delete Account        ";
        cout<< "\n\t\t\t\t\t3.Show Result        ";
        cout<< "\n\t\t\t\t\t0.Back To Main Menu     ";
        cin>>choice;

        if(choice=='1')
        {
            total_student++;
        }
        system("cls");
     switch(choice)
        {
        case'1' :
            {
                char ch;
                do{

                setS_new_entry();

                cout<<endl<<endl;

                cout<< "\n\t\tPress '0' to Back  ";
                cout<< "\n\t\tOr any Key to Admit more Student      ";
                cin>>ch;

                cout<< "\n\n\t\tPlease wait..............";
                system("cls");
                }while(ch!='0');
                break;

            }

        case'2' :
            {
                getS_new_entry();
                cout<< "\n\n\t\tPress any key to Back  ";
                getch();
                cout<< "\n\n\n\n\n\n\t\t\tPlease wait..............";
                system("cls");

                break;
            }
        case'3' :
            {//S_modify();

                break;
            }
        case'4' :
            {
                //S_result();
                //S_result();
                break;
            }
        case '0':
            {
                cout<< "\n\n\n\n\n\n\t\t\tPlease wait..............";
                break;
            }
        default :
            {

            cout<< "\n\n\t\tInvalid Choice .......... ";

            }

        }

        }while(choice!='0');
        system("cls");
        }
        else
        {

            cout<< "\n\n\n\n\n\n\n\n\t\tOpps Username or Password is incorrect. Please Try Again.";
            getch();
            system("cls");
        }

}

/********************************************/
void forgot()
{
        string Uname,u;
        char Upass[20],p[20];
        int cou;
        cout<<"\n\n\t\t\t\t\t   Opps You have forgot Your password\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tPlease Enter Your username to set new password "<<endl<<endl;
        cout<<"\t\t\t\t\tEnter User Name          :   ";
        cin>>Uname;


        ifstream match("login.txt");
        while(match>>u)
        {
            if(u==Uname)
            {
                cou=1;
            }
        }
        if(cou=1)
        {
                cout<<"\t\t\t\t\tEnter Your password      :   ";
                cin>>Upass[20];
                p[20]=Upass[20];
                cout<<"\t\t\t\t\t Password Change Successfully.  \n\n";
                cout<< "\t\t\t\t\t Press any key to back  ";
                getch();
                system("cls");


        }
        else
        {
               cout<< "\n\n\n\t\tOpps Username  is incorrect. Please Try Again.";
               cout<< "\t\t\t\t\t Press any key to back  ";
               getch();
               system("cls");
        }

}

void S_entry()
 {
        char choice;

        while(choice!='0')
        {
        cout<<"\n\n\t\t\t\t\t   Please Register first\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tChoose Your option to access "<<endl<<endl;
        cout<< "\t\t\t\t\t1. Registration\n";
        cout<< "\t\t\t\t\t2. Login \n";
        cout<< "\t\t\t\t\t3. Forgot Password \n";
        cout<< "\t\t\t\t\t0. Press '0' to go to main menu   ";
        cin>>choice;
        system("cls");
        switch(choice)
        {
        case'1' :
            {
                string unam;
                char pass[20];
                registr(unam, pass);
                break;
            }
        case'2' :
            {
                S_login();
                break;
            }
        case '3':
            {
                forgot();
                break;
            }

        case '0':
            {
                cout<< "\n\n\n\n\n\n\n\n\t\t\t\t Please wait...............";
                break;
            }
        default :
            {
            cout<< "\n\n\n\t\t\t\tInvalid Choice. Try Again ";
            }
        }
}
        while(choice!='0');//loop finish

    system("cls");
}




/***********************************************************/




/****************************************************************/



void set_T_new_entry()
    {
                string fname,lname,father_name,mother_name,religion,gender,blood,joining_date;
                int cls_Teacher,age;
                char tId[15];

                cout<<"\n\n\t\t\t\tEnter Your First Name     :    ";
                cin>>fname;
                cout<<"\t\t\t\tEnter Your Last Name          :    ";
                cin>>lname;
                cout<<"\n\t\t\t\tEnter Father`s       Name   :    ";
                cin.ignore();
                getline(cin,father_name);
                cout<<"\t\t\t\tEnter Mother`s      Name      :    ";
                getline(cin,mother_name);
                cout<<"\n\t\t\t\tEnter Religion              :    ";
                cin>>religion;
                cout<<"\t\t\t\tSelect Gender"<<endl<<
                "\t\t\t(Male=M, Female=F, Other=O)           :    ";
                cin>>gender;
                cout<<"\t\t\t\tEnter Blood group             :    ";
                cin>>blood;
                cout<<"\t\t\t\tEnter age                     :    ";
                cin>>age;
                cout<<"\t\t\t\tEnter Joining Date            :    ";
                cin>>joining_date;
                cout<<"\t\t\t\tWhich Class Teacher You Are   :    ";
                cin>>cls_Teacher;
                cout<<"\t\t\t\tEnter Your ID Number          :    ";
                cin>>tId;
                cout<<"\n\n\t\tUpdate Information successfully.\n";

                ofstream teacher("teacher_info.txt" , ios::app);
                teacher<<
                "\n\n\t\t\tYour name is                     "<<fname<<" "<<lname<<
                "\n\t\t\tYour Father`s name is              "<<father_name<<
                "\n\t\t\tYour Mother`s name is              "<<mother_name<<
                "\n\t\t\tYour Religion is                   "<<religion<<
                "\n\t\t\tYour Gender                        "<<gender<<
                "\n\t\t\tYour Blood group is                "<<blood<<
                "\n\t\t\tYour age is                        "<<age<<
                "\n\t\t\tYour joining Date                  "<<joining_date<<
                "\n\t\t\tYour are the class Teacher of      "<<cls_Teacher<<
                "\n\t\t\tYour ID Number                     "<<tId;
                teacher.close();
}

/*******************************/




/**************************************************/



void getT_new_entry()

/**********************/
{
    char idnum[15],id[15];
    int cont;


    cout<<"\n\n\t\t\t\tEnter Your ID Number          :    ";
    cin>>idnum[15];


    ifstream match("teacher.txt");
        while(match>>id[15] )
        {
              if(id[15]=idnum[15])
              {
                cont=1;
              }

        if(cont=1)
        {

    ifstream teacher("teacher_info.txt");

    cout<<idnum[15]<<endl;
        }

    else
    {
        cout<<"\n\n\t\t\t\tIncorrect ID , Please try Again    ";
        getch();
        system("cls");
    }



}
}

void T_login()
{
        int log;
        string userName,userPassword,Name,Pass;
        cout<<"\n\n\t\t\t\t\t   Please Login\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tPlease Enter The Information Carefully "<<endl<<endl;
        cout<<"\t\t\t\t\tEnter User Name          :   ";
        cin>>userName;
        cout<<"\n\t\t\t\t\tEnter Yor Passwowrd      :   ";
        cin>>userPassword;

        ifstream match("login.txt");
        while(match>>Name>>Pass)
        {
              if(Name==userName && Pass==userPassword)
              {
                log=1;
              }
        }
        if (log==1)
        {
        cout<<"\n\n\t\t\t\t\t   Thank You For Login\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        system("cls");
        char choice;
        do
        {
        cout<<"\n\n\t\t\t\t\t   Teacher Information\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tPlease choose your option"<<endl<<endl;
        cout<< "\t\t\t\t\t1.Create New Entry  ";
        cout<< "\n\t\t\t\t\t2.View Account        ";
        cout<< "\n\t\t\t\t\t3.Modify Account        ";
        //cout<< "\n\t\t\t\t\t3.Delete Account        ";
        cout<< "\n\t\t\t\t\t3.Set Result        ";
        cout<< "\n\t\t\t\t\t0.Back To Main Menu     ";
        cin>>choice;

        if(choice=='1')
        {
            total_teacher++;
        }
        system("cls");
     switch(choice)
        {
        case'1' :
            {
                char ch;
                do{

                set_T_new_entry();

                cout<<endl<<endl;

                cout<< "\n\t\tPress '0' to Back  ";
                cout<< "\n\t\tOr any Key to Admit more Student      ";
                cin>>ch;

                cout<< "\n\n\t\tPlease wait..............";
                system("cls");
                }while(ch!='0');
                break;

            }

        case'2' :
            {
                getT_new_entry();

                cout<< "\n\n\n\n\n\n\t\t\tPress any key to Back..............";
                getch();
                cout<< "\n\n\n\n\n\n\t\t\tPlease wait..............";
                system("cls");

                break;
            }
        case'3' :
            {//S_modify();

                break;
            }
        case'4' :
            {
                //S_result();
                //S_result();
                break;
            }
        case '0':
            {
                cout<< "\n\n\n\n\n\n\t\t\tPlease wait..............";
                break;
            }
        default :
            {

            cout<< "\n\n\t\tInvalid Choice .......... ";

            }

        }

        }while(choice!='0');
        system("cls");
        }
        else
        {

            cout<< "\n\n\n\n\n\n\n\n\t\tOpps Username or Password is incorrect. Please Try Again.";
            getch();
            system("cls");
        }

}



void T_entry()
 {
        char choice;

        while(choice!='0')
        {
        cout<<"\n\n\t\t\t\t\t   Please Register first\n\n";
        cout<<"\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t\tChoose Your option to access "<<endl<<endl;
        cout<< "\t\t\t\t\t1. Registration\n";
        cout<< "\t\t\t\t\t2. Login \n";
        cout<< "\t\t\t\t\t3. Forgot Password \n";
        cout<< "\t\t\t\t\t0. Press '0' to go to main menu   ";
        cin>>choice;
        system("cls");
        switch(choice)
        {
        case'1' :
            {
                string unam,pass;
                registr(unam, pass);
                break;
            }
        case'2' :
            {
                T_login();
                break;
            }
        case '3':
            {
                forgot();
                break;
            }

        case '0':
            {
                cout<< "\n\n\n\n\n\n\n\n\t\t\t\t Please wait...............";
                break;
            }
        default :
            {
            cout<< "\n\n\n\t\t\t\tInvalid Choice. Try Again ";
            }
        }
}
        while(choice!='0');//loop finish

    system("cls");

}


void database()
{
        cout<< "Total student  "<<total_student;
        cout<< "Total teacher  "<<total_teacher;
}

