#include <stdio.h>

int main()
{
    int sub;
    printf("1 for math\n2 for science\n3 for both math and science.\n");
    printf("Enter which usbject you have passed:\n");
    scanf("%d",&sub);
    if (sub == 1)
    {
     printf("15 tk gift.\n");
    }
    else if (sub == 2)
    {
     printf("15 tk gift.\n");
    }
    else if (sub == 3)
    {
     printf("45 tk gift.\n");
    }
    else
    {
        printf("wrong choice.\n");
    }
    return 0;
}

// int main() {
//   int day;
//   printf("enter a number to find a day.\n");
//   scanf("%d",&day);
  
//   switch (day) {
//     case 1:
//       printf("Monday");
//       break;
//     case 2:
//       printf("Tuesday");
//       break;
//     case 3:
//       printf("Wednesday");
//       break;
//     case 4:
//       printf("Thursday");
//       break;
//     case 5:
//       printf("Friday");
//       break;
//     case 6:
//       printf("Saturday");
//       break;
//     case 7:
//       printf("Sunday");
//       break;
//   }
    
//   return 0;
// }