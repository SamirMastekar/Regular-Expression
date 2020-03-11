Regulor expression


Allow the search for matching pattern

.		- Any Character Except New Line
\d		- Any Digit(o-9)
\D     	- Not a Digit(0-9) || All aplhabet
\w		- word Character (a-z, A-Z, 0-9, _)
\W 		- Not Word Character
\s 		- Whitespace(space, Tab, Newline)
\S		- Not Whitespace(space, Tab, NewLine)
\b		- Word Boundary
\B 		- Not Word Boundary
^		- Begining of a string
$		- End of a String

[1-7]	- Matches with range from 1-7
[a-z]	- Matches with range from a to z not "A to Z"
[^ ]	- Matches Character NOT in Brackets
|		- Either OR
( )		- Group

quntifiers:
*		- 0 or More
+		- 1 or More
?		- 0 or One
{3}		- Exact Number
{3,4}	- Range of Numbers(Minimum, Maximaum)


##Sample Regex
[a-zA-z0-9_.+-]+@[a-zA-z0-9-]+\.[a-zA-Z0-9]