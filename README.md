# softwareengglab

datastucture used:-linkedlist
two linked list are used one for storing student details and another for course details.

input format
rollno name
sub1 minormarks majormarks
sub2 minormarks majormarks
sub3 minormarks majormarks
sub4 minormarks majormarks
sub5 minormarks majormarks


some assumption are taken
name:-name will only contain alphabets spaces and dots(.).
The minor and major marks wont be negative it should always be a positive value.
assuming all the subjects has same credits.if not totalgradepoints = totalgradepoints + credit*subjectgradepoint and cgpa=totalgradepoint/totalcredits;

There are total of six modules in this program in which each holds a specific purpose.

student.c
student module is the main module or can be called as parser of the program it parses the program.inorder for the proper working of the program we need to give an inputfile through commandline it first reads the file then checks if it has a valid name and rollno and marks if yes then it computes the grade and add the student to the linked list and move on to the analysis part

algorithm
1.read input file
2.if(validate())
3.calculategrade()
4.addstudent()
5.else
6.print "line is skipped"
endif
7.if head=null
8.print "no record in database"
9.else
10.compute classaverage,max-min cgpa,no of students in eachgrade

validate.c
validate file has functions that validates the data such as rollno marks and name
rollno:-should only contain alphanumeric characters and should not contain special characters and shouldnot contain duplicates
name:-name should only contain alphabets space and dots
marks:-minor marks should be less than 40 and major marks should be less than 60
any data that violates these conditions are discarded

algorithm
1.


calculate.c
calculates the total marks and computes the grade for each student
total = minormarks+majormarks


displaydata.c
systamatically writes the output data onto a desired file

algorithm
displaydata(head)
 while(head != null)
  print (rollno)
  print (name)
  print (cgpa)
  for i=0 to 5
   print (minormarks)
   print(major marks)
   print(total marks)
   print (grade)
   
   
analysis.c
calculates the no of students in each grade,class average and maximum and minimumcgpa holders from the class
for calculating these you need to find total marks grades and cgpa of each student

calculatetotal(head)
 for i=0 to 5
  total = minor+major
  calcuklategrades()
  totalgradepoints = totalgradepoints+subjectpoints
 end for
  cgpa = totalgradepoints/5;


addstudent.c
adds the student data into the linked list

algorithm

