//Шахмнатное поле-начало
#include<iostream>
using namespace std;

int main()
{
    char chess_figure[8][8];
    for (int i=0;i<8;++i)
        for  (int j=0;j<8;++j)
             chess_figure[i][j]=0;
    for (int i=0;i<8;++i)
    {
        chess_figure[1][i]='p';
        chess_figure[6][i]='P';
    }
    chess_figure[0][0]='r';
    chess_figure[0][7]='r';
    chess_figure[7][0]='R';
    chess_figure[7][7]='R';
    chess_figure[0][1]='n';
    chess_figure[0][6]='n';
    chess_figure[7][1]='N';
    chess_figure[7][6]='N';
    chess_figure[0][2]='b';
    chess_figure[0][5]='b';
    chess_figure[7][2]='B';
    chess_figure[7][5]='B';
    chess_figure[0][3]='q';
    chess_figure[7][3]='Q';
    chess_figure[0][4]='K';
    chess_figure[7][4]='K';
    for(int i=0;i<1;++i)
    {	

    	cout<<"          "<<"   a  b  c  d  e  f  g  h"<<"\n";
	}
    for(int i=0;i<8;++i){
            cout<<"           "<<8-i<<" ";
            for(int j=0;j<8;++j)
            {	
                    cout<<chess_figure[i][j]<<"  ";
            }
            cout<<"\n";}
    for(int j=0;j<1;++j){
    	cout<<"          "<<"   a  b  c  d  e  f  g  h"<<"\n";}

    	
return 0;
}

