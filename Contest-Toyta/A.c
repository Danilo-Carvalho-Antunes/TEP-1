#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int n;
    int count_o = 0;
    int end = 0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s); 
    
    for(int i = 0 ; i < n ; i++){

        if( s[i] == 'x'){
            printf("No\n");
            end++;
            break;
        }
        if( s[i] == 'o'){
            count_o ++;
        }
    }
    if(count_o > 0 && end == 0 ){
        printf("Yes\n");
    }
    if(end == 0 && count_o == 0){
        printf("No\n");
    }
}
