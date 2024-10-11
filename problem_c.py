def problem_C():
    k = int(input())
    angles = [int(input()) for _ in range(k)]
    sum_of_angles = sum(angles)
    avrg = sum_of_angles // k
    if 360 % (180 - avrg) != 0:
        print(-1)
    else:
        min_n = 360 // (180 - avrg)
        max_n = avrg * k + 360 - 180 * k + k
        print(min_n, max_n)

problem_C()
