#include <stdio.h>
int main(){

char letras;
scanf("%c", &letras);
switch (letras)
{
case 'a':
case 'e':
case 'i':
case 'o': 
case 'u':
printf("Você digitou uma vogal!!!\n");
break;
default:
printf("Você não digitou uma vogal!!!\n");

}
}
