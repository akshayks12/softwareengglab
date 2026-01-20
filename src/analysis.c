#include"student.h"
void classaverage(FILE *fp2,student *head)
 {
 float total=0,average=0;
  student *temp = head;
  int n=0;
  while(temp!=NULL)
   {
    total += temp->cgpa;
    n=n+1;
    temp=temp->next;
   }
   average = total/n;
  fprintf(fp2,"classaverage of average of  students = %f \n",average);
 }
 
 void findminandmax(FILE *fp2,student *head)
  {
   student *min = head;
   student *max = head;
   student *temp = head;
   while(temp!=NULL)
    {
     if(temp->cgpa < min->cgpa)
      min = temp;
     if(temp->cgpa > min->cgpa)
      max = temp;
      
      temp = temp->next;
    }
    fprintf(fp2,"%s has maximum cgpa of %f \n",max->rollno,max->cgpa);
    fprintf(fp2,"%s has minimum cgpa of %f \n",min->rollno,min->cgpa);
  }
 void countgrades(FILE *fp2,student *head)
  {
   int a=0,o=0,ap=0,b=0,bp=0,c=0,d=0,f=0;
   student *temp = head;
   while(temp != NULL)
    {
     for(int i=0;i<5;i++)
      {
        if(strcmp(temp->subjects[i].grade,"D")==0)
        d++;
        if(strcmp(temp->subjects[i].grade,"F")==0)
        f++;
        if(strcmp(temp->subjects[i].grade,"A")==0)
        a++;
        if(strcmp(temp->subjects[i].grade,"B")==0)
        b++;
        if(strcmp(temp->subjects[i].grade,"O")==0)
        o++;
        if(strcmp(temp->subjects[i].grade,"C")==0)
        c++;
        if(strcmp(temp->subjects[i].grade,"B+")==0)
        bp++;
        if(strcmp(temp->subjects[i].grade,"A+")==0)
        ap++;
      }
      temp=temp->next;
    }
    fprintf(fp2,"\nno of students in each grade \n");
    fprintf(fp2,"O=%d\n",o);
    fprintf(fp2,"A=%d\n",a);
    fprintf(fp2,"A+=%d\n",ap);
    fprintf(fp2,"B=%d\n",b);
    fprintf(fp2,"B+=%d\n",bp);
    fprintf(fp2,"C=%d\n",c);
    fprintf(fp2,"D=%d\n",d);
    fprintf(fp2,"F=%d\n",f);
  }
