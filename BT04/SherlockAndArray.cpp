#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    int leng[T];
    for (int i = 0; i < T; i++)
    {
        cin >> leng[i];
        int arr[leng[i]];
        for (int j = 0; j < leng[i]; j++)
        {
            cin >> arr[j];
        }
        bool co = false;
        for (int j = 0; j < leng[i]; j++)
        {

            int left_sum = 0, right_sum = 0;
            for (int k = 0; k < j; k++) left_sum += arr[k];
            for (int k = j + 1; k < leng[i]; k++) right_sum += arr[k];
            if (left_sum == right_sum)
            {
                co = true;
                break;
            }
        }
        if (co) cout << "YES"; else cout << "NO";
    }
    return 0;
}
