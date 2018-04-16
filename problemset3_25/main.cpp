#include <iostream>

using namespace std;

int main()
{
    int tam; //AQUI ESTABA EL ERROR , SIZE ES UNA PALABRA RESERVADA
    cin>>tam;
    int *nums= new int[tam];
    for(int i=0;i<tam;i++)
    {
        cin>>nums[i];
    }
    delete nums;
}
