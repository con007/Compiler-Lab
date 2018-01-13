#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 
int preprocess(int k, int Table[][2],int state)
{
    int trans0, trans1;
    for (state=0; state<k; ++state)
    {
        trans0 = state<<1;
        Table[state][0] = (trans0 < k)? trans0: trans0-k;
        trans1 = (state<<1) + 1;
        Table[state][1] = (trans1 < k)? trans1: trans1-k;
        return state;
    }
}
void isDivisibleUtil(int num, int* state, int Table[][2])
{
    if (num != 0)
    {
        isDivisibleUtil(num>>1, state, Table);
        *state = Table[*state][num&1];
    }
}
int isDivisible (int num, int k,int state)
{
    int (*Table)[2] = (int (*)[2])malloc(k*sizeof(*Table));
    preprocess(k, Table,state);

    isDivisibleUtil(num, &state, Table);
    return state;
}
int main()
{
    int num = 29; // Number to be divided
    int k = 3; // Divisor
 	int state;
    int remainder = isDivisible (num, k,state);
 	
    if (remainder == 0)
        printf("Divisible: Remainder is %d\n and state is %d", remainder,state);
    else
        printf("Not Divisible: Remainder is %d\n", remainder);
        
    cout<<"state="<<state;
 
 	getch();
    return 0;
}
