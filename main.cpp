#include <iostream>

using namespace std;

int PrimeMulRecursion(int arr[], int arrSize, int mul){
    int flag = 1;
         if(arrSize < 1){
            return mul;
         }
           for(int j = 2; j < (arr[arrSize] - 1); j++){
                 if(arr[arrSize] % j == 0){
                       flag = 0;
                       break;
                 }
            }
            if(flag == 1){
                   return PrimeMulRecursion(arr, arrSize - 1, mul * arr[arrSize]);
            }
            else if(flag == 0){
                return PrimeMulRecursion(arr, arrSize - 1, mul);
            }

}

int main()
{
    int arrSize, mul = 1;
    cout << "Enter the array size: ";
    cin >> arrSize;

    int arr[arrSize], result;
    cout << "Enter the array element: ";
    for(int i = 1; i <= arrSize; i++){
        cin >> arr[i];
    }

    result = PrimeMulRecursion(arr, arrSize, mul);
    cout << "Prime Number Multiplication: " << result << endl;
    return 0;
}
