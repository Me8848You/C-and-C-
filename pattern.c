#include<conio.h>   
#include<stdio.h>


// int main()
// {
//     int i,j;               

//     for(i=5;i>=1;i--)
//     {
//         for (j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for(i=1;i<=5;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
//     getch();
// }

// THe output format in Half pyramid 
// like:
// A
// BB
// CCC
// DDDD
// EEEEE
// int main()
// {
//     int j,i;
//     char Alpha[6]="ABCDE";
//     for(i=+1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",Alpha[i-1]);
//         }
//      printf("\n");

//     }
// return 0;
// }



// int main()
// {

//      int j,i;
//     for(i=5;i>=1;i--)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//      printf("\n");

//     }
// return 0;
// }


int main()
{
  int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i =+ 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space)
     {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

