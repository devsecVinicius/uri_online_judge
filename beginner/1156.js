let s, n1, n2

s = 1
n1 = 3
n2 = 2

while( n1 < 39 ){
    s += n1 / n2
    n1 += 2
    n2 = n2 * 2
}

console.log(s.toFixed(2))