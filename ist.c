// #include<stdio.h>

// int main(){
//     printf("hello world");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//   char myGrade = 'A';
//   printf("%c", myGrade);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char a = 65, b = 66, c = 67;
//   printf("%c\n", a);
//   printf("%c\n", b);
//   printf("%c", c);
//   return 0;
// }

// #include <stdio.h>
// int main (){
//     int age =22;
//     float pi = 3.14;
//     char hastag ='#'; 
//     printf("bhavuk\n");
//     printf("saluja\n");

//      return 0;
// }

// #include <stdio.h>
// int main(){
//     printf("cow is a animal\n");
//     printf("cow give milk\n");
//     printf("cow is pet animal\n");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     printf("nn\n\nnn\n");
//     printf("nn/n/nnn/n");
//     return 0;
// }
// variable

// #include<stdio.h>
// int main(){
//     int x,y;
//     x=5;
//     y=9;
//     printf("%d",x+y*6);
//     return 0;
// }
// updatio of variables

// #include <stdio.h>
// int main(){
//     int x=5;
//     printf("%d\n",x);
//     x=10;
//     printf("%d\n",x);
//     x=x+100;
//     printf("%d\n",x);
//     x=x-105;
//     printf("%d\n",x);
//     x=x*2;
//     printf("%d\n",x);
//     return 0;
// }

// arthmetics operators 
// #include <stdio.h>
// int main(){
//     int x=5;
//     int y=7;
//     printf("%d\n",x+y);
//     printf("%d\n",x-y);
//     printf("%d\n",x*y);
//     printf("%d\n",x/y);
//     printf("%d\n",x%y);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float x=3.14;
//     int y=3;
//     printf("%.2f %d\n",x,y);
//     return 0;

// }

// area of circle
// #include <stdio.h>
// int main(){
//     float radius=5;
//     float pi=3.14;
//     float area=pi*radius*radius;
//     printf("%f\n",area);
//     return 0;

// }

//  calculating si 
// # include <stdio.h>
// int main(){
//     float pricnciple  =100;
//     float rate= 10;
//     float time= 2;
//     float si= (pricnciple*rate*time)/100;
//     printf("%f/n",si);
//     return 0;
// }

// volume of cube

// #include<stdio.h>
// int main(){
//     float pi=3.14;
//     float r = 2;
//     float volume_of_cube=4/3*pi*r*r*r;
//     printf("%f",volume_of_cube);
//     return 0;
// }

//  taking input from user
// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter the number: ");
//     scanf("%d",&x);
//     printf("the square of the number is : ");
//     printf("%d",x*x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter the first number : ");
//     scanf("%d",&x);
//     int y;
//     printf("enter the second number : ");
//     scanf("%d",&y);
//     int sum;
//     sum=x+y;
//     printf("the sum of the two numbers is :%d",sum);
//     return 0;
// }
// odd even 
// #include <stdio.h>
// int main(){
//     int i;
//      printf("enter the number");
//         scanf("%d",&i);
//     if(i%2==0){
       
//         printf("the number is even number");
//     }
//     else{
//         printf("the number is odd number");
//     }
//     return 0;
// }

// reverse a number
// #include <stdio.h>
// int main(){
//     int n,reverse=0;
//     printf("enter the number n:");
//     scanf("%d",&n);
//     while(n!=0){
//         reverse=reverse*10;
//         reverse = reverse+ n%10;
//         n=n/10;
// }      
//     printf("the reverse number of the given number n is :%d",reverse);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,r;
//     printf("enter the number n:");
//     scanf("%d",&n);
//     printf("enter the second number r:");
//     scanf("%d",&r);
//      int sum = n +r;
//      printf("the sum of the two digit is %d ",sum);
//      return 0;
     

// }

