#include <stdio.h>

int main()
{
    char input;
    float kmnsTomiles = 0.621371;
    float inchesTofoot = 0.08333333;
    float cmsToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input charecter. q to quit the programe.\n  1. kms to miles.\n  2. inches to foot.\n  3. centimeters to inche.\n  4. pound to kilogrames.\n  5. inches to meter.\n");

        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting the programe....");
            goto end;
            break;
        case '1':
            printf("Enter quantity in terms of expected unit.\n");
            scanf("%f", &first);
            second = first * kmnsTomiles;
            printf("%.2f kilometer is equal to %.2f miles\n\n\n", first, second);
            break;
        case '2':
            printf("Enter quantity in terms of first unit.\n");
            scanf("%f", &first);
            second = first * inchesTofoot;
            printf("%f Inches is equal to %f Foot\n\n\n", first, second);
            break;
        case '3':
            printf("Enter quantity in terms of first unit.\n");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%f Cms is equal to %f Inches\n\n\n", first, second);
            break;
        case '4':
            printf("Enter quantity in terms of first unit.\n");
            scanf("%f", &first);
            second = first * poundTokgs;
            printf("%f Pounds is equal to Kgs %f \n\n\n", first, second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit.\n");
            scanf("%f", &first);
            second = first * inchesTometers;
            printf("%f inches is equal to %f meters \n\n\n", first, second);
            break;

        default:
            printf("In default now");
            break;
        }
    }
end:
    return 0;
}
