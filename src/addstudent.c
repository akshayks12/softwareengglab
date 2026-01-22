#include "addstudent.h"
student *head = NULL;
void addstudent(student data)
 {
  student *newstudent = malloc(sizeof(student));
  if(newstudent == NULL)
   {
    printf("memmory allocation failed");
    return;
   }
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