// #include<stdio.h>
// int main(){
//     int n,r;
//     printf("enter the number n:");
//     scanf("%d",&n);
//     while (n>0 ){
//         r= n%10;
//         printf("%d",r);
//         n=n/10;
//     }
//     printf("the reverse number is :",r);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int x,y;
//     x = 2;
//     y =6;
//     int a = x+y;
//     int power = pow(x,y);
//     printf("the power of the number is :%d",power);
//     return 0;
    
// }

// #include<stdio.h>
// int main(){
    
//     printf("%d",1%2);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x,y;
//     printf("enter the value of x ");
//     scanf("%d",&x);
//     while (x>0)
//     {
//         y = x%10;
//         printf("%d",y);
//         x=x/10;

//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the no of rows");
//     scanf("%d",&n);
//     for(int i=n; i<=n; i++)
//     {
//         for(int j=0; j>n;j++) 
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;
// }


// // 
// // #include<stdio.h>
// // #include<math.h>
// // int main (){
// //     int a =5*2-3*2;
// //     printf("%d",a);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main (){
// //     int a;
// //     printf("enter the number :");
// //     scanf("%d",&a)
// //     if(a%2==0){
// //         printf("the number is divisible by 2");
// //         }
// //     else{
// //         printf("not divisible by 2");
// //     }
    
// //     return 0;
// // }

// #include<stdio.h>
// void loop();
// int main(){
// loop();
// return 0;
// }void loop();
// int n;
// printf("please enter the value of n");
// scanf("%d",&n);
// for(int i=n;i>=1;i--){
//     printf("%d",i);
// }

// #include <stdio.h>

// int main() {
//     int a,b,result=0;
//     printf("Enter a number:");
//     scanf("%d%d",&a,&b);
//     result=a+b;
//     printf("Result=%d",result);

//     return 0;
// }

// void printhello();
// void printgoodbye();

// int main(){
//     printhello();
//     printgoodbye();
//     return 0;
// }
// printhello{
//     printf("hello");
// }printgoodbye{
//     printf("goodbye");

    
// }

// #include <stdio.h>
// int sum (int a,int b);
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int s=sum(a,b);
//     printf("%d\n",s);
//     return 0;
// }
// int sum(int x,int y){
//     return x+y;
// }

// #include <stdio.h>
// int main(){
//     int a, count=0;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         if(a%i==0){
//             count++;
//         }
//     }
//         if (count==2){
//             printf("prime number");
//         }
//         else{
//             printf("not a prime number");
//         }
    
// }

// #include <stdio.h>
// void prime();
// int main(){
//     int a, count=0;
//     scanf("%d",&a);
//     void prime();
// }
// void prime(){
//     for (int i=1;i<=a;i++){
//         if (a%i==0){
//             count++;
//         }

//     }
//     if (count==2){
//         printf("prime");
//     }else{
//         printf("not prime");
//     }
// }

// #include<stdio.h>
// void oddeven(){
//     int a;
//     printf("enter the number");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("even number");
//     }else{
//         printf("odd number");
//     }
// }int main(){
//     oddeven();
//     return 0;
// }


// #include<stdio.h>
// void minimum();
//  int main(){
//     minimum();
//     return 0;
// }
// void minimum(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int m= (a<b) ? a:b;
//     printf("minmum of %d and %d is %d\n",a,b,m);
// }

// function to add two numbers
// #include<stdio.h>
// void add(int x ,int y);
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     add(a,b);
//     return 0;
// }
// void add(int a,int b){
//     int s=a+b;
//     printf("%d\n",s);

// }

// maxium of 2 number by functions
// #include<stdio.h>
// void max();
// int main(){
   
//     max();
//     return 0;
// } void max(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int m= (a>b) ? a:b;
//     printf ("%d\n",m);
// }
// check od and even by functions
// #include<stdio.h>
// void oe();
// int main(){
//     oe();
//     return 0;
// }
// void oe(){
//     int a;
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }
// }
// factorial without recursion
// #include<stdio.h>
// void fact();
// int main(){
//     fact();
//     return 0;
// }void fact(){
//     int a,count=1;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         count *=i;
//         }
//     printf("%d",count);
// }



