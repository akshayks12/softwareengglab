#include"student.h"
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
    char buffer[256];
    student temp;
  while(fgets(buffer,sizeof(buffer),fp1))
   {
    sscanf(buffer,"%s %s %f %f %f %f %f %f %f %f %f %f",temp.rollno ,temp.name ,&temp.subjects[0].minor ,&temp.subjects[0].major ,&temp.subjects[1].minor ,&temp.subjects[1].major ,&temp.subjects[2].minor ,&temp.subjects[2].major ,&temp.subjects[3].minor ,&temp.subjects[3].major ,&temp.subjects[4].minor ,&temp.subjects[4].major);
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
   displaydata(fp2,head);
   classaverage(fp2,head);
   findminandmax(fp2,head);
   countgrades(fp2,head);
   fclose(fp1);
   fclose(fp2);
 }
