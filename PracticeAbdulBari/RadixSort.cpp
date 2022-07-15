//#include<iostream>
//#include<string>
//#include<sstream>
//
//using namespace std;
//
//class Node {
//public:
//    int value;
//    Node* next;
//};
//
//int Max(int A[], int n) {
//    int max = -32768;
//    for (int i = 0; i < n; i++) {
//        if (A[i] > max) {
//            max = A[i];
//        }
//    }
//    return max;
//}
//
//void Insert(Node** pbin, int element, int index) {
//    Node* temp = new Node;
//    temp->value = element;
//    temp->next = nullptr;
//
//    if (pbin[index] == nullptr) {
//        pbin[index] = temp;
//    }
//    else {
//        Node* p = pbin[index];
//        while (p->next != nullptr) {
//            p = p->next;
//        }
//        p->next = temp;
//    }
//}
//
//int Delete(Node** pbin, int index) {
//    Node* p = pbin[index];
//    pbin[index] = pbin[index]->next;
//    int x = p->value;
//    delete p;
//    return x;
//}
//
//void radixSort(int A[], int n) {
//
//    int max = Max(A, n);
//    Node** bins = new Node * [10]; //10 bcos digits are in from 0-9
//    for (int i = 0; i < 10; i++) {
//        bins[i] = nullptr;
//    }
//    stringstream s; 
//    string x;
//    s << max; 
//    s >> x; // converted from int to string to count the numebr of digits in it
//
//    for (int k = 0, div = 1; k < x.size(); k++, div = div * 10) 
//    {
//        for (int i = 0; i < n; i++) 
//        {
//            int index = (A[i] / div) % 10;
//            Insert(bins, A[i], index);
//        }
//
//        // updating A with 1st pass
//        int i = 0; int j = 0;
//        while (i < 10) 
//        {
//            while (bins[i] != nullptr) 
//            {
//                A[j++] = Delete(bins, i);
//            }
//            i++;
//        }
//    }
//}
//
//int main()
//{
//    int A[] = { 123,235,100,352,632,233,122,60,20,123,235,100};
//    int n = sizeof(A) / sizeof(A[0]);
//
//    radixSort(A, n);
//
//    for (int i = 0; i < n; i++) {
//        cout << A[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}