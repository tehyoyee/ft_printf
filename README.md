# ft_printf
### 42seoul project
> Because putnbr and putstr aren’t enough

> Summary: This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future projects without the fear of being flagged as a cheater.

> You will mainly learn how to use variadic arguments.

___
## prototype of ft_printf
```c
int ft_printf(const char *, ...);
```
___
> 42서울 프로젝트로 printf를 구현해본다.   
> 실제 printf와 같이 버퍼관리는 하지 않았다.   
일단 %cspdiuxX% 의 서식지정자만 구현하였다.
