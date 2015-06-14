/*
 * =====================================================================================
 *
 *       Filename:  3712.c
 *
 *    Description:  
 *    MightyHorse is playing a music game called osu!.
 *    After playing for several months, MightyHorse discovered the way of calculating score in osu!:
 *    1. While playing osu!, player need to click some circles following the rhythm. Each time a player clicks, it will have three different points: 300, 100 and 50, deciding by how clicking timing fits the music.
 *    2. Calculating the score is quite simple. Each time player clicks and gets P points, the total score will add P, which should be calculated according to following formula:
 *    P = Point * (Combo * 2 + 1)
 *    Here Point is the point the player gets (300, 100 or 50) and Combo is the number of consecutive circles the player gets points previously - That means if the player doesn't miss any circle and clicks the ith circle, Combo should be i - 1.
 *    Recently MightyHorse meets a high-end osu! player. After watching his replay, MightyHorse finds that the game is very hard to play. But he is more interested in another problem: What's the maximum and minimum total score a player can get if he only knows the number of 300, 100 and 50 points the player gets in one play?
 *    As the high-end player plays so well, we can assume that he won't miss any circle while playing osu!; Thus he can get at least 50 point for a circle.
 *    Input
 *    There are multiple test cases.
 *    The first line of input is an integer T (1 ≤ T ≤ 100), indicating the number of test cases.
 *    For each test case, there is only one line contains three integers: A (0 ≤ A ≤ 500) - the number of 300 point he gets, B (0 ≤ B ≤ 500) - the number of 100 point he gets and C (0 ≤ C ≤ 500) - the number of 50 point he gets.
 *    Output
 *    For each test case, output a line contains two integers, describing the minimum and maximum total score the player can get.
 *    Sample Input
 *    1
 *    2 1 1 
 *    Sample Output
 *    2050 3950
 *
 *        Created:  06/14/2015 23:55:02
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
long add(int a1, int a2, int a3, int p1, int p2, int p3) {
	long sum = 0;
	int i = 1;
	for (;a1;--a1, i+=2)
		sum += i*p1;
	for (;a2;--a2, i+=2)
		sum += i*p2;
	for (;a3;--a3, i+=2)
		sum += i*p3;
	return sum;
}
int main(int argc, char *argv[]) {
	int t, i, a, b, c;
	long max, min;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &a, &b, &c);
		min = add(a, b, c, 300, 100, 50);
		max = add(c, b, a, 50, 100, 300);
		printf("%ld %ld\n", min, max);
	}
	return 0;
}
