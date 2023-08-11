#include<stdio.h>
#include<string.h>
 
struct Student
   {
    char name[50];
    char major [50];
    int age;
    double gpa;
   };

int main()
{
 
    struct Student student1;
   student1.age=22;
   student1.gpa=3.7;
   strcpy(student1.name,"Salvi");
   strcpy(student1.major,"Mathematics");

   
    struct Student student2;
   student2.age=21;
   student2.gpa=4.00;
   strcpy(student2.name,"Oishi");
   strcpy(student2.major,"Physics");

   printf("%s",student2.name);

    return 0;
}