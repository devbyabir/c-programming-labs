/*
 * Lab 7-8.1: Largest of three with pointers
 * Finds the largest of three integers through pointers.
 * Original lab date: 2023-12-06/07
 * The second condition repeats one test; output is still correct, so it is unchanged.
 */
#include<stdio.h>
int main()
{
     int a,b,c;
     int *pa, *pb, *pc;

     printf("Enter Three Numbers:\n");
     scanf("%d%d%d", &a,&b,&c);

     pa= &a;
     pb= &b;
     pc= &c;

     if(*pa > *pb && *pa > *pc)
         {
          printf("Largest Is: %d", *pa);
         }
     else if(*pb > *pc && *pb > *pc)
         {
          printf("Largest Is: %d", *pb);
         }
     else
         {
          printf("Largest Is : %d", *pc);
         }
     return 0;
}
