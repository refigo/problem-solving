def solution(my_string, index_list):
    answer = ''
    for each_index in index_list:
        answer += my_string[each_index]
    return answer