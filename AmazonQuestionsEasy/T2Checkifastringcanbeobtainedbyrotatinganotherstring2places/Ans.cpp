#include<bits/stdc++.h>
using namespace std;
bool match(string a, string b){
    bool success1 = true;
    bool success2 = true;
    int sizea = a.size();
    int sizeb = b.size();
    if(sizea!=sizeb){
        return false;
    }
    if(sizea==1){
        return (a[0]==b[0]);
    }
    if(sizea==2){
        if(a[0]==b[0] and a[1]==b[1]) return true;
        else return false;
    }
    //i we will take for string b going from 2 to sizeb-1 and then 0 to 2

    int i=2;
    int j=0;//for iterating string a
    while(i<sizea){
        if(a[j]!=b[i]){
            success1 = false;
            break;
        }
        j++;
        i++;
    }
    if(i==sizea){
        i = 0;
        while(i<2){
            if(a[j]!=b[i]){
                success1 = false;
                break;
            }
            j++;
	        i++;

        }
    }
    
    if(success1==true) return true;
    // for the case 2
    i = sizea-2;j = 0;
    while(i<sizea){
        if(a[j]!=b[i]){
            success2=false;
            break;
        }
        i++;
        j++;
    }
    if(i==sizea){
        i=0;
        while(i<sizea-2){
            if(a[j]!=b[i]){
                success2 = false;
                break;
            }
            i++;
        j++;
        }
        
    }
    if(success2==true){
        return true;
    }
    else{
        return false;
    }
    return true;
}
int main(){
    string a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        bool success = match(a,b);
        if(success == true){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
    }
}
