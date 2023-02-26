//  MY CODES




/*
#include<stdio.h>
int main()
{
    int a=50, b=10, c=5;


    if (b==50){
        printf("%d is equals to 50\n", b);
    } else{
        if (b>50){
        printf("%d is greater than 50\n", b);
    } else {
        printf("%d is less than 50\n  ", b);
    }
    }
}
*/


/*
#include<stdio.h>
int main()
{
    int num;
    printf("Input a Number: ");
    scanf("%d", &num);

    if (num >= 0){
        printf("%d is Positive\n", num);
    }
    else{
        printf("%d is Negative\n", num);
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Input 2 Numbers: ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("\n%d is Big Number\n", a);
    }
    else if(a<b){
        printf("\n%d is Big Number\n", b);
    }
    else{
        printf("\nBoth Number is Equal\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int num1, num2;
   printf("Input 2 Number:");
    scanf("%d %d", &num1, &num2);

    if(num1==num2){
        printf("\n Both Numbers are same\n");
    }else{
        printf("\n Both Numbers are not same\n");
    }
}
*/


/*
#include<stdio.h>
int main()
{
    int age = 21;
    printf("Age is %d", age);
}
*/
/*
#include<stdio.h>
int main()
{
    float pi = 3.1416;
    printf("The pi value is: %f", pi);
}
*/


/*
#include<stdio.h>
int main()
{
    char star = '*';
    printf("The star is: %c", star);
}
*/

/*
#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    printf("Your Age is: %d \n", age);
}
*/

/*
#include<stdio.h>
int main()
{
    int a, b;
    //sum = a+b;
    printf("Enter The Value of A:");
    scanf("%d", &a);

    printf("Enter The Value of B:");
    scanf("%d", &b);

    printf("\nThe Sum is %d\n", a+b);
}
*/



// PRACTICE 01.1: The Area of Square(Using INT Datatype)

/*
#include<stdio.h>
int main()
{
    int side;
    printf("Enter The Side:");
    scanf("%d", &side);

    printf("The Area is: %d\n", side*side);
}
*/

// PRACTICE 01.2: The Area of Square (Using Float Datatype)

/*
#include<stdio.h>
int main()
{
    float side;
    printf("Enter The Side:");
    scanf("%f", &side);

    printf("The Area is: %f\n", side*side);
}
*/

// PRACTICE 02: Area of A Circle

/*
#include<stdio.h>
int main()
{    float radius;
    printf("Enter The Radius:");
    scanf("%f", &radius);

    printf("The Area of A Circle is: %f", 3.1416*radius*radius);
}
*/

// POWER FUNCTION SOLVE
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int b,c;
    b = c = 2;

    int power = pow(b,c);
    printf("%d", power);
}
*/

//    int a = (int) 1.999999;
//    printf("%d \n", a);

// MATH PRACTICE: (4 MATHS)

/*
    int a = 5*2-2*3;
    int a = 5*2/2*3;
    int a = 5*(2/2)*3;
    int a = 5+2/2*3;

    printf("%d \n", a);
*/

//    printf("%d \n", 6<7);

//    printf("%d \n", 3>4 && 5<9);

//  ASSIGNMENT OPERATORS:

/*
#include<stdio.h>
int main()
{
    int a = 1;
    int b = 8;

//    a+=b;  //a=a+b
//    a-=b;  //a=a-b
//    a*=b;  //a=a*b
//    a/=b;  //a=a/b
//    a%=b;  //a=a%b


    printf("%d \n", a);
}
*/

// PRACTICE 05: Write a program to check if a number is divisible by 2 or not.(ODD & EVEN){Odd=0,Even=1}.

/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Your Number: ");
    scanf("%d", &x);
    printf("%d", x%2==0);
}
*/

/* PRACTICE 08: Print 1(true) or 0(false) for following statements:
            a. If it's Sunday & its snowing -> Print TRUE.
            b. If its Monday or Its raining -> Print TRUE.
            c. If a number is greater than 9 & less than 100 -> Print TRUE.
*/

