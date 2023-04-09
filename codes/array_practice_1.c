#include<stdio.h>
int main()
{
    int score[5];
    score[1] = 23;
    score[2] = 24;
    score[3] = 26;
    score[4] = 28;
    score[5] = 29;
   /* printf("The score by the student is %d\n",score[1]);
     printf("The score by the student is %d\n",score[2]);
      printf("The score by the student is %d\n",score[3]);
       printf("The score by the student is %d\n",score[4]);
        printf("The score by the student is %d\n",score[5]);*/

        for(int i=0;i<=5;i++)
        {
            printf("The marks scored by the students is %d\n",score[i]);
        }

        return 0;
}
