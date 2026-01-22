#include"validate.h"
//checks weather its a rollno or not checks if it is alphanumeric no special characters allowed
int validaterollno(char *rollno)
 {
  int len = strlen(rollno);
  int i=0;
  while(i<len)
   {
    if(isalnum(rollno[i]))
     {
      i++;
     }
    else
     return 0;
   }
   return 1;
 }
 //checks for duplicate rollno
 int duplicate(student *head,char *rollno)
  {
  student *temp = head;
   while(temp != NULL)
    {
    if(strcmp(temp->rollno,rollno) == 0)
     return 1;
    temp = temp->next;
    }
    return 0;
  }
  //validates the name name should only contain alphabets
 int validatename(char *name)
 {
  int len = strlen(name);
  int i=0;
  while(i<len)
   {
    if(isalpha(name[i])||name[i] == '.'||name[i] == ' ')
     {
      i++;
     }
    else
     return 0;
   }
   return 1;
 }
 //checks weather the marks are valid or not the minor marks should be below 40 and major marks above 60
int validmarkminor(float mark)
 {
  if(mark <= 40)
   return 1;
  else
   return 0;
 }
 
int validmarkmajor(float mark)
 {
  if(mark <= 60)
   return 1;
  else
   return 0;
 }
 
int validate(student data)
 {
  if(!validaterollno(data.rollno))
   {
    printf("wrong rollno detected please change it \n");
    return 0;
   }
  if(duplicate(head,data.rollno))
   {
    printf("duplicate rollno detected please change it \n");
    return 0;
   }
  if(!validatename(data.name))
   {
    printf("name format is not correct please change it \n");
    return 0;
   }
  for(int i=0;i<5;i++)
   {
    if(!validmarkminor(data.subjects[i].minor)||!validmarkmajor(data.subjects[i].major))
     {
      printf("marks you entered is wrong,minor marks is less than 40 and major less than 60 \n");
      return 0;
     }
   }
   return 1;
 }