// Answer of a

/*
#include<stdio.h>
int main()
{
    int isSunday, isSnowing;

    //isSunday = 1, isSnowing = 1;
    isSunday = 1, isSnowing = 0;


    //printf("%d \n", isSunday && isSnowing);
    printf("%d \n", isSunday || isSnowing);
}
*/

/* Answer of b
#include<stdio.h>
int main()
{
    int isMonday = 0, isRaining = 1;

    printf("%d \n", isMonday || isRaining);
}
*/

// Answer of c
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter 2 digit Number: ");
    scanf("%d", &x);
    printf("%d \n", x>=9 && x<=100);
}
*/

// Homework Set, 01: Write a program to print the avarage of 3 numbers:
/*
#include<stdio.h>
int main()
{
    float num1, num2, num3;
    printf("Write down the 3 Numbers:");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("The avarage is %f \n", (num1+num2+num3)/3);
}
*/

// IF-ELSE:
/*
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age>18)
        printf("Adult");
    else
        printf("Not Adult");

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age>18){
        printf("Adult\nHe or She can drive\n");
    } else {
        printf("Not Adult\nHe or She can not drive\n");
    }
    printf("Thank You!");
}
*/
/*
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Adult \n");
    }
    else if(age>13 && age<18) {
        printf("Teenager \n");
    }
    else {
        printf("Child \n");
    }
}
*/
/*
    int age;
    printf("Enter age:"); // Using Ternary Operator
    scanf("%d", &age);

    age>= 18 ? printf("adult \n") : printf("not adult \n");
*/

/*
#include<stdio.h>
int main()
{
    int day;
    printf("Enter day (1-7): ");
    scanf("%d", &day);

    switch (day){
    case 1 : printf("Saturday \n");
            break;
    case 2 : printf("Sunday \n");
            break;
    case 3 : printf("Monday \n");
            break;
    case 4 : printf("Tuesday \n");
            break;
    case 5 : printf("Wednesday \n");
            break;
    case 6 : printf("Thursday \n");
            break;
    case 7 : printf("Friday \n");
            break;
    default : printf("Invalid day \n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    char name;
    printf("Enter The First Letter of Name: ");
    scanf("%c", &name);

    switch (name){
    case 'A' : printf("Avik \n");
    break;
    case 'V' : printf("AB de Villiers \n");
    break;
    case 'L' : printf("Lionel Messi \n");
    break;
    case 'D' : printf("David Miller \n");
    break;
    default : printf("Not Found \n");
    }
}
*/



// Write a program to check if a student passed or failed.(marks>30 is PASS or marks<= 30 is FAIL)
/*
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks > 30 && marks <=100){
        printf("Pass!");
    } else if (marks <= 30){
        printf("Fail!");
    } else{
        printf("Your Marks is Wrong");
    }
}
*/
//    marks <= 30 ? printf("FAIL \n") : printf("PASS \n");



//NESTED IF-ELSE:
/*
#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    if (number >= 0){
        printf("Positive \n");
        if(number%2 == 0){
            printf("Even! \n");
        }else{
            printf("Odd! \n");
        }
    } else{
        printf("Negative \n");
    }
}
*/

//  CALCULATOR BY USING IF-ELSE:
/*
#include<stdio.h>
int main()
{
    int x,y;
    char operate;

    printf("Enter The 1st Number: ");
    scanf("%d", &x);

    printf("Enter The Operator: ");
    scanf(" %c", &operate);      // (You can use there %s)

    printf("Enter the 2nd Number: ");
    scanf("%d", &y);


    if (operate=='+'){
        printf("%d + %d = %d", x, y, x+y);
    }
    else if (operate=='-'){
        printf("%d - %d = %d", x, y, x-y);
    }
    else if (operate=='*'){
        printf("%d * %d = %d", x, y, x*y);
    }
    else if (operate=='/'){
        printf("%d / %d = %d", x, y, x/y);
    }
    else if (operate=='%'){
        printf("%d % %d = %d", x, y, x%y);
    }
    else {
        printf("Invalid Operator!");
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks<30) {
        printf("C");
    }else if ((marks>=30) && (marks<70)) {
        printf("B");
    }else if ((marks>=70) && (marks<90)){
        printf("A");
    }else if ((marks>=90) && (marks<=100)){
        printf("A+");
    }else {
        printf("Your Mark is Wrong");
    }
}
*/


