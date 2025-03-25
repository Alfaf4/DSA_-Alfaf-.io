#include <stdio.h>
#include <stdlib.h>

int main()
{
   float marks[3][4];
   char*subjects[]={"physics" , "chemistry" , "math"};
   char*categories[]={"Assignment" , "course work" , "mid term" , "End of term"};
   float subject_avg[3], total_avg=0;
   for (int i = 0; i < 3; i++){
    printf("\nEnter Marks For %s:\n",subjects[i]);
    for (int j=0; j<4; j++){
        printf("Enter %s mark",categories[j]);
        scanf("%f",&marks[i][j]);
    }
   }
   printf("\n=== subject averages ====\n");

}
