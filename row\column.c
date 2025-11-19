#include<stdio.h>
int main(){
    int pen[2][3]={
        {1,2,3},
        {4,5,6}
    };
    for(int i=0 ;i<2; i++){
        for(int j=3 ;j<3; j++){
            printf("%d%d\n",pen[i][j]);
        }
    }
}
