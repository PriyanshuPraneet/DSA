class Solution {
public:
    string generateTag(string caption) {
        vector<string> buffer;
        string bufferStr = "";
        for(char c : caption){
            if(c == ' '){
                if(!bufferStr.empty()) buffer.push_back(bufferStr);
                bufferStr = "";
            }
            else{
                bufferStr.push_back(tolower(c));
            }
        }
        if(!bufferStr.empty()) buffer.push_back(bufferStr);
        string ans = "#";
        if(buffer.empty()) return ans;
        bufferStr = buffer[0];
        bufferStr[0] = tolower(bufferStr[0]);
        ans+=bufferStr;
        for(int i=1; i<buffer.size(); i++){
            bufferStr = buffer[i];
            bufferStr[0] = toupper(bufferStr[0]);
            ans+=bufferStr;
        }
        return ans.substr(0,100);
    }
};