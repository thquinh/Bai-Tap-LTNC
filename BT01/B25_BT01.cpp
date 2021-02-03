#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int somax(int a,int b,int c)
{
    int max=a;
    if(a>b && a>c) return max;//*_2
    else if(a<b)//_1
    {
        max=b;
        if(max>c) return max;//_2
        else return c;
    }

}
int somin(int a,int b,int c)
{
    int min=a;
    if(a<b && a<c) return min;//*_4
    else if(a>b)//_3
    {
        min=b;
        if(min<c) return min;//_4
        else return c;
    }
}
int somid(int a,int b,int c)
{

    if(a>b&&a<c) return a;
    else if(a>b&&a>c) {//*_6
        return max(b,c);
    }
    else if(a<b&&a<c)//_6
    {
        return min(b,c);
    }

}//tuong dung 6 lan r ??? t đếm số dấu so sánh
//no lam so lan so sanh thoi
//kieu neu cai nay k dc thi chuyen sang cai kia thi chi tinh so lan so sanh cua cai kia thoi
//hom day no bao the :")))
// nhưng mà cũng k hiểu : )
// ke di anh thang cx kbt lam :))
// the dbl mạnh hơn cả a Thắng à :)
//kbt nma ca chieu nay no hỏi bài t :))) mang tieng giải 3 toán quốc gia
//no lam the cho cac ban chu quan đấy
//:)))) lao nhỉ
// chieu no gui t code cua no xong no con k hieu tsao no viet the ma :)) xong t phai di go loi cho nó :)
// nó bị ngáo rồi
// để tìm bài đấy cho
//nhanh còn đi ngủ
// mẹ t lên đấm giờ


int main()
{
    int a[5];
    int dem=0;
    for(int i=0;i<5;i++)
    {
        cin>> a[i];
    }
    int vt=a[0];
    int v[3];
    int t[3];
    int i=0;
    int j=0;
    for(int h=1;h<3;h++){
        if(vt>a[i])
        {
            dem++;
            v[++i]=a[h];
        }
        else t[++j]=a[h];


    }
    if(dem>=2)
    {
        if(dem ==3) cout << somid(a[1],a[2],a[3]);
        else
        {
            if(vt>a[4]) cout << somax(v[0],v[1],a[4]);
            else cout << vt;

        }
    }
    else
    {
        if(dem==0) cout<< somid(a[1],a[2],a[3]);
        else
        {
            if(vt<a[4]) cout << somin(t[0],t[1],a[4]);
            else cout << vt;
        }
    }


}//sai ngay:)) quá số lần so sánh r
