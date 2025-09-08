// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    char x;
cin>>x;
if(x>='A'&&x<='Z')
{
cout<<(char)(x+32);
}
else
{
cout<<(char)(x-32);
}
    
    return 0;
}