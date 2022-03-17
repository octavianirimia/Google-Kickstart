#include <iostream>

using namespace std;

long int even_digits(long long int N)
{
    while(N)
    {
        if(N%10%2)
            return 1;
        N/=10;
    }

    return 0;
}

int main()
{
    int T, b, i=1;
    long long int N, cN, nr1, nr2;

    cin>>T;

    while(T--)
    {
        cin>>N;

        cN=N;
        b=0;
        nr1=0;
        nr2=0;

        while(!b)
        {
            if(even_digits(N))
            {
                N++;
                nr1++;
            }  
            else
                b=1;

            if(even_digits(cN))
            {    
                cN--;
                nr2++;
            }
            else
                b=1;
        }

        if(nr1<=nr2)
            cout<<"Case #"<<i<<": "<<nr1<<endl;
        else
            cout<<"Case #"<<i<<": "<<nr2<<endl;
        
        i++;
    }

    return 0;
}

/*
4
42
11
1
2018

4 42 11 1 2018

Case #1: 0
Case #2: 3
Case #3: 1
Case #4: 2

*/