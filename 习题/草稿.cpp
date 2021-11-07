#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int lbwnb[7];
int yyds[7];
int edg[7];
int main()
{
    int n;
    scanf("%d",&n);
    int skt[n];
    memset(skt,0,sizeof(skt));
    int i = 0;
    for(int b = 0;b<7;b++){
        scanf("%d",&yyds[b]);
    }    
    do{
        int a;
        for(a = 0;a<7;a++){
            scanf("%d",&lbwnb[a]);
            for(int c= 0;c<7;c++){
                if(lbwnb[a]==yyds[c]){
                    skt[i]++;
                }
            }
        }
        i++;
    }while(i<n);
    for(int d=0;d<n;d++){
        switch(skt[d]){
            case 1:
            edg[6]++;
            break;
            case 2:
            edg[5]++;
            break;
            case 3:
            edg[4]++;
            break;
            case 4:
            edg[3]++;
            break;
            case 5:
            edg[2]++;
            break;
            case 6:
            edg[1]++;
            break;
            case 7:
            edg[0]++;
            break;
        }
    }
    for(int e=0;e<6;e++){
        printf("%d ",edg[e]);
    }
    printf("%d",edg[6]);
    return 0;
}
