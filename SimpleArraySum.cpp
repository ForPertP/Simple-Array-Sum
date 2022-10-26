#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */
int simpleArraySum(vector<int> ar)
{
    int result = 0;
    
    for (int n : ar)
    {
        result += n;
    }
    
    // lambda sample
    //for_each(ar.cbegin(), ar.cend(), [&](const int& n) { result += n; });
    
    return result;
}
