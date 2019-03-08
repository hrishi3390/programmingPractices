#include <iostream>
#include <stack>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char>braces;
    char stackTop;
    
    for(int i = 0 ;i<s.length() ; i++)
    {
        if(s[i]=='{' || s[i] == '[' || s[i] == '(')
        {
            braces.push(s[i]);
            continue;
        }
        
        if (braces.empty())
            return "NO";
        
        
            switch(s[i]){
                case '}':
                    stackTop = braces.top();
                    braces.pop();
                    if(stackTop != '{')
                        return "NO";
                    break;
                    
                case ')':
                    stackTop = braces.top();
                    braces.pop();
                    if(stackTop != '(')
                        return "NO";
                    break;
                    
                case ']':
                    stackTop = braces.top();
                    braces.pop();
                    if(stackTop != '[')
                        return "NO";
                    break;
                    
                    
                    
            }
        }
    if(braces.empty())
        return "YES";
    
    return "NO";
    
}
//}][}}(}][))]
//      [](){()}
//      ()
//      ({}([][]))[]()
//{)[](}]}]}))}(())(
// ([[)

int main()
{
    
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
//    for (int t_itr = 0; t_itr < t; t_itr++) {
//        string s;
//        getline(cin, s);
//        
//        string result = isBalanced(s);
//        
//        cout << result << "\n";
//    }
    
    string s = "}][}}(}][))]";
    string result = isBalanced(s);
    
            cout << result << "\n";
    
    return 0;
}
