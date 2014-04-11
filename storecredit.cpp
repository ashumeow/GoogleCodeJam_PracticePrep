/*Problem

You receive a credit C at a local store and would like to buy two items. You first walk through the store and create a list L of all available items. From this list you would like to buy two items that add up to the entire value of the credit. The solution you provide will consist of the two integers indicating the positions of the items in your list (smaller number first). 

Input

The first line of input gives the number of cases, N. N test cases follow. For each test case there will be:
•One line containing the value C, the amount of credit you have at the store.
•One line containing the value I, the number of items in the store.
•One line containing a space separated list of I integers. Each integer P indicates the price of an item in the store.
•Each test case will have exactly one solution.

Output

For each test case, output one line containing "Case #x: " followed by the indices of the two items whose price adds up to the store credit. The lower index should be output first.

Limits

5 ≤ C ≤ 1000
 1 ≤ P ≤ 1000 

Small dataset

N = 10
 3 ≤ I ≤ 100 

Large dataset

N = 50
 3 ≤ I ≤ 2000 
*/

#include <stdio.h>  
#include <iostream.h>  
int item[2001];  
//#define SMALL  
#define LARGE //No.1  
int main()  
{  
#ifdef SMALL  
freopen("A-small-practice.in","r",stdin);//No.2  
freopen("A-small-practice.out","w",stdout);  
#endif  
#ifdef LARGE  
freopen("A-large-practice.in","r",stdin);  
freopen("A-large-practice.out","w",stdout);  
#endif  
int N;  
cin>>N;  
int i,j,k;  
for(i=0;i<N;i++)  
{  
int C;  
cin>>C;  
int I;  
cin>>I;  
for(j=0;j<I;j++)  
{  
cin>>item[j];  
}  
for(j=0;j<I-1;j++)  
for(k=j+1;k<I;k++)  
{  
if(C == item[j]+item[k])   
{  
cout<<"Case #"<<i+1<<": "<<j+1<<" "<<k+1<<endl;  
goto END;//No.3  
}  
}  
END:;     
}
return 0;  
}  
