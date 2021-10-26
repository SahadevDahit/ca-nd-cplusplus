#include<stdio.h>
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<direct.h>
#include<process.h>
#include<time.h>
#include<string.h>
#include<windows.h>

// Various User Defined Function

void add();// add a record
void search();// search a record
void list(); //display the record
void del(); // delete the record
void modify();// mpdify the record
void rec(); //scan the new record
void view();
void callExit();// exit function
void menu();// Main Menu

void empty();// used in deleting the record



/*declaring structure*/

struct information
{
  char ID[15]; //Student ID
  char name[30];  //Student name
  char cls[10];  //Semester of Student
  char faculty[35];  //faculty of Semester
  char address[50];  //Address of Student
  char email[30];  //Email of Student
  char rollno[15];  //Roll No Of a Student
  char phoneno[15];  //Phone No Of a Student
};
struct information c;
FILE *fpt;

int main()
{
  system("cls");
  menu();
  return 0;
}



void menu()
{
  int input;
  system("cls");
  printf(" \t\t\t\t 1. Enter new Records\n\n");
  printf("\t\t\t\t");
  printf(" 2. Modify Records\n\n");
  printf("\t\t\t\t");
  printf(" 3. Delete Records\n\n");
  printf("\t\t\t\t");
  printf(" 4. Search and view Records\n\n");
  printf("\t\t\t\t");
  printf(" 5. Exit\n\n");
 printf("\t\t\t\t");
  printf(" 6. View record \n\n");
  printf("\t\t\t\t");
  printf("Choose options:[1/2/3/4/5]:");
  fflush(stdin);
  scanf("%d",&input);
  switch(input)
  {
    case 1:
    {
      system("cls");
      add();
    }
    break;

    case 2:
    {
      system("cls");
      modify();
      getchar();
    }
    break;

    case 3:
    {
      system("cls");
      del();
    }
    break;

    case 4:
    {
      system("cls");
      search();
    }break;
case 6:
	{
		system ("cls");
		view();
	}
	break;
    case 5:
    {
      system("cls");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      fflush(stdin);
      printf("\t\t\t\t");
      printf("\t\t*************Thank you*************");
      printf("\n\n\n\n");
      exit(0);
    }
    break;

    default:
    {
      fflush(stdin);
      printf("\n\n\n");
      printf("\t\t\t\t");
      printf("      Invalid input!");
      printf("\n\n");
      printf("\t\t\t\t");
      printf("Press Enter to choose again...");
      getchar();
      menu();
    }
  }
  }
 void view()
  {
  	int ch;
  	fpt=fopen("data.txt","r");
  	while (fread(&c, sizeof(c), 1, fpt)==0)
        {
         ch=0;
          
        }
        if(ch!=0)
        {
          system("cls");
          printf("\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");

          printf("<<==Search Succesfull==>>");
          fflush(stdin);
          getchar();
          list(); //display the record
          printf("\n\n\n");
          printf("\t\t\t\t\t");
          printf("Press Enter For Main Menu...");
          getchar();
          menu();
        }
        else
        {
          system("cls");
          getchar();
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");

          printf("<<--Record Not Found-->>");
          printf("\n\n\n");
          printf("\t\t\t\t\t");
          printf("Press Enter For Main Menu...");
          getchar();
          menu();
        }

        fclose(fpt);
      }
  

  void add()
  {
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
    printf("Semester           :  ");
    fflush(stdin);
    scanf("%[^\n]s",c.cls);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("faculty          :  ");
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
      add();
    }
    else
    menu();
    getchar();
    }

      void callExit()
      {
       system("cls");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
       printf("\t\t\t\t\t");
       fflush(stdin);
       printf("You are out of the System.");
       printf("\n\n");
       printf("\t\t\t\t");
       printf("   Press Enter to Continue Exit Program...");
       getchar();
       exit(0);
      }

      void search()
      {
        int ch;
        char sid[30];
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");

        fflush(stdin);
        printf("Enter Full Name: ");
        scanf("%[^\n]s",sid);

        fpt=fopen("data.txt","r");
        while (fread(&c, sizeof(c), 1, fpt)==1)
        {
          if(strcmp(sid,c.name)==0)
          {
            ch=1;
            break;
          }
        }
        if(ch==1)
        {
          system("cls");
          printf("\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");

          printf("<<==Search Succesfull==>>");
          fflush(stdin);
          //getchar();
          list(); //display the record
          printf("\n\n\n");
          printf("\t\t\t\t\t");
          printf("Press Enter For Main Menu...");
          getchar();
          menu();
        }
        else
        {
          system("cls");
          getchar();
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");

          printf("<<--Record Not Found-->>");
          printf("\n\n\n");
          printf("\t\t\t\t\t");
          printf("Press Enter For Main Menu...");
          getchar();
          menu();
        }

        fclose(fpt);
      }


      void list()
{
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
      printf("Semester           : %s  ",c.cls);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("faculty          : %s  ",c.faculty);

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

}

       void del()
       {
         FILE *fpt,*temp;
         int ch;
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
         printf("Record Deleted Successfully.\n");
         printf("\n");
         printf("\t\t\t\t\t");
         printf("Press Enter For Main Menu...");
         getchar();
         menu();
       }

      

      void empty()
      {
        strcpy(c.ID," ");
        strcpy(c.name," ");
        strcpy(c.cls," ");
        strcpy(c.faculty," ");
        strcpy(c.address," ");
        strcpy(c.email," ");
        strcpy(c.rollno," ");
        strcpy(c.phoneno," ");
      }

void modify()
{
  char mid[30];

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
          list();
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
        fclose(fpt);
        menu();
      }

      if(!found)
      {
        {
          system("cls");
          //delay(200);
          fflush(stdin);

          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");
          fflush(stdin);

          printf("<<--Record Not Found-->>");
          getchar();
          menu();
        }
      }
      fclose(fpt);
}
       void rec()
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
         printf("Semester           :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.cls);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("faculty          :  ");
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
