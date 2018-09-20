m = int(1e9 + 7)
fact = [0] * 1005
fact[0] = 1
for i in range(1, 1005):
    fact[i] = (fact[i - 1] * i) % (m - 1)
t = input()
for _ in range(t):
    a, b = map(int, raw_input().split())
    print int(pow(a, fact[b], m)) 
	// (a^(b!))%1e9+7
