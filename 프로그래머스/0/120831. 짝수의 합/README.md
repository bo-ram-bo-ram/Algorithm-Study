# [level 0] 짝수의 합 - 120831 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120831) 

### 성능 요약

메모리: 10.1 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 07일 19:25:07

### 문제 설명

<p>정수 <code>n</code>이 주어질 때, <code>n</code>이하의 짝수를 모두 더한 값을 return 하도록 solution 함수를 작성해주세요.</p>

<hr>

<h5>제한사항</h5>

<p>0 &lt; <code>n</code> ≤ 1000</p>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>10</td>
<td>30</td>
</tr>
<tr>
<td>4</td>
<td>6</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>n</code>이 10이므로 2 + 4 + 6 + 8 + 10 = 30을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>n</code>이 4이므로 2 + 4 = 6을 return 합니다.</li>
</ul>

<hr>

## remind

range(10)은 0부터 10 미만의 숫자를 포함하는 range 객체를 만들어 준다.

시작 숫자와 끝 숫자를 지정하려면 range(시작_숫자, 끝_숫자) 형태를 사용하는데, 이때 끝 숫자는 포함되지 않는다.

> a = range(1, 11)
> 
> a = [1,2,3,4,5,6,7,8,9,10]



> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges
