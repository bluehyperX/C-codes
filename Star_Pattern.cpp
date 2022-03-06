#include <iostream>
using namespace std;

int equi_triangle(int n) {
	for (int i=1;i<=n;i++)
	{
	    for (int j=i;j<n;j++)
	    {
	        cout<<" ";
	    }
	    for (int k=1;k<=i;k++)
	    {
	        cout<<"* ";
	    }
	    cout<<endl;
	}
	return 0;
}

int right_triangle1(int n){
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

int right_triangle2(int n){
    for (int i=1;i<=n;i++)
    {
        for(int k=i;k<=n;k++)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

int diamond(int n){
    for (int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int a=n-1;a>0;a--)
    {
        for (int j=a;j<=n-1;j++)
        {
            cout<<" ";
        }
        for (int k=1;k<=a;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

int empty_diamond(int n){
    for (int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i - 1;k++)
        {
            if(k == 1 || k == 2*i - 1) cout << "*";
            else cout << " ";
        }
        cout<<endl;
    }
    for (int a=n-1;a>0;a--)
    {
        for (int j=a;j<=n-1;j++)
        {
            cout<<" ";
        }
        for (int k=1;k<=2*a - 1;k++)
        {
            if(k == 1 || k == 2*a - 1) cout << "*";
            else cout << " ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    right_triangle1(n);
    equi_triangle(n);
    right_triangle2(n);
    diamond(n);
    empty_diamond(n);
    return 0;
}
