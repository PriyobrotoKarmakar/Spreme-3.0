#operation 

# 1. operands
# 2. operators


#operators 
#arithmetic operators

# 1. add (+)
# age = 20
# time = 10
# # finalage = age+time
# print(age+time)

# 2. substraction(-)
# a = 10.9869
# b = 500000
# print(a-b)

# 3.multiplication(*)
# a = 5
# b = 4
# print(a*b)
# 4.divison(/)(real)

# print(b/a)
#5. floor division(//)(p)
# print(b//a)

# 6. power(**)
# print(a**b)

# 7.modulo(%)

# a = 13
# b = 25

# print(b%a)

# a = 1001
# print(a%2)





#Assignment operators (=)
# 1.(=)
# a = 5

# 2.(+=)
# a+=12

# # 3.(-=)

# a-=10
# # 4.(*=)
# a*=5 #a = a*5

# # 5.(/=)

# a/=7 #a = a/5 5.0

# # 6.(//=)
# a//=2 #2.0

# # 7.(**=)

# a**=3 #8

# # 8.(%=)
# a%=4
# print(a)

#quiz
# a = 10
# a+=10
# a-=5
# a*=5
# a//=10
# a**=2 #49
# a%=2
# print(a)
# print(7//2)
#quiz2

# a = 10 
# b = 20
# a+=b
# b+=a
# a//=10
# a%=2
# b//=10
# b%=3
# print(a+b)

#quiz3
# a = 100
# b = 200
# c = 300
# c-=b
# b-=a
# a*=2
# b*=2
# c*=4
# a//=100 
# b//=100
# c//=100
# print(a==b)
# print(c>b)


#Comparison operators
# 1.(>)
# a = 101
# b = 11
# print(a>b)
# 2.(<)
# print(a<b)
# 3.(>=)
# a = 110000
# b = 11
# print(a>=b)
# 4.(<=)
# print(b<=a)
# 5.(==)
# a = 12
# b = 121
# print(a==b)
# 6. (!=)
# a = 11
# b = 11
# print(a!=b)




#if else(condition)

# 1.check a number is even or odd

# a = 121
# if(a%2==0):
#     print("is even")
# else:
#     print("is odd")
    

# 2. check a person is elligbile for vote or not
#  3. check two number and print which is bigger

#tabs vs space diff(tab = 4space)

# if(True):
#     print("I am true")
    

# 4.logical operators
# 1. and(and)

# a = 10
# b = 11
# if(a==b or a%2==0):
#     print("you are star")
# else:
#     print("you are not star")

# a = 19
# b = 13
# c = 11
# if((a>b and a>c and a>=b) or a==c):
#     print("a is big")
# else:
#     print("a is not big")

# 3.not(not)
# a = 10
# if(not(not(a==10))):
#     print("a is not star")
# else:
#     print("a is star")

# a = 10 
# b = 20
# c = 30

# if(not(not(not(a>b or a<c or b==c)))):
#     print("abrakadabra")
# else:
#     print("giligilichhuuu")

# a = 99
# b = 33
# if((not(a%11==0) or (b%11==0)) and not(a%b==0) and (a>b)):
#     print("amazing")

# else:
#     print("not amazing")

# a = 100
# b = -100
# c = a+b
# if(True and not(a>b) and not(a+b==0) and b<a and not(a==100) and a%10==0 or b%10==0):
#     print("hey whatsapp")
# else:
#     print("hey")



# if-else
# if - elif - else

# if(condition):
#     { 

#     }
# elif(condition):
#     {

#     }
# elif(condition):
#     {

#     }
#     ........
# else:
#     {
        
#     }


# a = 10
# b = 10
# c = 10

# if(a>b and a>c):
#     print("A is big")
# elif(b>a and b>c):
#     print("B is big")
# elif(c>a and c>b):
#     print("C is big")
# else:
#     print("all are equal")


# HW
# 1. print a number is divisible by 5 and 6 or not
# 2. print a a statement "you are adult " if the person age lies  between 18-30
# 3. write a program to checkk a person is child(<10) or teen (10-19) or adult(20-30) or old(>30)

# age  = 20
# if(age<10):
#     print("you are child")
# elif(age>=10 and age<=19):
#     print("teen")
# elif(age>=20 and age<=30):
#     print("adult")
# else:
#     print("old")

# 4. check a number is a multiple of 3 or 5 
# num = 15

# if(num%3==0  and num%5==0):
#     print("multiple of 5 and 3")
# elif(num%3==0):
#     print("multiple of 3")
# elif(num%5==0):
#     print("multiple 5")
# else:
#     print("not a multiple of 3 or 5")
# 5. take two 4 values and print which is biggest among them
# 6. what is binary number system  how to convert decimal to binary 