// PROBLEM: Write a program to find if a chracter entered by user id upper case or not.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf(" %c", &ch);

    if (ch>='a' && ch<='z'){
        printf("Lower Case!");
    }else if (ch>='A' && ch<='Z'){
        printf("Upper Case!");
    }else{
        printf("Not a Alphabet");
    }
}
*/


// FOR LOOP:

/*
#include<stdio.h>
int main()
{    for(int i=1; i<=100; i=i+1){
        printf("I Love Ann \n");
    }
}
*/

/*
#include<stdio.h>
int main()
{
    for(int i=1; i<=100; i=i+1){
        printf("%d\n", i);
    }
}
*/
/*    for(int i=1; i<=10; i=i+1){
        printf("%d\n", i);
    }
*/
/*    for(int i=10; i>=1; i=i-1){
        printf("%d\n", i);
    }
*/


// PRACTICE: PRINT THE NUMBERS FROM 0 TO 10?
/*
#include<stdio.h>
int main()
{
    for (int i=0; i<=10; i++){
        printf("%d\n", i);
    }
}
*/
// INCREMENT & DECREMENT OPERATOR:

    //int i=1;
    //printf("%d \n", i++);
    //printf("%d \n", i);
    //printf("%d \n", ++i);
    //printf("%d\n", i);


    //printf("%d \n", i--);
    //printf("%d \n", i);
    //printf("%d \n", --i);
    //printf("%d \n", i);



// NESTED FOR LOOP:
/*
#include<stdio.h>
int main()
{
    for(float i=1.0; i<=5.0; i++){
        printf("%f\n", i);
    }
}
*/
/*#include<stdio.h>
int main()
{
    for(char ch='a'; ch<='z'; ch++){
        printf("%c\n", ch);
    }
}
*/
/*#include<stdio.h>
int main()
{
    for(int i=1;i<=50;i++){
        printf("Hello World\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    for(float i=1.0; i<=5.0; i++){
        printf("%f\n", i);
    }
}
*/


/*
#include<stdio.h>
int main()
{
    for(char ch='a'; ch<='z'; ch++){
        printf("%c\n", ch);
    }
}
*/


/*
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a+b>a-b && a+b>a*b) || (a+b>a*b && a+b>a-b)){
        printf("%d", a+b);
    } else if ((a*b>a-b && a*b>a+b) || (a*b>a+b && a*b>a-b)){
        printf("%d", a*b);
    } else{
        printf("%d", a-b);
    }

}
*/

/*
#include<stdio.h>
int main ()

{
    float s,t, v;
    scanf("%f %f",&s,&t);
    v=(s/(t*60));
    printf("%f",v);



    return 0;
}
*/


// WHILE LOOP:

/*
#include<stdio.h>
int main()
{
    int i=0;
    while(i<=5){
        printf("Hello World!\n");
        i++;
    }
}
*/

// Print the numbers from 0 to n, if n is given by user.

/*
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        printf("%d\n", i);
    }
}
//Using While Loop:
#include<stdio.h>
int main()
{
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
}
*/

// DO WHILE LOOP:

/*
#include<stdio.h>
int main()
{
    int i=1;
    do {
        printf("%d\n", i);
        i++;
    } while(i<=5);
}
*/

/*
#include<stdio.h>
int main()
{
    int i=5;
    do {
        printf("%d\n", i);
        i--;
    } while(i>=1);
}
*/


// PRACTICE: Print the sum of first n Natural Numbers:

/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);

    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i; //sum += i
    }

    printf("Sum is %d", sum);
}
*/


