/*
 * =====================================================================================
 *
 *       Filename:  4593.c
 *
 *    Description:  
 *    Problem Description
 *    A robot is a mechanical or virtual artificial agent, usually an electro-mechanical machine that is guided by a computer program or electronic circuitry. Robots can be autonomous or semi-autonomous and range from humanoids such as Honda's Advanced Step in Innovative Mobility (ASIMO) and Tosy's TOSY Ping Pong Playing Robot (TOPIO) to industrial robots, collectively programmed 'swarm' robots, and even microscopic nano robots. By mimicking a lifelike appearance or automating movements, a robot may convey a sense of intelligence or thought of its own.
 *    Robots have replaced humans in the assistance of performing those repetitive and dangerous tasks which humans prefer not to do, or are unable to do due to size limitations, or even those such as in outer space or at the bottom of the sea where humans could not survive the extreme environments.
 *    After many years, robots have become very intellective and popular. Glad Corporation is a big company that produces service robots. In order to guarantee the safety of production, each robot has an unique number (each number is selected from 1 to N and will be recorded when the robot is produced).
 *    But one day we found that N+1 robots have been produced in the range of 1 to N , that's to say one number has been used for 2 times. Now the president of Glad Corporation hopes to find the reused number as soon as possible.
 *    Input
 *    Multiple cases, end with EOF.
 *    In each case, The first line has one number N, which represents the maximum number. The next line has N +1 numbers. (All numbers are between 1 to N, and only two of them are the same.) (1 <= N <= 103)
 *    Output
 *    Each case, output a line with the reused number.
 *    There are no black lines between cases.
 *    Sample Input
 *    2
 *    1 2 1
 *    1
 *    1 1
 *    Sample Output
 *    1
 *    1
 *
 *        Created:  05/08/2014 01:04:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,a[1001],i,j;
	while(scanf("%d",&n)!=EOF)
		for(i=0;i<=n;i++){
			scanf("%d",&a[i]);
			for(j=0;j<i;j++)
				if(a[j]==a[i]){
					printf("%d\n",a[j]);
					break;
				}
		}
	return 0;
}
