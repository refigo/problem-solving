# [Bronze III] 욱제는 건축왕이야!! - 15923 

[문제 링크](https://www.acmicpc.net/problem/15923) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 구현, 기하학

### 제출 일자

2025년 8월 2일 10:26:34

### 문제 설명

<p>건축학개론을 수강한 욱제는 선린의 매점 앞에 지어질 새로운 건물의 설계를 맡았다. 욱제는 건축학개론 수업에서 수지를 만나 행복하지만, C-를 받을 정도로 건축에 소질이 없다.</p>

<p>컴퓨터학부에 재학중인 욱제는 이 건물의 설계도를 그림이 아니라 선분과 선분이 만나는 꼭짓점들의 좌표로 관리하고 있다고 한다. 이 설계도는 건물의 바닥 부분만을 나타낸 밑면도(저면도)이다. 하지만 프로그래밍 역시 C-인 욱제는 자신이 설계한 건물의 둘레를 구할 방도를 찾지 못해 발을 동동 구르고 있다.</p>

<p>욱제가 설계한 건물은 어느 방향에서 보아도 가운데가 파인 부분이 없는 직각으로 볼록한 닫힌 곡선 모양이다. 단순한 타원을 디지털화 한 모양이라고 이야기 할 수 있겠다. 욱제의 설계도는 2차원 좌표평면 위의 격자에 꼭 맞게 표현된다. (이런 모양을 영어로는 orthogonally convex rectilinear polygon이라고 한다)</p>

<p>욱제는 당신에게 밑면도의 모든 꼭짓점의 좌표들을 넘겨주며 도움을 요청하였다. 설계도는 욱제가 넘겨주는 좌표 순서대로 i번째 좌표와 i+1번째 좌표를 잇는 선분을 그려 복원할 수 있다고 한다. N번째 좌표는 1번째 좌표와 이어지며 선분은 항상 격자에 맞게 주어진다.</p>

<p>욱제를 대신해 이 건물의 둘레를 구하고 건축학개론의 주인공 자리를 빼앗자!</p>

### 입력 

 <p>첫째 줄에 꼭짓점의 개수 N이 주어진다. (4 ≤ N ≤ 20)</p>

<p>이후 둘째 줄 부터 N개의 줄에 걸쳐 꼭짓점의 좌표 (x, y)가 주어진다. 좌표는 40 이하의 음이 아닌 정수이며, 중복되는 좌표는 주어지지 않는다.</p>

### 출력 

 <p>욱제가 설계한 건물의 둘레의 길이를 출력한다.</p>

