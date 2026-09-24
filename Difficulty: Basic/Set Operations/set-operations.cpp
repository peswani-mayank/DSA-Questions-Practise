set<int> setInsert(int arr[], int n) {
    // code here
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s;
    
}

void setDisplay(set<int>& s) {
    
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    // code here
}

    
void setErase(set<int>& s, int x) {
    // code here
    if(s.find(x)!=s.end()){ //iska mtlb ye h ki s.end() wo last element ko nhi show krta h wo last element s 
    //ek aage posiiton ko show krta h
    //Eg.: 1   2   4   7   8   9   END
    //to ye find krega pure m x ko agar array m x hoga to wo end 
    //tk nhi phuchega or agar x tk phuch gya to iska mtlb ye h ki x us array m nhi h 
        s.erase(x);
        cout<<"erased "<<x<<endl;
    }else{
        cout<<"not found"<<endl;
    }
}
