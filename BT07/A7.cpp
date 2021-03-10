#include <iostream>
#include <cstring>

using namespace std;

string cutstr(const char * str2, int n1, int temp)
{
    string a;
    for (int i = temp; i < temp + n1; i++)
    {
        a[i - temp] = str2[i];
    }
    return a;
}

int main(int argc, const char * argv[]) {
    const char *str1, *str2;
	cout << "Number of command-line arguments: " << argc << endl;

	str1 = argv[1];
	str2 = argv[2];
	int n1 = strlen(str1), n2 = strlen(str2);
	int temp = 0;int dem = 0;
	while(temp < n2 - n1 + 1) {
        const char* cut = cutstr(str2, n1, temp).c_str();
        if(strcmp(str1, cut) == 0) {
            dem++;
            temp += n1;
        }
        else temp++;
	}
	cout << dem;
	return 0;
}
