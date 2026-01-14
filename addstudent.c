#include "student.h"
student *head = NULL;
void addstudent(student data)
 {
  student *newstudent = malloc(sizeof(student));
  *newstudent = data;
  newstudent->next = NULL;
  
  if(head == NULL)
  {
    head = newstudent;
    return;
 }
 
 student *temp = head;
 while(temp->next)
  {
   temp = temp->next;
  }
  temp->next = newstudent;
}
