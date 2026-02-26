num = int(input("Enter a number: "))

# Check divisibility by 2
div2 = (num % 2 == 0)

# Check divisibility by 7
temp = num
while temp > 70:
    last = temp % 10
    temp = temp // 10 - 2 * last

div7 = (temp % 7 == 0)

if div2 and div7:
    print(num, "is divisible by 14")
else:
    print(num, "is not divisible by 14")
