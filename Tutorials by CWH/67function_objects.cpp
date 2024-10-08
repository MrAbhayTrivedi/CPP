/*
Function Objects (Functors) In C++ STL 

What is a function object?

A function object is a function wrapped in a class so that it is available as an object.

That is, we can then use a function as an object. The question that might have been raised in your mind would be, why to substitute a function with an object? The answer is to make them all usable in an Object-Oriented Programming paradigm. Now what does that mean? We’ll try decoding the purpose of using functions as an object via a program.

*/


/*
Understanding below code: 

    Be sure to include the header file < functional> before you do anything else.
    And let’s create an array of some 6 elements.
    Suppose we want to sort this array in ascending order. So we’ll include a header file <algorithm> and write the syntax of the sort object which is,

    sort(address of first element, address of last element);

    And let’s just sort from the beginning to the 5th element.
    And run a loop to see the resultant array.
*/
#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr,arr+5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    /*
    Output of the above program is given below.  And you’ll notice that the last element remained untouched.  

    1
    2
    4
    54
    73
    7
    */

   cout<<"\n\n";

   /*
   But what if we wanted to sort the same array in descending order, since the sort function can default sort in ascending order only? So, here comes our saviour, functional objects. Our sort function also takes a third parameter which is a functor ( functional object).

    Let’s see how they work via the snippet below:
        Among all the different functors we have, the one to help this sort function to sort the array in descending order, is the greater<int>().
   */
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
