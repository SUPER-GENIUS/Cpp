#include<iostream>
int main()
{
    int n,hill=0,valley=0;
    std::cin>>n;
    char step;
    while(n--)
{
    std::cin>>step;
    if(step=='U')
        ++hill;
    else if(step=='D')
        --hill ;
    if(hill==0 && step=='U'){
    ++valley;
    }
}
std::cout<<valley ;
}
