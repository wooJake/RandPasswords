#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    
    int loop = 0;
    int numLoops = 1024;
    
    char chars[81] = {
        'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
        '0','1','2','3','4','5','6','7','8','9',
        '!','?','@','#','$','%','^','&','*','(',')','-','_','+','=','<','>',',','.'};
    
    while(loop < numLoops){
        
        for(int i = 0; i < 12; ++ i){
            
            printf("%c", chars[rand() % 81]);
        }
        
        ++loop;
        printf("\n");
    }
    return 0;
}
