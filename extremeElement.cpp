// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cmath>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

double mean(const int N, vector<int> &A){
    double mid = N/2;
    return N%2 = 0? (A[mid] + A[mid - 1])/2 : A[mid];
    
}

vector<double>& deviaition(vector<int> &A){
    const int N = A.size();
    vector<double> results = new vector<double>(0);
    for(int i = 0; i < N; i++){
        results[i] = std::abs(A[i] - mean(N, A));
    }
    return results;
}

int findMax(vector<int> &A, int low, int high){
    if (low == high) {return A[low];}
    if ((high == low + 1) && A[low] >= A[high]) {return A[low];}
    if ((high == low + 1) && A[low] < A[high]) {return A[high];}
    int mid = (low + high)/2;   /*low + (high - low)/2;*/
    if ( A[mid] > A[mid + 1] && arr[mid] > arr[mid - 1]) {return A[mid];}
    if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1]){
        return findMaximum(arr, low, mid-1);
    }
    else:
        return findMaximum(arr, mid + 1, high);
}


int solution(vector<int> &A) {
    // write your code in C++11
    vector<double> results = deviaition(A);
    map<int, vector<double> > hash;
    int len = A.size();
    if(len == 0){return -1;}
    
    for(int i = 0; i < len; i++){
        hash.insert(std::pair<i, results[i]>);
    }
    
    int MaxDeviation = findMax(A,0,A.size()-1);
    for(auto& it : hash)
    {
        if(it.second == MaxDeviation)
        {return it.first;}
        break;
    }
    std::cout << "Did not find answer" << endl;
}


