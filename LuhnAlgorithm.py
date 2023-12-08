import numpy as np

card = np.array([4,4,1,7,1,2,3,4,5,6,7,8,9,1,1,3])
total = 0
check_digit = card[-1]


for i in range(1, len(card) -1, 2):
    digit = card[i] * 2
    digit_sum = sum(map(int, str(digit)))
    total += digit_sum


print("Checking...")

final_score = total + check_digit
if final_score % 10 == 0:
    print("It is a valid credit card")
else:
    print("This is wrong")
