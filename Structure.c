#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[12];
    char id[12];
    char department[12];
    int result;
};

//typedef struct Student Student;

int main()
{
    struct Student student;
    gets(student.name);
    gets(student.id);
    gets(student.department);

    scanf("%d", &student.result);

    puts(student.name);
    puts(student.id) ;
    puts(student.department);
    printf("%d", student.result);

    return 0;
}
