#include <iostream>
#include <conio.h> // getch() 함수를 사용하기 위해 필요
		   
		   int main() {
		       int i = 1;
		       char ch;
		             
		       while (true) {
		           std::cout << i << " ";
		           i++; // i 값을 1 증가시킴
		           // 사용자가 ESC 키를 누르면 반복문을 종료함
		                   if (_kbhit()) { // 키 입력 여부 확인
		                   ch = _getch(); // 키 값을 읽어옴
		                   if (ch == 27) // ESC 키 값: 27
		                   break;
		            }
		      }
		  
		                                                                                                           return 0;
		                                                                                                           }
		   
