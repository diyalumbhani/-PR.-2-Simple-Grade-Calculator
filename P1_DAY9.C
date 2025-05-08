#include<stdio.h>
#include<conio.h>
void main()
//step1
{

  char grade;
  float score;
  clrscr();
  printf("Enter your score:");
  scanf("%f",&score);
 grade= (score>=80)
       ?'A'
       : (score>=70)
       ?'B'
       : (score>=60)
       ?'C'
       : (score>=50)
       ?'D'
       : (score>=40)
       ?'E'
       : 'F';
       printf("Your Grade is %c",grade);

       switch(grade) {
       case 'A':
	printf("\n Excellent Work");
	      break;
	case 'B':
	printf("\n Well Done");
	break;
	case 'C':
	printf("\n Good Job");
	break;
	case 'D':
	printf("\n You passed, but you could do better");
	break;
	case 'E':
	printf("\n Passed with grace");
	break;
	case 'F':
	printf("\n Sorry , you failed");
	break;

	      default:
		      printf("\n invalid choice");
	     }
       if(grade=='F')
       {
	 printf("\n Please try again next time ");

       }
       else
       {
	 printf("\n Congratulations! You are eligible for the next level");
       }






  getch();
}