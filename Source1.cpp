#include<stdio.h> 
long long i, j, ans;
long long x[20];
int z;
int main()
{
    for (i = 0; i <= ; i++) {
        scanf_s("%lld", &x[i]);
    }
    for (j = 0; j <= 4; j++) {
        ans = 1;
        z = x[j];
        if (x[j] == 0) {
            ans = 1;
        }
        else {
            for (i = 1; i <= z; i++) {
                ans = ans * i;
            }
        }
        x[j] = ans;
    }

    for (i = 0; i <= 4; i++)
    {
        printf("%lld\n", x[i]);
    }
}