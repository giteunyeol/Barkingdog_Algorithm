#include <iostream>
using namespace std;

int n = 10;
int arr[1000001] = {15, 25, 22, 357, 16, 23, -53, 12, 46, 3};
int tmp[1000001]; // merge 함수에서 리스트 2개를 합친 결과를 임시로 저장하고 있을 변수

// mid = (st+en)/2라고 할 때 arr[st:mid], arr[mid:en]은 이미 정렬이 되어있는 상태일 때 arr[st:mid]와 arr[mid:en]을 합친다.
void merge(int st, int en)
{
    int mid = (st + en) / 2;
    // 11728번 따오면 되는거네
    // 첫번째배열은 st부터 시작해서 mid - 1까지, 두번째 배열은 mid부터 시작해서 (en - 1까지?),
    int idx_1 = st;
    int idx_2 = mid;
    for(int i = st; i < en; i++)
    {
        if(idx_1 == mid) // 좌측이 다 닿은 경우
        {
            tmp[i] = arr[idx_2++];
        }
        else if(idx_2 == en) // 우측이 다 닿은경우
        {
            tmp[i] = arr[idx_1++];
        }
        else if(arr[idx_1] <= arr[idx_2]) //우측이 크거나 같은경우
        {
            tmp[i] = arr[idx_1++];
        }
        else
        {
            tmp[i] = arr[idx_2++];
        }
    }
    for (int i = st; i < en; i++)
    {
        arr[i] = tmp[i];
    }
}

// arr[st:en]을 정렬하고 싶다.
void merge_sort(int st, int en)
{
    if (en - st == 1)
    {
        return; // 길이 1인 경우
    }
    int mid = (st + en) / 2;
    merge_sort(st, mid); // arr[st:mid]을 정렬한다.
    merge_sort(mid, en); // arr[mid:en]을 정렬한다.
    merge(st, en);       // arr[st:mid]와 arr[mid:en]을 합친다.
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    merge_sort(0, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' '; // -53 3 12 15 16 22 23 25 46 357
}