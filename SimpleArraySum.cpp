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
