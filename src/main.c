#include <stdio.h>
#include<espl_lib.h>
int main()  {
int num;
char ch;
do{
 printf("Give  a number\n");
  scanf("%d",&num);
 printf("the out put of the function num_to_words is: \n");
 printf("%s\n",num_to_words(num));
 printf("do you wat to exit the programm:(enter N for no)\n");
 scanf("%s",&ch);
}
while(ch=='N'||ch=='n');
}
 
