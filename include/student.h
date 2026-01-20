#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct{
 float minor;
 float major;
 float total;
 float points;
 char grade[2];
}subject;

typedef struct student{
  char rollno[10];
  char name[20];
  float cgpa;
  subject subjects[5];
  struct student *next;
}student;
extern student *head;
int validate(student data);
void calculatetotal(student *data);
void addstudent(student data);
void displaydata(FILE *fp2,student *head);
void classaverage(FILE *fp2,student *head);
void findminandmax(FILE *fp2,student *head);
void countgrades(FILE *fp2,student *head);
#endif
