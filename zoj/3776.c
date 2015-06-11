/*
 * =====================================================================================
 *
 *       Filename:  3776.c
 *
 *    Description:  
 *    Calem and Serena are pokemon masters. One day they decided to have a pokemon battle practice before Pokemon World Championships. Each of them has some pokemons in each's team. To make the battle more interesting, they decided to use a special rule to determine the winner: the team with heavier total weight will win the battle!
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T indicating the number of test cases. For each test case:
 *    The first line contains two integers N and M (1 <= N, M <= 6), which describes that Calem has N pokemons and Serena has M pokemons.
 *    The second line contains N integers indicating the weight of Calem's pokemons. The third line contains M integers indicating the weight of Serena's pokemons. All pokemons' weight are in the range of [1, 2094] pounds.
 *    Output
 *    For each test case, output "Calem" if Calem's team will win the battle, or "Serena" if Serena's team will win. If the two team have the same total weight, output "Draw" instead.
 *    Sample Input
 *    1
 *    6 6
 *    13 220 199 188 269 1014
 *    101 176 130 220 881 396
 *    Sample Output
 *    Serena
 *
 *        Created:  06/12/2015 00:28:51
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main() {
	int t, n, m, i, summ, sumn, tmp;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		sumn = summ = 0;
		for (i=0;i<n;++i) {
			scanf("%d", &tmp);
			sumn += tmp;
		}
		for (i=0;i<m;++i) {
			scanf("%d", &tmp);
			summ += tmp;
		}
		printf("%s\n", summ>sumn?"Serena":(summ==sumn?"Draw":"Calem"));
	}
	return 0;
}
