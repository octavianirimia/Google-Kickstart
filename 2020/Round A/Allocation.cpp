#include <iostream>
#include <algorithm>

using namespace std;

void rezolvare(int x)
{
    long int N, B,i,nr=0;
    cin>>N>>B;

    long int *A;
    A=new long int[N];

    for(i=0;i<N;i++)
        cin>>A[i];
    
    sort(A, A+N);

    for(i=0;i<N && B>0;i++)
        if(B>=A[i])
        {
            B-=A[i];
            nr++;
        }
    
    cout<<nr<<endl;
}

int main()
{
    int T,i=1;
    cin>>T;

    while(T--)
    {
        cout<<"Case #"<<i<<": ";
        rezolvare(i);
        i++;
    }

    return 0;
}

/*
3
4 100
20 90 40 90
4 50
30 30 10 10
3 300
999 999 999

3 4 100 20 90 40 90 4 50 30 30 10 10 3 300 999 999 999

Case #1: 2
Case #2: 3
Case #3: 0
*/