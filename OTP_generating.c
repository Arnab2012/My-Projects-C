#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checking();
int n1, n2, n3, n4;
int otp[4];
int main()
{
    int flag = 1;
    char n[10], o[4];
    int s;
    while (flag == 1)
    {
        int count = 0;
        srand(time(0));
        n1 = rand() % 10;
        n2 = rand() % 10;
        n3 = rand() % 10;
        n4 = rand() % 10;
        printf("\nEnter your 10 digit phone number:\n");
        scanf("%s", &n);
        printf("To verify this code a 4 digit OTP will be sent on your phone number ******%c%c%c%c via SMS.\n", n[6], n[7], n[8], n[9]);
        for (int i = 5; i >= 1; i--) // Designing
        {
            for (int j = 5; j > (5 - i); j--)
                printf(" * ");
            printf("\n");
        }
        printf("Your OTP is %d%d%d%d", n1, n2, n3, n4);
        printf("\nTo verify this code please enter the OTP--->\n");
        scanf("%d", &s);
        for (int i = 3; i >= 0; i--)
        { // getting the otp from last
            otp[i] = s % 10;
            s = s / 10;
        }

        if (checking(1))
        {
            exit(1);
        }
    }
    return 0;
}
int checking()
{
    if (n4 == otp[3] && n3 == otp[2] && n2 == otp[1] && n1 == otp[0])
    {
        printf("Your code is verified!!!\n");
        return 1;
    }

    else
    {
        printf("You entered a wrong OTP!!!\n");
        return 0;
    }
}
