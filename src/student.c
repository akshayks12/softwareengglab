#include"student.h"
#include"calculate.h"
#include"analysis.h"
#include"addstudent.h"
#include"validate.h"
#include"displaydata.h"
int main(int argc,char *argv[])
 {
  if(argc != 2)
   {
    printf("enter input file \n");
    return 1;
   }
  FILE *fp1 = fopen(argv[1],"r");
  FILE *fp2 = fopen("output.txt","w");
  if(fp1 == NULL)
   {
    printf("input a valid input file \n");
    return 1;
    }
    char buffer[256],line[256];
    student temp;
  while(fgets(buffer,sizeof(buffer),fp1))
   {
    sscanf(buffer,"%s %[^\n]",temp.rollno ,temp.name);
    for(int i=0;i<5;i++)
     {
      fgets(line,sizeof(line),fp1);
      sscanf(line,"%s %f %f",temp.subjects[i].name,&temp.subjects[i].minor,&temp.subjects[i].major);
     }
    if(validate(temp))
     {
      calculatetotal(&temp);
      addstudent(temp);
     }
    else
     {
      printf("skipped line with rollno %s \n \n",temp.rollno);
     }
   }
   if(head == NULL)
    {
     printf("no student record detected");
    }
   else{
   displaydata(fp2,head);
   classaverage(fp2,head);
   findminandmax(fp2,head);
   countgrades(fp2,head);
   fclose(fp1);
   fclose(fp2);
   }
 }
