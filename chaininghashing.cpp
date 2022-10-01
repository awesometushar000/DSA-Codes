#include <bits/stdc++.h>
using namespace std;

class Hash{
    public:
        int buc; 
        list<int> *table;
        Hash(int K); 

        void insert(int x);
        void deletee(int key);
        void search(int ele);

        int hash_function(int x){
            return (x % buc);
        }
};

Hash::Hash(int q){
    this->buc = q;
    table = new list<int>[buc];
}

//Time complexity: O(1+(n/m)) 
//Space complexity: O(1)
//n=number of keys, m=number of slots
void Hash::search(int ele){
    int idx = hash_function(ele);

    list<int>::iterator i = table[idx].begin();
    for (;i != table[idx].end(); i++){
        if (*i == ele)break;
    }

    bool found=false;

    if (i != table[idx].end()){
         cout<<"element found"<<endl;
         found=true;
    }

    if(!found){cout<<"element not found"<<endl;}
       
}

//Time complexity: O(1) 
//Space complexity: O(1)
void Hash::insert(int k){
    int idx = hash_function(k);
    table[idx].push_back(k);
}

//Time complexity: O(1+(n/m)) 
//Space complexity: O(1)
//n=number of keys, m=number of slots
void Hash::deletee(int k){
    int idx = hash_function(k);

    list<int>::iterator i= table[idx].begin();
    for (;i != table[idx].end(); i++){
        if (*i == k) break;
    }

    if (i != table[idx].end()){
        table[idx].erase(i);
    }
        
}

int main(){
    int n;cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++){cin >> a[i];}

    Hash hash(n + 2);
    for (int i = 0; i < n; i++){
        hash.insert(a[i]);
    }
        
    hash.deletee(1);
    hash.search(22);

    for (int i = 0; i < hash.buc; i++)
    {
        cout << i;
        for (auto j : hash.table[i]){
            cout << " -> " << j;
        } 
        cout << endl;
    }

    delete []a;

    return 0;
}
