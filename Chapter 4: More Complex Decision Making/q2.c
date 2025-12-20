// Convert RGB format color into CMYK format

#include <stdio.h>

int whiteFunc(int r, int g, int b){
    int x = r / 255;
    int y = g / 255;
    int z = b / 255;
    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    else{
        return z;
    }

}
int main(){
    int r,g,b;
    printf("Enter the RGB Colors: ");
    scanf("%d %d %d", &r, &g, &b);
    int white = whiteFunc(r,g,b);
    int black = 1 - white;
    int cyan = (white - (r/255))/255;
    int magenta = (white - (g/255))/255;
    int yellow = (white - (b/255))/255;
    printf("(%d %d %d %d)", cyan, magenta, yellow, black);
    return 0;
}