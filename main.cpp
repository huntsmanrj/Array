//
//  main.cpp
//  SwapUsingPointer
//
//  Created by Rajesh Sah on 04/02/21.
//  Copyright © 2021 Rajesh Sah. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    
    cout<<"After Swapping : "<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
