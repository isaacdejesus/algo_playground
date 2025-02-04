#include<bits/stdc++.h>
void print(int n);
int main()
{
    int input;
    std::cin>>input;
    print(input);
}
void print(int n)
{
    for(int row = 1; row <= n; row ++)
    {
        for(int col = 1; col <= row;  col++)
            std::cout<<col<<" ";
        std::cout<<'\n';
    }
}
