#include"student.h"
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
 int duplicate(char *rollno)
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
 int validatename(char *name)
 {
  int len = strlen(name);
  int i=0;
  while(i<len)
   {
    if(isalnum(name[i])||name[i] == ' ')
     {
      i++;
     }
    else
     return 0;
   }
   return 1;
 }
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
  if(duplicate(data.rollno))
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
