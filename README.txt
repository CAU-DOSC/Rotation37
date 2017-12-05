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



Test Results
STRLenght	ROTATE distance		T.trivial	T.juggle 	T.bw		T.reverse
   100000                 10000		3691.000000	1.000000	1.000000	1.000000

