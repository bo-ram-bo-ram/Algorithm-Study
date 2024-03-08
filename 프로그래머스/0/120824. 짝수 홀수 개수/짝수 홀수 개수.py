def solution(num_list):
    answer = []
    sum = 0
    for n in num_list:
        if n%2==0:
            sum += 1
    
    answer.append(sum)
    answer.append(len(num_list) - sum)
    return answer