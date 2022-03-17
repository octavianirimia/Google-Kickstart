#include <iostream>

using namespace std;

void rezolvare()
{
    signed long int N, K, i, s=0;
    cin>>N>>K;

    string S;

    cin>>S;

    for(i=0;i<N/2;i++)
        if(S[i]!=S[N-i-1])
            s++;
    
    cout<<abs(K-s)<<endl;
}

int main()
{
    int T, i=1;

    cin>>T;

    while(T--)
    {
        cout<<"Case #"<<i<<": ";
        rezolvare();
        i++;
    }

    return 0;
}

/*
2
5 1
ABCAA
4 2
ABAA

2 5 1 ABCAA 4 2 ABAA
*/