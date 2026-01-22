#include"displaydata.h"
void displaydata(FILE *fp2,student *head)
 {
 fprintf(fp2,"displays data of students that has no ERROR \n");
 fprintf(fp2,"\n");
 while(head != NULL)
 {
  fprintf(fp2,"%s \t",head->rollno);
  fprintf(fp2,"%s \t",head->name);
  fprintf(fp2,"\tcgpa:-%f \n",head->cgpa);
  for(int i=0;i<SUB;i++)
  {
    fprintf(fp2,"%s \t",head->subjects[i].name);
    fprintf(fp2,"%f \t",head->subjects[i].minor);
    fprintf(fp2,"%f \t",head->subjects[i].major);
    fprintf(fp2,"%f \t",head->subjects[i].total);
    fprintf(fp2,"%s \n",head->subjects[i].grade);
   }
  head = head->next;
 }
 
 }
