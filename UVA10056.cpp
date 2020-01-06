#include<stdio.h>
#include<math.h>
int main()
{
    int n, S, I;
    float prob;
    scanf("%d", &S);
    for(int i=0;i<S;i++)
    {
        float result, r;
        scanf("%d%f%d",&n, &prob, &I);
        if(prob==0.0)
        {
            printf("0.0000\n");
            continue;
        }
        r = pow((1-prob),n);
        result = prob / (1 - r);
        if(I>1)
        {
            result *= pow((1-prob), (I-1));
        }
        printf("%.4f\n", result);
    }
}
