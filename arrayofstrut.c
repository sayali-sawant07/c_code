#include<stdio.h>
struct{
    int ID;
    char name[20];
    float marks;
}s1,s2,s3;
void main(){
    
  
    printf("Enter the id name marks of student 1:");
    scanf("%d %s %f", &s1.ID, &s1.name, &s1.marks);
    
    printf("Enter the ID, name, marks of student 2:");
    scanf("%d %s %f", &s2.ID, &s2.name, &s2.marks);
   
    printf("Enter the ID, name, marks of student 3:");
    scanf("%d %s %f", &s3.ID, &s3.name, &s3.marks);
   
     printf("Printing the detail\n");  
   printf("%d %s %f", s1.ID,s1.name,s1.marks);
   printf("%d %s %f", s2.ID,s2.name,s2.marks);
   printf("%d %s %f", s3.ID,s3.name,s3.marks);

}