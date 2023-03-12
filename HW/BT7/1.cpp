#include <iostream>
#include <algorithm>


using namespace std;

int* weird_sum(int a, int b) {
    int c;
    c = a + b;
    return &c;  // tra ve con tro toi bien dia phuong
}

int main (int argc, const char * atgv[])
{
    /**
    //loi truy cap con tro NULL tuong duong truy cap dia chi 0 trong bo nho
    int *pX = NULL;
    cout << pX << endl;
    cout << *pX;
    *pX = 0;
    */

    /**
    //dangling references: truy cap toi vùng nho k còn hop le
    int a  = 20, b = 25, *pG;
    {
        int g;
        pG = &g;
        g = __gcd(a,b);   // __gcd (a,b) = UCLN (a,b)
    }
    {
        int temp=100;
        cout << "temp is " << temp << endl;
    }
    cout << "GCD (" << a << "," << b << ") = " << *pG;
    */

    /**
    // chay bình thuong
    {
        int temp1;
        cout << &temp1 << endl;
    }
    {
        int temp2;
        cout << &temp2;
    }
    */

    /**
    // doi kieu --> loi không doi duoc tu char -> int
    char a = 'a';
    char* p1 = &a;
    int* p2 = (int*) p1;
    *p2 = 'b';
    cout << p2 << endl << *p2;
    */

    /**
    //Hang con tro
    int a = 20, b = 25, c = 30;
    const int* pA = &a;         // con tr? t?i h?ng int
    int* const pB = &b;         // h?ng con tr?
    const int* const pC = &c;   // h?ng con tr? t?i h?ng int
    *pA += 1;   //65|error: assignment of read-only location '* pA' --> gtri a = const
    *pB += 1;   //gtri b co the doi dc
    *pC += 1;   //67|error: assignment of read-only location '*(const int*)pC'|
    pA = NULL;
    pB = NULL;  //70|error: assignment of read-only variable 'pB'|
    pC = NULL;  //71|error: assignment of read-only variable 'pC'|
    */

    /**
    //Loi that thoát bo nho
    int ptr1 = new int;
    int ptr2 = new int;
    ptr1 = ptr2;    //ptr1 và ptr2 tro toi ô nho cua ptr2 --> ô nho cua ptr1 k the thu hoi
    */


    //Giai phóng bo nho quá som
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;    // con tro p2 tro den 1 vùng nho không còn hieu luc
    return 0;

}
