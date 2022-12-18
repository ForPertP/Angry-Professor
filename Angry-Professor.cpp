#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a)
{
    int count = 0;
    std::string result{"YES"};
    
    for (size_t i = 0; i < a.size(); ++i)
    {
        if (a[i] <= 0)
        {
            count++;
            if (count >= k)
            {
                result = "NO";
                break;
            }
        }        
    }

    return result;
}


string angryProfessor1(int k, vector<int> a)
{
    int count = 0;
    
    for_each (a.begin(), a.end(),
        [&count] (auto n)
        {
            if (n <= 0)
            {
                count++;
            }        
        }
    );
    
    return ((count >= k) ? "NO" : "YES");    
}


string angryProfessor2(int k, vector<int> a)
{
    std::sort(a.begin(), a.end());

    if (a[k-1] > 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
