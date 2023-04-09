/*#include <stdio.h>
int main()
{
   int counter; 		//number of grade to be entered next
   int grade, total, average;
   total = 0; 		// initialize total
   counter = 1;		// initialize loop counter
   while ( counter <= 10 ) {	 // loop 10 times
      printf( "%s", "Enter grade: ");
      scanf( "%d", &grade );
      total = total + grade;
      counter = counter + 1; 	// increment counter
      } // end while
average = total / 10;
printf( "Class average is %d\n", average );
}*/

#include <stdio.h>
int main()
{
  int counter, grade, total;
  float average;
  total = 0;
  counter = 0;
  printf("%s", "Enter grade, -1 to end:");
  scanf("%d", &grade);
  while ( grade != -1 ) {	//Sentinel value = -1
      total = total + grade;
      counter = counter + 1;
      printf( "%s", "Enter grade, -1 to end: " );
      scanf("%d", &grade);
   } //end while
  if (counter != 0) {
  	average = (float) total/counter;  //type conversion
  	printf("Class average is %.2f\n", average);
   } //end if
  else {
  	puts("No grades were entered");
  } //end else
}
