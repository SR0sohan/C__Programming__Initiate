#include <stdio.h>
#include <string.h>

struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};


int main()
{
    struct Driver d1,d2,d3;
    printf("Enter the details of the Driver no 1:\n");
    printf("Enter the name of the driver:\n");
    scanf("%s", d1.name);
    printf("Enter the dlNo of the driver\n");
    scanf("%s", d1.dlNo);
    printf("Enter the route of the driver\n");
    scanf("%s", d1.route);
    printf("Enter the number of kilometers of the driver\n");
    scanf("%d", &d1.kms);

    printf("Enter the details of the Driver no 2:\n");
    printf("Enter the name of the driver:\n");
    scanf("%s", d2.name);
    printf("Enter the dlNo of the driver\n");
    scanf("%s", d2.dlNo);
    printf("Enter the route of the driver\n");
    scanf("%s", d2.route);
    printf("Enter the number of kilometers of the driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the details of the Driver no 3\n");
    printf("Enter the name of the driver:\n");
    scanf("%s", d3.name);
    printf("Enter the dlNo of the driver\n");
    scanf("%s", d3.dlNo);
    printf("Enter the route of the driver\n");
    scanf("%s", d3.route);
    printf("Enter the number of kilometers of the driver\n");
    scanf("%d", &d3.kms);

    printf("**************** Printing Information of the Drivers");
    printf("For Driver no 1:\nName is %s\n",d1.name);
    printf("DL number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("kilometer if %d\n", d1.kms);

    printf("For Driver no 2:\nName is %s\n",d2.name);
    printf("DL number is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("kilometer if %d\n", d2.kms);

    printf("For Driver no 3:\nName is %s\n",d3.name);
    printf("DL number is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("kilometer is %d\n", d3.kms);

    return 0;
}