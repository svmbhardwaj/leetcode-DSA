class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(string i:sentences){
            int words = 1;
            for(char c:i){
                if(c ==' ') words++;

            }
            maxi = max(maxi, words);
        }
        return maxi;
    }
};