#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    //fgets(s,100,stdin);
    std::cout << s << std::endl;
    cout<<strlen(s);
    return 0;
}