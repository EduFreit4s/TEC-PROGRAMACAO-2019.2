#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ordem(vector <float> o){
    sort(o.begin(), o.end());
    for(auto i : o) cout << i << '\t';
    cout << endl;
}

float mediana(vector <float> a){

    int index = (a.size()/2);

    if(a.size()%2 == 1){
        return a[index];
    }else{
        return ((a[index] + a[index-1])/2);
    }
}

float media(vector <float> b){

    float media = 0;

    for(auto i : b) media += i;

    return media = media/b.size();
}
