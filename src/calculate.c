#include "calculate.h"
//calculates the grades of student based on their minor and major marks
void calculategrade(int i,student *temp,float total)
 {
  if(total < 50)
  {
   strcpy(temp->subjects[i].grade,"F");
   temp->subjects[i].points=0;
  }
  else if(total >= 50 && total <55)
  {
   strcpy(temp->subjects[i].grade,"D");
   temp->subjects[i].points=4;
   }
  else if(total >= 55 && total <60)
  {
   strcpy(temp->subjects[i].grade,"C");
   temp->subjects[i].points=5;
   }
  else if(total >= 60 && total <65)
  {
   strcpy(temp->subjects[i].grade,"B");
   temp->subjects[i].points=6;
   }
  else if(total >= 65 && total <75)
  {
   strcpy(temp->subjects[i].grade,"B+");
   temp->subjects[i].points=7;
   }
  else if(total >= 75 && total <85)
  {
   strcpy(temp->subjects[i].grade,"A");
   temp->subjects[i].points=8;
   }
  else if(total >= 85 && total <90)
  {
   strcpy(temp->subjects[i].grade,"A+");
   temp->subjects[i].points=9;
   }
  else
  {
   strcpy(temp->subjects[i].grade,"O");
   temp->subjects[i].points=10;
   }
 }
 //calculates the total marks by adding minor and major marks
void calculatetotal(student *data)
 {
 float totalpoints =0;
  for(int i=0;i<SUB;i++)
   {
    data->subjects[i].total = data->subjects[i].minor+data->subjects[i].major;
    calculategrade(i,data,data->subjects[i].total);
    totalpoints+=data->subjects[i].points;
   }
   data->cgpa = totalpoints/5;
 }
 
 
 
