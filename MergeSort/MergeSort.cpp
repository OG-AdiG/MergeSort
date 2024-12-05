#include "MergeSort.h"

using namespace std;

void MergeSort::Sort(std::vector<int>& tab) {

    if (tab.size() <= 1) return; 
    Divide(tab, 0, tab.size() - 1); 

}

void MergeSort::Divide(std::vector<int>& tab, int l, int r) { 


    if (l >= r) return;
        int mid = l + (r - l) / 2; 
        Divide(tab, l, mid);       
        Divide(tab, mid + 1, r);   
        Merge(tab, l, mid, r); 

}

void MergeSort::merge() {

}


