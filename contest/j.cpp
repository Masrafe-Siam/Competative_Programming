#include<iostream>
using namespace std;
int main()
{
    int T;
    int N,K;
    int arr[N];
    int time;
    int sum = 0, maxE;
    cin>>T;
    while(T>0){
        time = 0, maxE = 0;
        cin>>N>>K;
        for(int i=0; i<N; i++){
            cin>>arr[i];
            if (arr[i] > arr[i-1])
            {
                maxE = arr[i];
            } else if(arr[i] < arr[i-1]){
                maxE = arr[i - 1];
            }
        }
        for(int i=0; i<N; i++){
             time += arr[i];
        }
        sum++;
        time += maxE;
        cout << "Case "<< sum << ": " << time<<endl;
        T--;
    }
    return 0;
}