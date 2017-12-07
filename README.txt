# README file for TEAM[3,7]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.



Ownership

README.txt:	임창환(DogRing)
Header.h:	이정윤(JungYoonLee)
main.c:		임창환(DogRing)
trivial.c:	이정윤(JungYoonLee)
reverse.c:	박상현(galaxy821)
juggle.c:	구경민(dudn025)
BlockSwap.c:	안재형(lbr0452000)



Program summary

1. Input data
- n d CharArrayOfLengthN
	d > 0 : clockwise rotation
	d < 0 : counterclockwise rotation

2. Program
- 4 functions of rotation returns with result
	: Trivial solution / juggling / block-swap / reverse
- Main routine handling I/O and invoke functions
	: Main(): generate test case(input data) to compare time complexirt of 4 methods

3. Output data
- Time elapsed for rotating data for 4 methods respectively
	: Series of 4 results to show the differece



Library function List

void trivial (char *str1, int length, int d)
	// length 만큼의 str1을 받아 맨 앞의 값을 temp에 저장해 앞으로 1씩 이동 한 후 뒤에 temp 저장

void juggle (char *str1, int length, int d)
	// length 만큼의 str1을 받아 맨 앞의 값을 temp에 저장해 d 뒤에 있는 값을 d 만큼 앞으로 이동 이것을 d번 반복한다. 

void BlockSwap (char *str, int n, int d)
	// length 만큼의 str1을 받아 |d|만큼의 문자열을 temp에 저장해 d만큼 뒤를 당겨와서 맨 뒤에 temp를 저장

void reverse (char *str1, int length, int d)
	// length 만큼의 str1을 받아 |d|만큼의 문자열을 reverse 한 후 뒤의 문자열도 따로 reverse 한 뒤 전체를 reverse 한다. 



[Test Results]
STRLength	ROTATE distance		       T.trivial	T.juggle 	    T.bw	T.reverse  (ms)
      100                     50		        0	       0		0	        0    
     1000		     500			2	       0		0		0
    10000		    5000	              165	       0                0               0
    50000		    2500		     4265	       1		0		0
   100000		   50000		    17182	       1		1		1
   200000	 	 1000000		    72641	       2		1		1
   300000		 1500000		   154158	       3		2		1
   400000		 2000000		   277534	       5		2		3
   500000		 2500000		   446369	       8		3		3
   600000		 3000000		   	-	       6		4		4
   700000		 3500000			-	       9		4		5
   800000		 4000000			-	       8		5		5
   900000		 4500000			-	       9	        5	        5
  1000000		 5000000			-	      11		6		7
  5000000		 2500000			-	      50	       29	       30
 10000000		 5000000			-	      97	       59	       55
 20000000	        10000000			-	       -	      114	      111
 50000000 		25000000			-	       -	      285	      279
100000000		50000000			-	       -	      624	      554

[추론]
처리시간은 reverse, blockswap, juggle, trivial 순으로 빠르다
trivial은 (STRLength-1)*ROTATEdistance 번 문자를 이동하기 때문에 다른 함수에 비해 처리 속도가 현저하게오래걸린다
juggle의 처리속도는 trivial의 처리속도보다 약 2000배빠르다
blockswap의 처리속도는 juggle의 처리속도보다 약 1.5 ~ 2배 빠르다
최대 100000000 길이의 문자열을 50000000번 rotate했을 때 blockswap과 reverse의 처리속도는 100ms이내로 차이 난다
STRLength가 10000000 이하 일때는 두 함수의 처리시간은 1ms 이하로 차이가 나는 정도로, 거의 같다고 볼 수 있다
그러나 그 보다 STRLength가 길어지면 reverse가 blockswap보다 처리시간이 더 짧음을 볼 수 있었다

[Project 진행과정]
1. 사용자로부터 STRLength와 ROTATE distance를 입력받는다

2. char * (STRLength +1)만큼의 동적메모리를 char *str에 할당한다

3. STRLength만큼 random하게 str에 문자를 채운다

4. Rotate distance가 양수이면 시계방향으로, 음수이면 반시계방향으로 절대값 ROTATE distance만큼 rotate 한다
   각 함수별로 rotate가 실행되기 전(start)과 실행된 후(end) 시간을 잰 후 둘의 차를 통해 처리 속도를 측정한다

5. Test results (STRLength / ROTATEdistance / T.trivial / T.juggle / T.bw / T.reverse)를 출력한다
   	// STRLength : 문자열 길이, ROTATEdistance : rotate할 문자열 길이, T.함수이름 : 함수의 rotate 처리 속도
