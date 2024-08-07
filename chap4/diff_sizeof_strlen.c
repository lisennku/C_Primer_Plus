//
// Created by lisen on 24-8-7.
//
#include <stdio.h>
#include <string.h>

#define STR1 "this is a test string"   // 21 characters

int main() {
	char str2[40] = "abcd";
	char str3[] = "abcdefg";

	printf("sizeof str1 is %d, strlen str1 is %d\n", sizeof(STR1), strlen(STR1));
	printf("sizeof str2 is %d, strlen str2 is %d\n", sizeof(str2), strlen(str2));
	printf("sizeof str3 is %d, strlen str3 is %d\n", sizeof(str3), strlen(str3));
}