/*
#include<stdio.h>

int main()
{
   int num1, num2;
   char sign;

   printf("Please enter the number:");
   scanf("%d", &num1);
   printf("Please enter the another number:");
   scanf("%d", &num2);

   int value;

   value=num1+num2;
   sign = '+';

   printf("%d %c %d = %d\n", num1, sign, num2, value);

    value=num1-num2;
    sign = '-';

    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value=num1*num2;
    sign = '*';

    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value=num1/num2;
    sign = '/';

    printf("%d %c %d = %d", num1, sign, num2, value);

}
*/

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
}
*/

//BREAK:


/*
#include<stdio.h>
int main()
{
    int n;
    do{
        printf("Enter Number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%2!=0){
            break;
        }
    }while(1);
}
*/
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    //printf("End");
}
*/

//CONTINUE:


/*
#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        if(i==3){
            continue;
        }
        printf("%d\n", i);
    }
}
*/

// Print all numbers from 1 to 10 expect for 6:
/*
#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
}
*/

// Print all the ODD numbers from 5 to 50:
/*
#include<stdio.h>
int main()
{
    for(int i=5; i<=50; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}
*/
// Print all the EVEN numbers from 5 to 50:

#include<stdio.h>
int main()
{
    for(int i=5; i<=50; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}

// Print the factorial of a number n:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("%d",fact);
}


// Print reverse of the table for a number n:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    for(int i=10; i>=1,i--){
        printf("%d\n", n*i);
    }
}

// FUNCTIONS:



//ARRAYS:


#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter Phy:");
    scanf("%d", &marks[0]);

    printf("Enter Chem:");
    scanf("%d", &marks[1]);

    printf("Enter Math:");
    scanf("%d", &marks[2]);

    printf("Physics = %d, Chemistry = %d, Math = %d\n", marks[0], marks[1], marks[2]);
}


//Write a program to enter price of 3 items & print their final cost with tax:

#include<stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 prices:");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total Price of 1: %f\n", price[0]+(0.18*price[0]));
    printf("Total Price of 2: %f\n", price[1]+(0.18*price[1]));
    printf("Total Price of 3: %f\n", price[2]+(0.18*price[2]));

}



// If there word is LOWERCASE or UPPERCASE then print UPPERCASE and LOWERCASE:

#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c>='a' && c<='z') {
        printf("%c\n", c-('a'-'A'));
    }else{
        printf("%c\n", c+('a'-'A'));
    }
}

// Check the first digit is Even or Odd:

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int first_digit=num/1000;
    if(first_digit%2==0){
    printf("EVEN\n");
    }else{
    printf("ODD\n");
    }
}

// Write a code which will be convert a number into years, months and days:

#include<stdio.h>
int main()
{
    long long int n,years,months,days;
    scanf("%lld",&n);
    years=n/365;
    n=n%365;
    months=n/30;
    n=n%30;
    days=n;
    printf("%lld years\n%lld months\n%lld days\n", years,months,days);
}

// DETERMINANT:

#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d", &a,&b);
    scanf("%d%d", &c,&d);
    int determinant=a*d-b*c;
    printf("%d\n",determinant);
}

// DIVISORS Problem:

#include<stdio.h>
int main()
{
	int x, i;
	scanf("%d", &x);
	for(i=1; i<=x; i++) {
		if((x%i)==0){
			printf("%d", i);
			printf("\n");
		}
	}
}

// Integer Inputs and Then Print Reverse of that input with space:

#include<stdio.h>
int main()
{
    int t, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        while (n != 0) {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
}

// C program to sum odd numbers:

#include <stdio.h>

int main() {
    int t, x, y, i, sum;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &x, &y);
        sum = 0;
        if (x % 2 == 0) x++;
        if (y % 2 == 0) y--;
        for (i = x + 2; i < y; i += 2) {
            sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}

//Print the table of n. Here n is a integer which user will input: (This is also used for any numbers table)

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i<=n*10; i=i+n){
        printf("%d\n", i);
    }
}


