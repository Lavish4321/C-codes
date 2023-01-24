#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[100];
    float marks;
};

main()

{
    struct student s1;
    s1.rollno = 101;
    //s1.name="Lavesh";
    strcpy(s1.name , "Lavesh");
    s1.marks=92.5;

    struct student s2;
    s2.rollno = 102;
    strcpy(s2.name , "Ansh");
    s2.marks=97.5;


    printf("\n Student Name = %s" , s1.name);
    printf("\n Student Roll No. = %d" , s1.rollno);
    printf("\n Student Marks = %f" , s1.marks);
    
}