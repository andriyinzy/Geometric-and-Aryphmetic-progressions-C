#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

void Aryphmetic_progression(ll start,ll end,ll step,ll sum)
{
    printf("Enter start end and step\n");
    scanf("%lld %lld %lld",&start, &end, &step);
    ll x = start;
    int switcher = (step>0)? 1:-1;
    do
    {
        printf("%lld ",x);
        sum+=x;
        x+=step;
    }
    while(switcher*x<=switcher*end);
    printf("\n");
    printf("%lld\n", sum);
} 

void Geometric_progression(ll start,ll end,ll step,ll sum)
{
    printf("Enter start end and step\n");
    scanf("%lld %lld %lld",&start, &end, &step);
    ll x = start;
    while(x <= end && x>=0-end)
    {
        printf("%lld ",x);
        sum+=x; 
        x*=step;
    }
    printf("\n");
    printf("%lld\n", sum);
}

int main(){
    Aryphmetic_progression(0,0,0,0);
    Geometric_progression(0,0,0,0);
    return 0;
}