# 4. bitwise operator 
# 1.bitwise and(&)
# a = 5
# b = 3
# c = a&b
# print(c)

# 2. bitwise or(|)

# a = 5
# b = 3
# c = a|b
# print(c)

# print(5&8)
# print(6|7)
# print(3&0)
# print(5|1)

# 3. bitwise xor(^)
# a = 5
# b = 3 
# c = a^b
# print(c)


# 4. left shift(<<)
# a = 5
# b = a<<3
# print(b)
# 5. right shift(>>) 

# a =5 
# b = 5//2
# C = 5>>1
# print(b)

# 6. tilda(~):


#QUIZ
# print(5^5)
# print(3>>2)
# print(4>>1)
# print(8<<2)
# print(3&7)
# print(3|3)


#1. find area of rectangle 
# 2. check a number is positive or negetive or Zero
# 3. find a number even or odd with bitwise and operator(modulo)
# 4. find simple interest (given p,t,r)
# 5. find a triangle valid or  not (give a,b,c which is the 3 length of triangle)
# 6. try this following algorith
#  i. print a if number <5
#  ii. print b if number lies 10-20
#  iii. print c if number lies 21-30
#  iv. print d if number lies 31-40
#  v. print e if number lies 41-50
#  vi. print f if number lies >50


# 7. aparna got a marks in exam write a code to find her grade
# i. grade O if marks [90-100]
# ii. grade A+ if marks [80-89]
# iii. A if marks [70-79]
# iv. B+ if marks [60-69]
# v. B if marks [50-59]
# vi. Fail if marks [<50]

# print(((3&5)|7)^5)
# print(7^5)
# 9. 23|12
# 10. 5^8
# 11. 1^2^3
# 12. 9>>3
# 13. 10<<4
# 14. ((3&5)|7)^5)

# 15. what is complement of binary ,1's complement and what is 2's complement ?-> bitwise not

# if(True):
#     print("I am inside if")

# else:
#     print("I am not inside")

# a = 7
# b = ~a
# print(b)


#loop
# 1. for  loop
# 2. while loop
# 1. for

# for veriable_name in range(value):
#     print("loop")


#write a program which can print a number is even or odd in a given range.

# r = 11
# for i in range(r):
#     if(i&1==0):
#         print(i,"is even")
#     else:
#         print(i,"is odd")



# for i in range(5,11):
#     print(i)

#write a program which can print only 3's multiple in a given range.
# r = 50
# for i in range(r):
#     if ((i+1)%3==0):
#         print(i+1,"is divisble by 3")
#     else:
#         print(i+1,"is not divisible by 3")



# ~4
# ~6
# ~9

#write a program which can print if a number divisible by 3 and 5 from (1-100)
#write a program which can print if a number is divisible by 3&5 both , only 3 , only 5 , not divisibe by 3 0r 5 from 1-100

#write a program which can print even and 5's multiple means (10,20,30) and odd 5's multiple means(5,15,25) from 0-100

# for i in range(0,101):
#     if(i%5==0) and (i&1==0):
#         print(i,"is divisible by 5 and they are even.")
#     elif(i%5==0) and (i&1==1):
#         print(i,"is  divisible by 5 and they are odd.")


#write a program in python which can print 2's table like 
# 2*1 = 2
# 2*2 = 4
# 2*3 = 6
# ... so on
# for i in range(1,11):
#     print("2 *",i,"=",i*2)
#print a program which can print even number which is divisible by 7 & 9 both from 1-1000

#identation in python & delete replit


#if - else ladder
# when we use if-else inside another if-else this is called if-else ladder.


#write a program which can print then increment order of 3 values
# a = 17
# b = 50
# c = 70

# if(a>b and a>c):
#     if(b>c):
#         print(a,">",b,">",c)
#     else:
#         print(a,">",c,">",b)

# elif(b>a and b>c):
#     if(a>c):
#         print(b,">",a,">",c)
#     else:
#         print(b,">",c,">",a)
# elif(c>a and c>b):
#     if(a>b):
#         print(c,">",a,">",b)
#     else:
#         print(c,">",b,">",a)

# 10,20,20
# 20=20>10
# 10,10,10
# 10=10=10
# 30,30,10
# 30=30>10


#for loop advance
# for i in range(10,-1,-1):
#     print(i)

#WRITE A PROGRAM WHICH CAN PRINT EVEN NUMBER FROM 100 TO 1
# for i in range(100,-1,-2):
#     print(i)



# 1. aparna
# 2. aparna
# 3. aparna
# ... 100.aparna



# 100. aparna
# 99. aparna 
# ... 
# 1. aparna


# 1
# 2
# 3
# 4
# 5
# ..
# 50
# 49
# 48
# ...
# 3
# 2
# 1

# what is string in python?

