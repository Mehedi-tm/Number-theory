#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll List[128];
ll listSize;
void primeFactorize(ll n ) {
    ll array[n];
    for(int i=0; i<=n; i++) array[i]=1;
    array[0]=array[1]=0;
    for(int i=2; i*i<=n; i++)
    {
        if(array[i]==1)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                array[j]=0;
            }
        }
    }
    vector<ll>prime;
    for(int i=0; i<=n; i++)
    {
        if(array[i]==1)
            prime.push_back(i);
    }
    listSize = 0;
    ll sqrtN =sqrt(n); // find the sqrt of the number
    for( int i = 0; prime[i] <= sqrtN; i++ ) { // we check up to the sqrt
        if( n % prime[i] == 0 ) { // n is multiple of prime[i]
            // So, we continue dividing n by prime[i] as long as possible
            while( n % prime[i] == 0 ) {
                n /= prime[i]; // we have divided n by prime[i]
                List[listSize] = prime[i]; // added the ith prime in the list
                listSize++; // added a prime, so, size should be increased
            }
            // we can add some optimization by updating sqrtN here, since n
            // is decreased. think why it's important and how it can be added
        }
    }
    if( n > 1 ) {
        // n is greater than 1, so we are sure that this n is a prime
        List[listSize] = n; // added n (the prime) in the list
        listSize++; // increased the size of the list
    }
}
int main() {
    ll n;
    cin>>n;
    primeFactorize(n);
    for( int i = 0; i < listSize; i++ ) // traverse the List array
        printf("%d\n", List[i]);
    return 0;
}
