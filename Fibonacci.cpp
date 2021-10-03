 #include<iostream>
using namespace std;
int main()
{
    int a=-1,b=1,n,c;
    cout<<"Enter the limit\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}