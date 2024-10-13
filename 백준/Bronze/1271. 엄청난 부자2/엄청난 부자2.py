# 입력 받기
n, m = map(int, input().split())

# 생명체 하나당 돌아가는 돈의 양 (몫)
quotient = n // m

# 남는 돈 (나머지)
remainder = n % m

# 결과 출력
print(quotient)
print(remainder)
