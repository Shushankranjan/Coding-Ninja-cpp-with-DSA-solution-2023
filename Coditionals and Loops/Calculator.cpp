/*
Wiite a program that performs the tasks of a simple
calculator. The program should first take an integer as
input and then based on that integer perform the task as
given below.
1. If the input is 1, then 2 integers are taken from the
user and their sum is printed

2.If the input is 2, then 2 integers are taken from the
user and their difference(1st number - 2nd number) is
printed

3. If the input is 3, then 2 integers are taken from the
user and their product is printed.

4.1f the input is 4, then 2 integers are taken from the
user and the quotient obtained (on dividing 1st
number by 2nd number) is printed.

5. If the input is 5, then 2 integers are taken from the
user and their remainder(1st number mod 2nd
number) is printed.

6.1f the input is 6, then the program exits.

7. For any other input, then print "Invalid Operation".
Note: Each answer in next line.

Input format:
Take integers as input, in accordance to the
description of the question.

Constraints:
The value of integers will always lie between
[1,10000]

Output format:
The output lines must be as prescribed in the
description of the question.

Sample Input:
3
1
2
4
4
2
1
3
2
7
6
*/

#include<bits/stdc++.h>
using namespace std;
int main() {

while(true){
	int num,a,b,result;
  cin>>num;
  switch (num) {
  case 1:
    cin >> a >> b;
    result = a + b;
    cout << result << endl;
    break;

  case 2:
    cin >> a >> b;
    result = a - b;
    cout << result << endl;
    break;

  case 3:
    cin >> a >> b;
    result = a * b;
    cout << result << endl;
    break;

  case 4:
    cin >> a >> b;
    result = a / b;
    cout << result << endl;
    break;

  case 5:
    cin >> a >> b;
    result = a % b;
    cout << result << endl;
    break;

  case 6:
    break;

  default:
    cout << "Invalid Operation";
  }
}
}