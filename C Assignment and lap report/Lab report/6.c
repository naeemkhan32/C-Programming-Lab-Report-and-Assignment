#include <stdio.h>

struct Students{
   char  name[100];
   int id;
   double c;
   double algo;
   double eng;
   double math;
};

int main( )
{
    int n;

    printf("Number of Students: ");
    scanf("%d", &n);

    struct Students student[n];

    for(int i=0;i<n;i++){
        printf("Student %d\n", i+1);

        printf("Student Name: ");
        scanf("%s", student[i].name);

        printf("Student ID: ");
        scanf("%d", &student[i].id);

        printf("GPA of C: ");
        scanf("%lf", &student[i].c);

        printf("GPA of Algo: ");
        scanf("%lf", &student[i].algo);

        printf("GPA of English: ");
        scanf("%lf", &student[i].eng);

        printf("GPA of Math: ");
        scanf("%lf", &student[i].math);
    }

    for(int i=0;i<n;i++){
        printf("Student %d:\n", i+1);

        double cgpa = (student[i].c+student[i].algo+student[i].eng+student[i].math)/4;
        printf("CGPA: %0.3lf\n", cgpa);

        if(cgpa==4){
            printf("GRADE: A+\n");
        }
        else if(cgpa==3.75){
            printf("GRADE: A\n");
        }
        else if(cgpa==3.50){
            printf("GRADE: A-\n");
        }
        else if(cgpa==3.25){
            printf("GRADE: B+\n");
        }
        else if(cgpa==3.00){
            printf("GRADE: B\n");
        }
        else if(cgpa==2.75){
            printf("GRADE: B-\n");
        }
        else if(cgpa==2.50){
            printf("GRADE: C+\n");
        }
        else if(3.75<cgpa && cgpa<4.00){
            if(3.75<cgpa && cgpa<3.875) printf("GRADE: A (Equivalence to 3.75(using Flooring))\n");
            else printf("GRADE: A+ (Equivalence to 4.00(using Ceiling))\n");
        }
        else if(3.50<cgpa && cgpa<3.75){
            if(3.50<cgpa && cgpa<3.625) printf("GRADE: A- (Equivalence to 3.50(using Flooring))\n");
            else printf("GRADE: A (Equivalence to 3.75(using Ceiling))\n");
        }
        else if(3.25<cgpa && cgpa<3.50){
            if(3.25<cgpa && cgpa<3.375) printf("GRADE: B+ (Equivalence to 3.25(using Flooring))\n");
            else printf("GRADE: A- (Equivalence to 3.50(using Ceiling))\n");
        }
        else if(3.00<cgpa && cgpa<3.25){
            if(3.00<cgpa && cgpa<3.125) printf("GRADE: B (Equivalence to 3.00(using Flooring))\n");
            else printf("GRADE: B+ (Equivalence to 3.25(using Ceiling))\n");
        }
        else if(2.75<cgpa && cgpa<3.00){
            if(2.75<cgpa && cgpa<2.875) printf("GRADE: B- (Equivalence to 2.75(using Flooring))\n");
            else printf("GRADE: B (Equivalence to 3.00(using Ceiling))\n");
        }
        else if(2.50<cgpa && cgpa<2.75){
            if(2.50<cgpa && cgpa<2.625) printf("GRADE: C+ (Equivalence to 2.50(using Flooring))\n");
            else printf("GRADE: B- (Equivalence to 2.75(using Ceiling))\n");
        }

    }

   return 0;
}
