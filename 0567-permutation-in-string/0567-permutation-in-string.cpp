class Solution {
public:
    bool checkequal(int a[26], int b[26]){
        for (int i=0; i<26; i++){
            if (a[i]!= b[i])
            return 0;
        }
        return 1;
     }
public:
    bool checkInclusion(string s1, string s2) {
        int count[26] = {0};
        for(int i=0; i< s1.length(); i++){
            int index = s1[i]- 'a';
            count[index]++;
        }
        int i=0;
        int size= s1.length();
        int count2[26] = {0};
        while(i < size && i<s2.length()){
        int index = s2[i]- 'a';
        count2[index]++;
        i++;
     }
        if( checkequal(count,count2))
        return 1;

        while(i<s2.length()){
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;

            char oldchar = s2[i -size];
            index = oldchar - 'a';
            count2[index]--;
            i++;
            
             if( checkequal(count,count2))
             return 1;
        }
        return 0;
 }
};