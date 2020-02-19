#include <iostream>
#include <cstring>
using namespace std;
bool permutation(char *s1,char *s2){
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    if(l1 != l2){
        return false;
    }
     int frequency[26] = {0};
        for(int i = 0; i < l1; i++){
            frequency[s1[i] - 'a']++;
        }
        for(int i = 0; i < l2; i++){
            frequency[s2[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(frequency[i] != 0){
                return false;
            }
        }
}
int main(){
    char s1[100],s2[100];
    cin>>s1>>s2;
    if(permutation(s1,s2)){
        cout<<"Yes strings are in permutation"<<endl;
    }
    else{
        cout<<"No string are not in permutation"<<endl;
    }

}
