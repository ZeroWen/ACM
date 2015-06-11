'''
?(>_o)! is a pseudo-object-oriented programming language. It implements the following commands:

Command	Description
?	Check whether the character '?' is in the program's source code. If '?' does not exist in the program's source, the hardware will catch fire or explode.
(	It tries to match ')', although mismatch of brackets does not matter at all.
>	Increase the internal accumulator.
_	Print the program's source code.
o	Instantiate an object of a new sub class of the generic super class. Due to the best principles of object hiding, this object cannot be accessed in any way.
)	Just matches '('. It's for patient with obsessive-compulsive disorder. However, mismatch of brackets does not matter at all.
!	Print "Hello, world!".
Other characters	Be treated as comments rather than instruction.
However, it's only another joke programming language. There is even no way to access the accumulator. But it's one of easiest to finish a "Hello world" program or a quine program. A quine is a computer program which takes no input and produces a copy of its own source code as its only output. Your task is to judge whether a ?(>_o)! program is a quine.

Input

There are multiple test cases. The first line of input is an integer T indicates the number of test cases. For each test case:

There is one line of string represents the source code of a ?(>_o)! program. The program contains no more than 256 characters. The ASCII value of each character is within [32, 126].

Output

For each test case, output "Yes" if it is a quine. Otherwise, output "No".

Sample Input

4
Hello, world!
source_code
source__code
?(>_o)!
Sample Output

Yes
Yes
No
No
Hint

The output of the four sample programs are {"Hello, world!", "source_code", "source__codesource__code", "?(>_o)!Hello, world!"} respectively. Therefore the first two programs are quines, and the last two are not.

Luckily, there is a '?' in the fourth program, so the hardware will not catch fire or explode during running the fourth program.

Created:  06/11/2015 23:53:22

'''

t = int(raw_input())
for i in range(0, t):
	str = raw_input()
	hello = "Hello, world!"
	hellocount = str.count(hello, 0, len(str))
	if hellocount == len(str)/len(hello) and len(str)%len(hello) == 0:
		print "Yes" 
	else:
		underscore = str.count("_", 0, len(str))
		exclamation = str.count("!", 0, len(str))
		if underscore == 1 and exclamation == 0:
			print "Yes"
		else:
			print "No"
