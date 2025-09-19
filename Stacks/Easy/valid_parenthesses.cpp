class Solution {
public:
    bool isValid(string s) {
            int n = s.size();
             stack<char>st;
             int i = 0;

            while ( i < n)  {

            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                i++;
                continue;
            }
            
            if(s[i] == ')' &&  !st.empty() && st.top() == '(' ){
                st.pop();
                 i++;
                 continue;
            }

             if(s[i] == '}' && !st.empty() && st.top() =='{'){
                st.pop();
                 i++;
                 continue;
            }

             if(s[i] == ']' && !st.empty() && st.top() == '['){
                st.pop();
                 i++;
                 continue;
            }

            else 
            return  false;
         }

         if(st.empty()){
                return true;
            }
            else {
                return false;
            }  
    }
};