#include <iostream>
#include <vector>

//randoming 0 - 1
float randomto(int i)
{
    int x = 79 + i, alpha = 2417, m = 13;
    int M = 1000;
    int r = ((alpha * x + m) % M);
    float result = r;
    return result / M;
}



int main()
{
    float n = 0.3;
    std::vector<float> X;
    int i = 0;
    do
    {
        auto a = randomto(i);
        
        X.push_back(a);
        if (a < n) //when finding number < n stop generating rand numbers
        {
            break;
        }
        
        i++;

    } while (true);

    for (int k = 0; k < X.size(); k++) //write our array
    {
        std::cout <<"X("<<k+1<< ") = " << X[k] << std::endl;
    }

    system("pause");
}
