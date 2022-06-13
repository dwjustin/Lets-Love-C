#include <stdio.h>

int main() {
  char *ptr,*ptr1;
  int i;
  char array[5]="Knot";
  ptr=&array[1]; //ptr은 array에서 n을 가리킴
  ptr1=ptr+3;//이건 array index 기준임. 즉, array[1]에서 1+3, array[4]에 해당하는 위치는 ptr1이다
  *ptr1=101;//ptr1은 근데 아스키코드 값으로 101, 즉 e임
 
  for(i=0;i<4;i++)
    printf("%c",*ptr++);//따라서 얘는 ptr++를 하면서 array 인덱스를 한칸씩 이동하는거임. n부터 시작하면, n,o,t순서로 출력되겠지. 그다음은 array[4]니까 그건 아까 ptr1으로 정해졌잖음 그래서 e, 따라서 note가 나오는거임
  return 0;
}