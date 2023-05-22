#include<iostream>
using namespace std;
int main(int argc, const char** argv) 
{
   
    int a;
    
    cin>>a;
    switch (a) 
    {
    case 1:
    std::cout << "one" << std::endl;
    break;
     case 2:
    std::cout << "two" << std::endl;
    break;
     case 3:
    std::cout << "three" << std::endl;
    break;
     case 4:
    std::cout << "four" << std::endl;
    break;
     case 5:
    std::cout << "five" << std::endl;
    break;
     default: 
    std::cout << "did not match" << std::endl;
    break;
    }
    return 0;
}