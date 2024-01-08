//1.

#include <bits/stdc++.h>
using namespace std;
int main() {
while ('1' < '2')
cout << "In while loop" << endl;
}
// OUTPUT:-
// // Infinite Loop
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// In while loop
// .
// .
// .

//2.

 #include <bits/stdc++.h>
 using namespace std;
 int main( ) {
 int t = 10;
 while (t /= 2) {
 cout << "Hello" << endl;
 }
 }

// OUTPUT:-
// Hello
// Hello
// Hello

//3.

 #include <bits/stdc++.h>
 using namespace std;
 int main( ) {
 for (int x = 1; x * x <= 10; x++)
 cout << "In for loop" << endl;
 }

// OUTPUT:-
// In for loop
// In for loop
// In for loop

//4.

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}

// OUTPUT:-
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6

//5. WAP to print the sum of all the even digits of a given number.
 #include <iostream>
 using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        number /= 10;
    }

    cout << "The sum of even digits in the given number is: " << sum << endl;

    return 0;
}

// OUTPUT:-
// Enter a number: 4556
// The sum of even digits in the given number is: 10

// 6.WAP to print the sum of a given number and its reverse.
 #include <iostream>
 using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;
    int reverseNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }

    int sum = originalNumber + reverseNumber;

    cout << "The sum of " << originalNumber << " and its reverse (" << reverseNumber << ") is: " << sum << endl;

    return 0;
}

// OUTPUT:-
// Enter a number: 12
// The sum of 12 and its reverse (21) is: 33.

//7. Print the factorials of first ‘n’ numbers

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int n;
cin >> n;
int f = 1;
for (int i = 1; i <= n; i++) {
f *= i;
cout << f << endl;
}
}

// OUTPUT:-
// 5
// 1
// 2
// 6
// 24
// 120

//8.Print first ‘n’ fibonacci numbers.
 #include <bits/stdc++.h>
 using namespace std;
 int main( ) {
 int n;
 cin >> n;
 int f0 = 1, f1 = 1;
 cout << f0 << " " << f1 << " ";
 for (int i = 3; i <= n; i++) {
 int next = f0 + f1;
 cout << next << " ";
 f0 = f1;
 f1 = next;
 }
 }

//OUTPUT:-
// 5
// 1 1 2 3 5

//9.Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
//each digit of the number is equal to the number itself, then the number is called an Armstrong
//number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int i = 1; i <= 500; i++) {
int x = 0, temp = i;
while (temp > 0) {
int m = temp % 10;
x += m * m * m;
temp /= 10;
}
if (i == x) {
cout << i << endl;
}
}
}

// OUTPUT:-
// 1
// 153
// 370
// 371
// 407