int simpleArraySum(vector<int> ar)
{
    int result = 0;
    
    for (int n : ar)
    {
        result += n;
    }
    
    // lambda sample
    //for_each(ar.begin(), ar.end(), [&](const int& n) { result += n; });
    
    return result;
}
