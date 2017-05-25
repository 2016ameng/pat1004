//
//  main.cpp
//  pat1004
//
//  Created by 董依萌 on 2017/5/25.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
typedef struct {
    string name;
    string number;
    int result;
}infor;
int main() {
    int n,i,j,x;
    cin>>n;
    infor a[n],b;
    for(i=0;i<n;i++){
        cin>>a[i].name>>a[i].number>>a[i].result;
        if(a[i].name.length()>10||a[i].number.length()>10||a[i].result<0||a[i].result>100)
            exit(0);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].result>a[j].result){
                b=a[i];a[i]=a[j];a[j]=b;
            }
        }
    }
    cout<<a[n-1].name<<" "<<a[n-1].number<<endl;
    cout<<a[0].name<<" "<<a[0].number<<endl;
    return 0;
}
