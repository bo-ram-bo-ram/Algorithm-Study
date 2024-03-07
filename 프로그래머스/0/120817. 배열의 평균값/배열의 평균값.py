def solution(numbers):
    answer = 0
    sum = 0 
    for i in range(1, len(numbers)+1):
        sum += numbers[i-1]
    answer = sum / len(numbers)
    return answer