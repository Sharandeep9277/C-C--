/* Write a program to read the information of all students from the
file Stud_Info.txt. Then edit the details of the best student and
add the entire information at the end of the given file.
Note: Student Information: Roll No, Name, YGPA. */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int roll;
    char name[100];
    double ygpa;
} students;

int main()
{
    int i;
    char c;
	students stud[10];

    FILE *fptr;
    fptr = (fopen("C:\\Users\\Shreyam Maity\\Downloads\\Stud_Info.txt", "r+"));

    if(fptr == NULL)
	{
		printf("\n The Read file could not open");
		exit(0);
	}

    for(i=0; i<10 && feof(fptr)==0; i++) {
		fscanf(fptr,"%d %s %lf", &stud[i].roll, stud[i].name, &stud[i].ygpa);
	}
    double highest = -100;
	int hg_index;
	
	for (i=0; i<10; i++) {
		if (stud[i].ygpa > highest) {
			highest = stud[i].ygpa;
			hg_index = i;
		}
	}
	
	fprintf(fptr,"\n\nBest Student is : Roll - %d, Name - %s, YGPA - %0.2f", stud[hg_index].roll, stud[hg_index].name, stud[hg_index].ygpa);
	fclose(fptr);

    return 0;
}