#include <bits/stdc++.h>
using namespace std;
void print(char board[8][8])
{
    for(int i=0;i<8;++i)
    {
        for(int j=0;j<8;++j)
            cout<<board[i][j];
        cout<<endl;
    }
}
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        char board[8][8];
        for(int i=0;i<8;++i)
            for(int j=0;j<8;++j)
                board[i][j]='X';
        
        
        // king position
        board[0][0]='O';
        int k;
        cin>>k;
        k--;
        int i=0,j=1;
        while(k--)
        {
            board[i][j]='.';
            if(j==7)
            {
                i++;
                j=0;
            }
            else
            {
                j++;
            }
        }
        if(i==7)
            print(board);
        else
        {
            int k,l;
            for(k=7;k>i+1;--k)
            {
                for(l=7;l>=0;--l)
                    board[k][l]='.';
            }
            for(l=7;l>j;--l)
                board[k][l]='.';
            print(board);
        }
    }
	return 0;
}
