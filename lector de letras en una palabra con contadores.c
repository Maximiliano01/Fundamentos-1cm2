#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  
int main(int argc, char** argv) {
    printf("escriba una palabra (maximo 30 letras sin ñ)");
    char cadena[30];
    scanf("%s",&cadena);
    //introduje todas las letras por que no me dejaba con la coma :( 
    int a=0 ;int b=0 ;int c=0 ;int d=0 ;int e=0 ;int f=0 ;int g=0 ;int h=0 ;int i=0 ;int j=0 ;int k=0 ;int l=0 ;int m=0 ;int n=0 ;int o=0 ;int p=0 ;int q=0 ;int r=0 ;int s=0 ;int t=0 ;int u=0 ;int v=0 ;int w=0 ;int x=0 ;int y=0 ;int z=0 ;
    for(int nm=0;nm<30;nm++){
        switch(cadena [nm]){
        case 'a' : a++;break;
        case 'b' : b++;break;
        case 'c' : c++;break;
        case 'd' : d++;break;
        case 'e' : e++;break;
        case 'f' : f++;break;
        case 'g' : g++;break;
        case 'h' : h++;break;
        case 'i' : i++;break;
        case 'j' : j++;break;
        case 'k' : k++;break;
        case 'l' : l++;break;
        case 'm' : m++;break;
        case 'n' : n++;break;
        case 'o' : o++;break;
        case 'p' : p++;break;
        case 'q' : q++;break;
        case 'r' : r++;break;
        case 's' : s++;break;
        case 't' : t++;break;
        case 'u' : u++;break;
        case 'v' : v++;break;
        case 'w' : w++;break;
        case 'x' : x++;break;
        case 'y' : y++;break;
        case 'z' : z++;break;
        }
    }
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%d\n",f);
    printf("g=%d\n",g);
    printf("h=%d\n",h);
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    printf("k=%d\n",k);
    printf("l=%d\n",l);
    printf("m=%d\n",m);
    printf("n=%d\n",n);
    printf("o=%d\n",o);
    printf("p=%d\n",p);
    printf("q=%d\n",q);
    printf("r=%d\n",r);
    printf("s=%d\n",s);
    printf("t=%d\n",t);
    printf("u=%d\n",u);
    printf("v=%d\n",v);
    printf("w=%d\n",w);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
    

    return (EXIT_SUCCESS);
}