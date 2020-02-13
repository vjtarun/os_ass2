/*
# Course: CS4760-0021 - Operating System
# File Name: oss.c
# C program to find a prime number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>

int main(int argc, char *argv[])
{
  //variable declaration
     int indentation_space = 4;
     bool follow_symlink = false;
     char option_string[10];
  

  // use of getopt
  int opt;
	while((opt = getopt(argc, argv, "hI:Ldgipstul")) != -1)
	{
		switch(opt)
		{
			case 'h':
				printf("NAME:\n");
				printf("	%s - Concurrent UNIX process and shared memory.\n", argv[0]);
				printf("\nUSAGE:\n");
				printf("	%s oss [-h] [-n x] [-s x] [-b B] [-i I] [-o] \n", argv[0]);
				printf("\nDESCRIPTION:\n");
				printf("	-h	: Describe how the project should run and then terminate.\n");
				printf("	-n x	: Indicate the maximum number of child processes oss will ever create (Default 4).\n");
				printf("	-s x	: Indicate the number of children allowed to exist in the system at the same time.(Default 2).\n");
				printf("	-b B	: Start the sequence of numbers to be tested for primality.\n");
				printf("	-i I	: Increment between the numbers that we test.\n");
				printf("	-o	: filename out put file\n");
				return EXIT_SUCCESS;

			case 'n':
				strcat(option_string, "n");
				break;
				
			case 's':
				strcat(option_string, "s");
				break;
				
			case 'b':
				strcat(option_string, "B");
				break;
		
				return EXIT_FAILURE;
		}
       }
}
   


