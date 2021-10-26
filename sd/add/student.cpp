#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
class stud
{
	
	public:
		stud()
		{
		}
	
	  void front();
	  void sview();
	 void sadd();
	 void smodify();
	 void sdelete();
	 void rec();

	 struct information 
	
{
  char ID[15]; //Student ID
  char name[30];  //Student name
  char cls[10];  //sem of Student
  char faculty[35];  //faculty of class
  char address[50];  //Address of Student
  char email[30];  //Email of Student
  char rollno[15];  //Roll No Of a Student
  char phoneno[15];  //Phone No Of a Student

};
struct information c;
 	FILE *fpt;
};

void stud::sadd()
{
	FILE *fpt;
	char input;
    system("cls");
    printf(" ");
    printf("\n");
    printf("\t\t\t\t");
    printf("\n");
    printf("\t\t\t\t");
    printf("\n");
    printf("\t\t\t\t");
    printf("\n");
    printf("\n\n\n\n");
    printf("\t\t\t\t");
    printf("Enter The Information Below: \n\n");
    printf("\t\t\t\t");
    printf("Enter ID        :  ");

    fflush(stdin);
    scanf("%s",c.ID);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Full Name       :  ");
    fflush(stdin);
    scanf("%[^\n]s",c.name);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("semester      :  ");
    fflush(stdin);
    scanf("%[^\n]s",c.cls);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Faculty       :  ");
    fflush(stdin);
    scanf("%[^\n]s",c.faculty);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Address         :  ");
    fflush(stdin);
    scanf("%[^\n]s",c.address);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Email Address   :  ");
    fflush(stdin);
    scanf("%[^\n]s",c.email);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Roll No.        :  ");
    fflush(stdin);
    scanf("%s",c.rollno);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Phone No.       :  ");
    fflush(stdin);
    scanf("%s",c.phoneno);
    fflush(stdin);
    fpt=fopen("data.txt","a");
    fwrite(&c,sizeof(c),1,fpt);
    fclose(fpt);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Record added successfully!!");

    printf("\n\n");
    printf("\t\t\t\t");
    printf("Do you want to add more?(Y/N)");
    scanf("%s",&input);
    if(input=='Y' || input=='y')
    {
      sadd();
    }
    else
    front();
    
    }


void stud::sview()
{
	int r=0;
	  ifstream ftp("data.txt",ios::binary);
                if(!ftp)
                
                    cout<<"\n\t\tFile Not Found.";
                
                else
                {
                    cout<<"\n\t    ************ Student List ************ \n\n";
                    ftp.read((char*)this,sizeof(*this));
                while(!ftp.eof())
                {
                                 cout<<"**********************"<<r++<<"************************";
                                  printf(" ");
      printf("\n");
      printf("\t\t\t\t");

      printf("\t\t\t\t");
      printf("\n");
      printf("\t\t\t\t");
      printf("\n");

      printf("\t\t\t\t");


      printf("\tID      :  %s\n\n",c.ID);
      printf("\t\t\t\t");
      printf("Full Name       : %s  ",c.name);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Class           : %s  ",c.cls);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Branch          : %s  ",c.faculty);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Address         : %s  ",c.address);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Email Address   : %s  ",c.email);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Roll No.        : %s  ",c.rollno);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Phone No.       : %s  ",c.phoneno);
      ftp.read((char*)this,sizeof(*this));
      }
                            
                    
                    
                }
                
                cout<<"\n\t\tPress any key to continue.....";
                getch();
	 

	 	 
		  
	
 
 ftp.close();
getchar();
cout<<"\n";
 front();
  }

void stud::smodify()
{
	char mid[30],input;

  int found=0;
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("\t\t\t\t\t");
  fflush(stdin);
  printf("Enter Full Name: ");
  scanf("%[^\n]s",mid);
  fflush(stdin);
  FILE *fpt, *temp;
  temp =fopen("temp.txt","w");
  fpt = fopen("data.txt","r+");
  while(fread(&c, sizeof(c),1,fpt) == 1)
  {
      if(strcmp(mid, c.name) == 0)
      {
          fflush(stdin);
          system("cls");
          printf("\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");
          printf("<<<==Old Record==>>>");
          printf("\n");
          printf("\t\t\t\t\t");
          sview();
          printf("\n\n");
          printf("\t\t\t\t\t");

          printf("Press Enter to modify the record...");


          getchar();
          system("cls");
          rec(); // this will ask to enter new record
          fseek(fpt, ftell(fpt) - sizeof(c),0);
          fwrite(&c, sizeof(c), 1, fpt); //The new name will be added to the record.
          found = 1;
          printf("\n\n");
          printf("\t\t\t\t\t");
          printf("Record Saved !!!");
          getchar();
        }
         printf("Do you want to modify more?(Y/N)");
    scanf("%s",&input);
    if(input=='Y' || input=='y')
    {
      smodify();
      
    }
    else
    front();
    
    }
       
     fclose(fpt);
      }
  
void stud::rec()
       {
         printf(" ");
         printf("\n");
         printf("\t\t\t\t");
         printf("\n");
         printf("\t\t\t\t");
         printf("\n");
         printf("\t\t\t\t");
         printf("\n");
         printf("\n\n\n\n");
         printf("\t\t\t\t");

         printf("Enter The Information Below: \n\n");
         printf("\t\t\t\t");
         printf("\tID      :  %s\n\n",c.ID);
         printf("\t\t\t\t");
         printf("Full Name       :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.name);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Class           :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.cls);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Branch          :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.faculty);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Address         :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.address);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Email Address   :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.email);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Roll No.        :  ");
         fflush(stdin);
         scanf("%s",c.rollno);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Phone No.       :  ");
         fflush(stdin);
         scanf("%s",c.phoneno);
         fflush(stdin);
}

void stud::sdelete()
{
	 FILE *fpt,*temp;
         int ch,input;
         char sid[30];

         system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
         printf("\t\t\t\t\t");
         printf("Enter Full Name:");
         fflush(stdin);
         scanf("%[^\n]s",sid);
         fflush(stdin);
         printf("\t\t\t\t\t");
         printf("\n");
         printf("\t\t\t\t\t");
         printf("Record Deleted Successfully.\n");
         printf("\n");
         fpt=fopen("data.txt","r");
         temp = fopen("temp.txt", "w");
         while (fread(&c, sizeof(c), 1, fpt)==1)
         {
           if(strcmp(sid,c.name)==0)
           {
             {
                 fwrite(&c,sizeof(c),1,temp);
           }
         }
         fclose(fpt);
         fclose(temp);
         remove("data.txt");
         rename("temp.txt","data.txt");
         }
           printf("Do you want to delete more?(Y/N)");
    scanf("%s",&input);
    if(input=='Y' || input=='y')
    {
      sdelete();
      
    }
    else
    front();
    
    }
       
	

void stud::front()
{
	system("cls");
	int i;
	cout<<"\t\t****************Welcome to student record*******************\n\n";
	cout <<"\t\t1.View record \n \t\t2.Add record  \n\t\t3.Modify record  \n\t\t4.Delete record \n\t\t5.Exit \n\n\t\t";
	cout<<"\t\tEnter your choice:- ";
	cin>>i;
	switch(i)
	{
	case 1:
	 sview();
	 break;
	case 2:
	sadd();
	break;
	case 3:
	smodify();
	break;
	case 4:
	sdelete();
	break;
	
	case 5:
	exit(0);
	break;
	
	default:
	cout<<"\n \t\t Invalid choice  "<<endl;
}
}


int main()
{
	stud s;
	s.front();
return 0;	
}
