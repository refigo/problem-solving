def solution(num_list):
    odd_nums = ''
    even_nums = ''
    for num in num_list:
        if (num % 2 == 1):
            odd_nums += str(num)
        else:
            even_nums += str(num)
    return (int(odd_nums) + int(even_nums))