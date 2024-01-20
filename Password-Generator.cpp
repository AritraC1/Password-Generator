// Password Generator

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    // Length of the password
    int n;
    cout<<"\nEnter the length of the password:";
    cin>>n;

    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int length = sizeof(alphanum) - 1;

    srand(time(0));

    cout<<"Generated Password:";

    for(int i = 0; i < n; i++) 
    {
        cout << alphanum[rand() % length];
    }

    return 0;
}