#include <bits/stdc++.h>
void print(int n)
{
   for(int row = 0; row < n; row++) 
   {
       for(int col = 0; col < n; col++)
           std::cout<<"* ";
       std::cout<<'\n';
   }
}

int main()
{
    int input;
    std::cin>>input;
    print(input);
}
