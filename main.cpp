#include <iostream>
#include <vector> //Include vector header file.
using namespace std;

void functionname(vector<int> &);

int main()
{
    vector<int> vec; //Initialize vector. Can be initialized with any datatype. Last element 'vec' is variable name.  
    // vec[0] = 10; Declaring this now would be a syntax error. First, declare size.
    // cout << vec.size() << endl; Also an error, size must be set first. No default size.

    vec.push_back(10); //Push value of 10 to the back of the vector.
    vec.push_back(2); //Push value of 2 to the back of the vector. 

    cout << vec[0] << endl; //Print vector index 0. Equals 10.
    // cout << vec[3] << endl; Index does not exist, error.

    vector<int> vec2(10); //Initializes vector with 10 elements. All elements default to 0.
    vector<int> vec3(10, -1); //Initializes vector with 10 elements. All elements are set to -1.
    vector<int> vec4(vec); //Initializes vector from vector 'vec'.
    vector<int> vec5{1,2,3,4,5}; //Intializes vector with set elements. Note the difference in brackets. 

    vector<int>::iterator it;
    for(it = vec5.begin(); it != vec5.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;

    it = vec5.begin(); // Set iterator to beginning of vector.
    vec5.insert(it, 100); // Replace index of iterator with 100.

    cout << vec5[0] << endl;
}

void functionname(vector<int> &vec)
{
    
}