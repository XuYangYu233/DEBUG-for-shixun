#include <stdio.h>
#include <string.h>

int main() 
{
    int arr[32];
    char str[500];
    int bits[32];
    char result[32];
    
    //scanf("%s", &arr[32]);
    char input;
    int j = 0, i;
    
    for(i = 0; i < 32; i++){
        arr[i] = 0;
    }
    
    while (scanf("%c", &input) != EOF) {
        char str_b[2] = "\0";
        str_b[0] = input;
        if (!strcmp(str_b, "\n")){
            break;
        }/*else if(j >= 32){
            break;
        }*/
        str[j] = (int)(input);
        j++;
    }
    
    for (i = 0; i < j; i++) {
        arr[(i+1) % 32] = arr[(i+1) % 32] + (int)(str[i]);
    }
    
    for (i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    
    for (i = 0; i < 32; i++) {
        printf("%c",result[i]);
    }
    return 0;
}

