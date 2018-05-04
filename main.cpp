#include <iostream>

using namespace std;

int fibonacci(int n)
{long long int a=1,b=1;
    for(int i=0;i<n/2+1;i++)
    {
        cout<<a<<" "<<b<" ";
        a=a+b;
        b=a+b;
    }
}

int main()
{int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
