
import strutils, sequtils
var a, b, c: int64
(a, b, c) = stdin.readline.split.map(parseBiggestInt)
echo a*b mod 1000000007 * c mod 1000000007
