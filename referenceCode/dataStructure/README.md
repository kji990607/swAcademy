# stack
&nbsp;&nbsp;&nbsp;&nbsp;Stack은 한 쪽 끝에서만 자료를 넣거나 뺄 수 있는 선형 구조(LIFO - Last In First Out)로 데이터를 저장하는 형식을 말한다.
![image](https://user-images.githubusercontent.com/62373386/103739721-55eebf80-5039-11eb-9bfa-dcde95eb3f41.png)

# queue
&nbsp;&nbsp;&nbsp;&nbsp;Queue는 컴퓨터의 기본적인 자료 구조의 한가지로, 먼저 집어 넣은 데이터가 먼저 나오는 FIFO (First In First Out)구조로 저장하는 형식을 말한다.
<br/>
![image](https://user-images.githubusercontent.com/62373386/103740141-107ec200-503a-11eb-8a54-63619fd27f8c.png)
<br/>
&nbsp;&nbsp;&nbsp;&nbsp;위 그림과 같은 선형 큐의 경우, rear가 배열의 마지막 인덱스를 가르키면 deque를 통해 발생한 배열의 빈 공간을 이용할 수 없다.
![image](https://user-images.githubusercontent.com/62373386/103740770-39538700-503b-11eb-8127-643ad42f339f.png)
<br/>
&nbsp;&nbsp;&nbsp;&nbsp;원형 큐가 이 문제를 해결할 수 있다. (rear+1) % array.length==front라면 포화상태로 본다. 
