### 1. ex00) sybolic link, hard link

```shell
-rw-r--r--  2 taelee  staff  16 May  3 19:07 hardlink
-rw-r--r--  2 taelee  staff  16 May  3 19:07 original
-rw-r--r--  1 taelee  staff  13 May  3 19:07 original_s
lrwxr-xr-x  1 taelee  staff  10 May  3 19:08 symboliclink -> original_s
```

- 하드 링크시 ls -l 했을때 두번째 숫자가 2로 바뀐것 이외에는 둘이 연결됐다는것이 표시가 안됨(검색해보니 이 숫자가 하드링크의 갯수라고 함)

- 심볼릭 링크시 화살표로 어떤파일을 향하고 있는지 표시가 됨. 하지만 두번째 숫자가 1로 그대로임 그리고 맨처음에 l(link인듯)이 표시가 됨

- 둘다 원본이 수정되면 링크도 수정되고, 링크가 수정되면 원본도 수정됨
- 하드링크는 원본이 지워져도 링크는 살아있지만 심볼릭링크의 경우 원본이 사라지면
  `symboliclink: No such file or directory` 이런 문구가 뜸
- 하드링크에서 원본이 지워진 경우 링크본의 숫자가 1로 바뀜(검색해보니 이 숫자가 하드링크의 갯수라고 함)
- 당연하지만, 링크본이 지워졌을경우 둘다 원본에는 아무 변화가 없음

