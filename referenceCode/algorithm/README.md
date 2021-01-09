# 거품정렬 Bubble sort
&nbsp;&nbsp;&nbsp;&nbsp;![image](https://t1.daumcdn.net/cfile/tistory/99376B505C36A49A08)

&nbsp;&nbsp;&nbsp;&nbsp;서로 인접한 두 원소의 대소를 비교하고, 조건에 맞지 않다면 자리를 교환하며 정렬하는 방법이다.
* 안정 정렬(stable sort): 정렬되지 않은 상태에서 같은 키 값을 가진 원소의 순서가 정렬 후에도 유지된다.
* 제자리 정렬(In-place): 주어진 공간에 비해 추가적인 공간을 사용하지 않거나, 주어진 원소들의 개수에 비해서 무시할 만한 저장 공간만을 더 사용하는 정렬<br/>&nbsp;&nbsp;&nbsp;&nbsp;![image](https://user-images.githubusercontent.com/62373386/103970334-55763600-51ab-11eb-812b-4a9399cabe28.png)
>**1회전**: 첫번째 원소 vs 두번째 원소, 두번째 원소 vs 세번째 원소, ..., (n-1)번째 원소 vs n번째 원소를 비교하면서 조건에 맞지 않는다면 자리를 교환한다.<br/>=> 가장 큰 원소가 제일 뒤에 위치하게 된다.(오름차순) 맨 끝에 있는 원소 정렬에서 제외
<br/>**2회전**: 첫번째 원소 vs 두번째 원소, 두번째 원소 vs 세번째 원소, ..., (n-2)번째 원소 vs (n-1)번째 원소 비교하며 정렬<br/>=> 끝에서 두번째 원소까지 정렬에서 제외<br/>
.<br/>
.<br/>
.<br/>
이 과정을 반복한다.
* 코드
```
#include <iostream>

using namespace std;

int main() {
    int data[] = {7, 4, 5, 1, 3};
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5-(i+1); j++){
            if(data[j+1]<data[j]){
                int temp = data[j+1];
                data[j+1] = data[j];
                data[j] = temp;
            }
        }
    }

    return 0;
}
```


* 정렬 알고리즘 별 시간 / 공간 복잡도 표<br/>&nbsp;&nbsp;&nbsp;&nbsp;![](https://images.velog.io/images/kji990607/post/7bd169ca-c24b-4a79-acbb-1a1805461a00/image.png)


* 시간복잡도: `O(n^2)`
(n-1) + (n-2) + (n-3) + .... + 2 + 1 = n(n-1)/2<br/>한 번의 순회가 끝나면 비교할 원소가 하나씩 줄어든다. 전체 개수가 n개일 때 n-1번 순회하면 정렬이 끝난다. 정렬 여부와 관계 없이 2개의 원소를 비교하기 때문에 최선, 평균, 최악의 경우 시간복잡도가 동일하다. 단, 최선의 경우 자리 교환이 0번 이루어지고 최악의 경우 자리 교환이 n(n-1)/2번 이루어진다.

* 공간복잡도: `O(1)`<br/>주어진 배열 안에서 교환(swap)

# 선택정렬 Selection Sort
&nbsp;&nbsp;&nbsp;&nbsp;![image](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FbekAxf%2FbtqBWrh1Sjl%2FAAVyKUtExiy6pdwfbhgR3k%2Fimg.gif)

&nbsp;&nbsp;&nbsp;&nbsp;해당 순서에 넣을 넣을 위치는 이미 정해져 있고, 그 위치에 어떤 원소를 넣을지 선택하는 방법이다. 그 원소의 index값을 저장하고 있다.
* 불안정 정렬(unstable sort)
* 제자리 정렬(In-place)
* Bubble Sort와 유사하지만 실제 교환이 일어나는 횟수가 적다.<br/>&nbsp;&nbsp;&nbsp;&nbsp;![image](https://user-images.githubusercontent.com/62373386/104083809-14eaeb00-5285-11eb-99ef-e866fe910173.png)
>1. 주어진 배열의 최소값을 찾는다.
>2. 그 갚을 맨 앞에 위치한 값과 교체한다.
>3. 맨 처음 위치를 뺀 나머지 배열을 같은 방법으로 교체한다.
>4. 하나의 원소만 남을 때 까지 1~3을 반복한다.
* 코드
```
#include <iostream>

using namespace std;

int main() {
    int data[] = {9, 6, 7, 3, 5};
    
    for(int i=0; i<4; i++){             
        int index = i;
        for(int j=i+1; j<5; j++){      
            if(data[j]<data[index]){    
                index = j;
            }
        }
        int temp = data[index];
        data[index] = data[i];
        data[i] = temp;
    }

    return 0;
}
```
* 시간복잡도: `O(n^2)`<br/>(n-1) + (n-2) + (n-3) + .... + 2 + 1 = n(n-1)/2<br/>첫 번째 순회에서 1~(n-1)까지 `n-1`번 비교, 두 번째 순회에서 2~(n-1)까지 `n-2`번 비교 ... 최악, 평균, 최선의 경우 시간복잡도가 모두 같다

* 공간복잡도: `O(1)`

[참고 링크](https://devuna.tistory.com/28)