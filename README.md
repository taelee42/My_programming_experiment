### 실험, 관찰 목록

---

| No.  | 타이틀                                                       |                    주제                     |                            비고                            |
| ---- | ------------------------------------------------------------ | :-----------------------------------------: | :--------------------------------------------------------: |
| 1    | [Library을 이용한 컴파일(Makefile로 자동화)<br />Makefile에서 output파일들 폴더지정,<br />Makefile에서 글씨 색상 입히기](./01library_Makefile/README.md) |          `C`,`Library`, `Makefile`          | 좀 더 내용이 많아지면 분리 필요<br />2020.05.01~2020.05.02 |
| 2    | [Symbolic Link와 Hard Link의 차이 및 관찰](./02link/README.md) |  `Shell`,`Hard Link`,<br />`Symbolic Link`  |                         2020.05.03                         |
| 3    | [bool 라이브러리 직접정의하기](04bool/README.md)             | `C`,`bool`, `stdbool.h`,`typedef`, `define` |                         2020.05.05                         |
| 4    | [메모리 누수 검사 방법](05leak/README.md)                    |            `C`,`leaks`,`system`             |                         2020.05.05                         |
|      |                                                              |                                             |                                                            |



### 짤막 실험결과

---

1. math라이브러리의 sin, cos들은 180분법이 아닌 radian의 각도를 인자로 받음



### 추후 실험 주제

---

1. char *와 char[]의 차이
2. 함수로 넘겨받은 데이터를 프리 했을때 넘겨받기 전 데이터는 어떻게 되는가? (데이터 그대로 넘겨받았을 때 데이터의 주소를 받았을때 비교)
3. printf와 write의 순서 뒤바뀜 현상(fflush로 처리가능) -- https://42born2code.slack.com/archives/CU6MTFBNH/p1588657579055500
4. malloc앞에 (char *)을 붙일때가 있고 안붙여도 되는게 있던데 뭐가 맞는지, 혹은 어떤상황에 어떤것을 써야하는지?