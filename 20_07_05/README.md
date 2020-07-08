# 2020 / 07 / 03 (금) 코드포스 연습문제

## 17213 과일 서리

![image](https://user-images.githubusercontent.com/50068946/86871824-fbba8380-c115-11ea-99cb-ddbda47e12b7.png)

문제 읽어보니 고등학교 때 풀었던 중복 조합 문제였다. 어떤 개념을 써야 하는지는 바로 떠올랐지만 슬프게도 졸업한 지 오래라 기억이 나지 않았다. 그래서 다시 개념을 정리한 다음 풀어보았다.

![image](https://user-images.githubusercontent.com/50068946/86872259-e09c4380-c116-11ea-84f3-40e6c56198e0.png)

모든 과일을 적어도 1개는 훔친다고 했으므로 m에 n개를 뺀 다음 계산했다. 

**코드**

<details>
    <summary>코드 보기</summary>

[내 코드](https://github.com/mimseong/ucpc2020/blob/master/20_07_05/B_17213.cpp)

</details>


## 2999 비밀 이메일

![image](https://user-images.githubusercontent.com/50068946/86554578-00056600-bf89-11ea-948d-4cbf615a5e50.png)

R * C = N이어야 하므로 R과 C는 N의 약수이다. 반복문으로 N의 약수를 구하고 그 중 가장 큰 값을 R로 둔다. 다음으로 R * C 크기의 배열을 만들어서 받은 메시지를 세로로 저장한다. 다음으로 배열의 값을 가로 순서대로 읽으면 값을 찾을 수 있다. 

**코드**

<details>
    <summary>코드 보기</summary>

[내 코드](https://github.com/mimseong/ucpc2020/blob/master/20_07_05/J_2999.cpp)


</details>

## 2428 표절

![image](https://user-images.githubusercontent.com/50068946/86558276-e3226000-bf93-11ea-8224-215705c788a9.png)

처음에 정렬한 뒤 자신의 뒤에 있는 숫자만 0.9 이상인지 비교하면 될 줄 알았다. 하지만 그러면 90 95 100과 같은 값은 체크하지 못한다. 그래서 90퍼 이상인 범위를 투포인터로 잡아서 개수를 세었다. 

**코드**

<details>
    <summary>코드 보기</summary>

[내 코드](https://github.com/mimseong/ucpc2020/blob/master/20_07_05/I_2428.cpp)


</details>


## 2870 수학숙제

![image](https://user-images.githubusercontent.com/50068946/86558734-25986c80-bf95-11ea-989a-8e24c055bb32.png)

로직은 간단했다. 먼저 숫자를 저장한 다음 002 같이 0으로 시작하는 숫자를 2로 만들고 벡터에 저장한다. 마지막으로 문자열 벡터를 정렬하면 된다. 이 문제는 구현이 너무 복잡했다.. 조금 더 깔끔하게 짤 수 있을 것 같은데 내 최선이었다. 

**코드**

<details>
    <summary>코드 보기</summary>

[내 코드](https://github.com/mimseong/ucpc2020/blob/master/20_07_05/H_2870.cpp)


</details>