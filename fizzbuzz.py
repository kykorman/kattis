Fizz=int(input())
Buzz=int(input())
N=int(input())

for i in range(1,N+1):
    if(i%Fizz==0 and i%Buzz==0):
        print("FizzBuzz")
    elif(i%Fizz==0):
        print("Fizz")
    elif(i%Buzz==0):
        print("Buzz")
    else:
        print(i)
