// // 문제 : 2중 포인터만 사용해서 함수안의 모든 지역변수의 값을 변경해주세요.
// // 조건 : 아래와 같이 출력되도록 해주세요.
// #include <stdio.h>


// // 솔루션1 - a1, a2, a3값을 직접 해결
// void sol1() {
//   int* p;
//   int** pp = &p;

//   int a1;
//   int a2;
//   int a3;

//   printf("&a1 : %ld\n", (long)&a1);
//   printf("&a2 : %ld\n", (long)&a2);
//   printf("&a3 : %ld\n", (long)&a3);

//   printf("&p : %ld\n", (long)&p);
//   printf("&pp : %ld\n", (long)&pp);
//   printf("pp : %ld\n", (long)pp);

//   // 수정가능지역 시작
//   a1 = 1;
//   a2 = 2;
//   a3 = 3;





//   // 수정가능지역 끝

//   printf("a1 : %d\n", a1);
//   // 출력 => a1 : 100
//   printf("a2 : %d\n", a2);
//   // 출력 => a2 : 200
//   printf("a3 : %d\n", a3);
//   // 출력 => a3 : 300
// }

// // 솔루션2 - a1의 주소를 이용해 포인터 p를 이용한 포인터 연산으로 해결
// void sol2() {
//   int* p;
//   int** pp = &p;
//   int a1;
//   int a2;
//   int a3;
//   printf("&a1 : %ld\n", (long)&a1);
//   printf("&a2 : %ld\n", (long)&a2);
//   printf("&a3 : %ld\n", (long)&a3);

//   printf("&p : %ld\n", (long)&p);
//   printf("&pp : %ld\n", (long)&pp);
//   printf("pp : %ld\n", (long)pp);
  
//   p = &a1; //p는 a1의 주소값을 가짐
//           //**pp 는 p의 주소값을 가짐. a의 주소값을 가지고있는 p. 둘다 같은 주소값.
//   // 수정가능지역 시작
  
//   *(p) = 100;

//   *(p - 1) = 200;

//   *(p - 2) = 300;



//   // 수정가능지역 끝
  
//   printf("a1 : %d\n", a1);
//   // 출력 => a1 : 100
//   printf("a2 : %d\n", a2);
//   // 출력 => a2 : 200
//   printf("a3 : %d\n", a3);
//   // 출력 => a3 : 300
// }


// // 솔루션3 - a1의 주소를 이용해 포인터 p와 이중 포인터 pp를 이용한 포인터 연산으로 해결
// void sol3() {
//   int* p;
//   int** pp = &p;
//   int a1;
//   int a2;
//   int a3;

//   printf("&a1 : %ld\n", (long)&a1);
//   printf("&a2 : %ld\n", (long)&a2);
//   printf("&a3 : %ld\n", (long)&a3);
//   printf("&p : %ld\n", (long)&p);
//   printf("&pp : %ld\n", (long)&pp);
//   printf("pp : %ld\n", (long)pp);

//   p = &a1;
  
//   // 수정가능지역 시작
//   // PP = &P. *(pp) = p 의 값 출력 = &a의 주소. **(pp) = a의 주소값의 값 출력.
//   **(pp) = 100;
//   *(*(pp) - 1) = 200;
//   *(*(pp) - 2) = 300;



//   // 수정가능지역 끝

//   printf("a1 : %d\n", a1);
//   // 출력 => a1 : 100
//   printf("a2 : %d\n", a2);
//   // 출력 => a2 : 200
//   printf("a3 : %d\n", a3);
//   // 출력 => a3 : 300
// }

// // 솔루션4 - 오직 pp를 이용하여 해결
// void sol4() {
//   int* p;
//   int** pp = &p;

//   int a1;
//   int a2;
//   int a3;

//   printf("&a1 : %ld\n", (long)&a1);
//   printf("&a2 : %ld\n", (long)&a2);
//   printf("&a3 : %ld\n", (long)&a3);

//   printf("&p : %ld\n", (long)&p);
//   printf("&pp : %ld\n", (long)&pp);
//   printf("pp : %ld\n", (long)pp);

  
//   // 수정가능지역 시작

//   // PP = &P. *(pp) = p 의 값 출력 = &a의 주소. **(pp) = a의 주소값의 값 출력.
  


//   // 수정가능지역 끝

//   printf("a1 : %d\n", a1);
//   // 출력 => a1 : 100
//   printf("a2 : %d\n", a2);
//   // 출력 => a2 : 200
//   printf("a3 : %d\n", a3);
//   // 출력 => a3 : 300
// }

// int main(void) {
//   printf("== 정답 ==\n");
//   // sol1();
//   // sol2();
//   // sol3(); 
//   sol4();

//   return 0;
// }


// 변수 ptr 을 이용해 변수 b에 100을 저장해주세요.
// 조건 : b = 100을 사용하면 안됩니다.

#include <stdio.h>

int main(void) {
  
  int a;
  printf("a : %ld\n", (long)&a);
  char b;
  printf("b : %ld\n", (long)&b);
  char c;
  printf("c : %ld\n", (long)&c);
  char d;
  printf("d : %ld\n", (long)&d);
  int e;
  printf("e : %ld\n", (long)&e);

  int* ptr = &e;
  printf("ptr : %ld\n", (long)(ptr));
  
  // =============== 수정가능지역 시작 ===============
  char* t = (char*)ptr;
   *(t + 7) = 100;

  // =============== 수정가능지역 끝 ================

  printf("=================변수 b의 값==================\n");
  printf("b : %d\n", b);


  // 출력 : 100
  

  return 0;
}