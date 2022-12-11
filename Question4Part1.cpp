#include <iostream>
using namespace std;
 
void markAverage(float ); 
 
int main()
{
    float mark, sum,  markAverage;
    markAverage = sum / mark;
    int total_sub=7; 
    cout << "The Number of Total Subjects is  " <<total_sub <<endl;

    int array [total_sub];
    for(int i=0; i<total_sub; i++)

{
    cout<<"Enter Subject "<<i+1<<" Marks: ";
    cin>>array[i];

    sum+=array[i];
}
cout<<"The sum of the marks entered is "<<sum<<endl;

markAverage=sum/total_sub;

cout<<"The Average of "<<total_sub<<" subjects is = "<<markAverage<<endl;

}


