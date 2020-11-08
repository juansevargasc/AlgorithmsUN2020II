︠783ab433-fd00-4241-b653-e9d6bd2815c3︠
# LAB 5
︡56937901-6955-4363-8fd7-56b38ee8904f︡{"done":true}
︠21844bdf-e228-4e3d-b1ea-a38bb47d547b︠
#1. Polinomyals
# (x-2)(x-4)(x-6)(x-8) = 384 - 400 x + 140 x^2 - 20 x^3 + x^4

# (x^5 - 15 x^4  + 85 x^3 - 225 x^2 + 274 x - 120) / (x-1) = x^4  - 14 x^3  + 71 x^2  - 154 x + 120
︡79888740-01f1-433c-a162-4b391dfa7e29︡
︠434517b8-4bc8-4afd-9d11-95e9aa92c92d︠

︡7e106a5c-35d6-4161-a20f-b7a85d446ac3︡
︠bbd759ca-99af-46ba-ac5e-4eb3f08c0371︠
%var x, equis
︡5d0a1358-2e51-4b02-8d3c-b50b1f51521d︡{"done":true}
︠4ee6d07f-57bb-4560-a9e4-2c414d3b841bs︠
pol = 384 - 400*x + 140*x**2 - 20*x**3 + x**4; pol

︡8a2b89bc-c0f6-4fb5-8e1a-8dc67332d660︡{"stdout":"x^4 - 20*x^3 + 140*x^2 - 400*x + 384\n"}︡{"done":true}
︠8ad62c2c-080d-4168-9840-25c67e9e9390s︠
res = pol / (x - 2); res
res = pol / (x - 4); res
res = pol / (x - 6); res
res = pol / (x - 8); res

︡141aea76-fdaa-4a8d-be27-95c404c06fb4︡{"stdout":"(x^4 - 20*x^3 + 140*x^2 - 400*x + 384)/(x - 2)\n"}︡{"stdout":"(x^4 - 20*x^3 + 140*x^2 - 400*x + 384)/(x - 4)\n"}︡{"stdout":"(x^4 - 20*x^3 + 140*x^2 - 400*x + 384)/(x - 6)\n"}︡{"stdout":"(x^4 - 20*x^3 + 140*x^2 - 400*x + 384)/(x - 8)\n"}︡{"done":true}
︠44936340-2338-4fb3-9416-f73619269d4cs︠

res.expand()

︡2986effa-82d5-470d-b12c-141a540bb741︡{"stdout":"x^4/(x - 1) - 20*x^3/(x - 1) + 140*x^2/(x - 1) - 400*x/(x - 1) + 384/(x - 1)\n"}︡{"done":true}
︠a2fd7ae1-ff89-4628-be80-b04396726375︠
# 2. Factor
factor(pol)
︡ba364e2a-d1ae-4b9f-a789-8488a02fff2f︡{"stdout":"(x - 2)*(x - 4)*(x - 6)*(x - 8)\n"}︡{"done":true}
︠8cdd59ba-b163-474f-95e8-d7cd6ed3710b︠

︡87feb192-96d9-4c58-aef6-a373901d0a1f︡{"stdout":"x^5/(x - 1) - 15*x^4/(x - 1) + 85*x^3/(x - 1) - 225*x^2/(x - 1) + 274*x/(x - 1) - 120/(x - 1)\n"}︡{"done":true}
︠e3f110e9-1383-426f-8fc5-d4967851bf3cs︠
print("")
︡a004429d-ecc8-4c2b-9f57-a5f90937f40b︡{"stdout":"\n"}︡{"done":true}
︠5a59f71e-a785-4b50-bfaf-f233f15e3cf4s︠

# 3. Solvers
solve(pol, x)

︡82a972dc-c2d8-47aa-ac9e-b466fef3c19f︡{"stdout":"[x == 8, x == 4, x == 6, x == 2]"}︡{"stdout":"\n"}︡{"done":true}
︠c1a24421-6212-45d0-8c29-a77ef47e3624s︠
# 4. Symbolic and numerical complex
x1, x2, y1, y2, z1, z2 = var("x1 x2 y1 y2 z1 z2")
x = 2*x1 + I*x2
y = 3*y1 + I*y2
z = 9*z1 + I*z2
print(x*y*z)
print(expand(x*y*z))
print(expand((x*y)*z))
print(expand(x*(y*z)))

w = N(21/(pi + I), 10)
print('w =',w)
︡76419983-a6b0-46d1-9531-c953c6fd4d88︡{"stdout":"(2*x1 + I*x2)*(3*y1 + I*y2)*(9*z1 + I*z2)\n"}︡{"stdout":"54*x1*y1*z1 + 27*I*x2*y1*z1 + 18*I*x1*y2*z1 - 9*x2*y2*z1 + 6*I*x1*y1*z2 - 3*x2*y1*z2 - 2*x1*y2*z2 - I*x2*y2*z2\n"}︡{"stdout":"54*x1*y1*z1 + 27*I*x2*y1*z1 + 18*I*x1*y2*z1 - 9*x2*y2*z1 + 6*I*x1*y1*z2 - 3*x2*y1*z2 - 2*x1*y2*z2 - I*x2*y2*z2\n"}︡{"stdout":"54*x1*y1*z1 + 27*I*x2*y1*z1 + 18*I*x1*y2*z1 - 9*x2*y2*z1 + 6*I*x1*y1*z2 - 3*x2*y1*z2 - 2*x1*y2*z2 - I*x2*y2*z2\n"}︡{"stdout":"w = 6.1 - 1.9*I\n"}︡{"done":true}
︠5ab5ff05-a539-4caf-83cf-a91863255ac7︠
# 5. Integral
t = var('t')
integral = integrate(cos(2*t), t); integral

#Analitycal, Integrate cos2t from 0 to 3/4 pi
res = integrate(cos(2*t), t, 0, (3/4)*pi)
print('Res: ', res)
︡84a3231d-401f-4baa-87e5-483b1e1bb05f︡{"stdout":"1/2*sin(2*t)\n"}︡{"stdout":"Res:  -1/2\n"}︡{"done":true}
︠9b4d7c23-012c-4e01-a437-2af3f5f1d280s︠
plot(cos(2*t))
︡9d63f7f1-be3f-4e0a-97b6-ad5cf39c1fe0︡{"file":{"filename":"/home/user/.sage/temp/project-59a84fdb-6832-46f0-9b31-3484cbe11c38/720/tmp_dtjm9k7q.svg","show":true,"text":null,"uuid":"d54fb405-8988-4195-8491-78904beba182"},"once":false}︡{"done":true}
︠6e962eae-6a45-4511-9678-f0c129bd572a︠
#6. Integrating with Montecarlo
︡344f76c5-cdb7-4185-b85f-43f5ce615596︡
︠97b732da-e2c2-48f4-add8-b514215303d0s︠
import numpy
N = 1_000_000
accum = 0
for i in range(N):
    x = choice( range( Integer(3) ) )
    accum += cos(2*x)
volume = 5 - 1
result = volume * accum / float(N)
print("Standard Monte Carlo result: {}".format(result))
︡be6a7da1-963b-4c6f-9e50-49c4cdeee1c8︡{"stdout":"Standard Monte Carlo result: 1.333912*cos(4) + 1.3314599999999999*cos(2) + 1.334628\n"}︡{"done":true}
︠10697695-8f74-4e92-b6a5-6f9b54ccd0e8︠
#7. Integral multiplication two functions
t = var('t')
integral = integrate(sin(t)*exp(2*t), t); integral

︡63c2b84c-32e7-46d7-8262-62d3378b5fa7︡{"stdout":"-1/5*(cos(t) - 2*sin(t))*e^(2*t)"}︡{"stdout":"\n"}︡{"done":true}
︠24e4dcae-4919-4be0-93f2-a5b6e4d585f9s︠
#Analitycal, Integrate cos2t from 0 to 3/4 pi
res =  integrate(sin(t)*exp(2*t) , t, 0, (3/4)*pi)
print('Res: ', res)
︡46087625-fd2f-4c7d-852a-b7698ab9adf8︡{"stdout":"Res:  3/10*sqrt(2)*e^(3/2*pi) + 1/5\n"}︡{"done":true}
︠8af2ac91-071b-489e-9abf-ecb89dd8f075s︠
plot(sin(t)*exp(2*t))
︡26a9f78f-e023-4e7b-9524-61c6f3fc24a6︡{"file":{"filename":"/home/user/.sage/temp/project-59a84fdb-6832-46f0-9b31-3484cbe11c38/648/tmp_m04xiwms.svg","show":true,"text":null,"uuid":"e35dfe73-da86-4bf7-b45f-12487318df3e"},"once":false}︡{"done":true}
︠eaf6c67b-5ba3-403c-b668-2d8ce0479e5c︠
# 8. A higher dimensional integral
var('x, y, z')
expr = cos(x) + exp(y * z**2) + z**3
X =(expr).integrate(x, algorithm="sympy")
Y = (expr).integrate(y, algorithm="sympy")
Z = (expr).integrate(z, algorithm="sympy")
︡8303cbd6-cc4a-46cf-9ea9-ca25f240575f︡{"stdout":"(x, y, z)\n"}︡{"done":true}
︠676d721e-8709-4202-975e-36e1427d31cds︠
print("")
︡e7dcb9e6-a275-497f-a14c-28a6870d6b51︡{"stdout":"\n"}︡{"done":true}
︠56da0abf-91f5-476d-8c45-f18fadfb6fe0︠

︡2ff61659-19a4-4a95-b174-fa06e3ceead2︡
︠4d784176-2fe8-40d7-9ed9-f911502a47a6︠
#TESTS
x = choice(range(6)); x
with seed(0): test1()
︡8ed7eb41-9e35-45a8-9721-a655bb97ce78︡
︠f711ffcf-fadb-482d-8688-cfdf5b5d5924︠
#This is a test
plot(cos, (-5,5))
︡42cb8e93-fccf-45fd-8c4a-4853aa692015︡{"file":{"filename":"/home/user/.sage/temp/project-59a84fdb-6832-46f0-9b31-3484cbe11c38/628/tmp_2v7q94tn.svg","show":true,"text":null,"uuid":"7614e943-2330-493d-824b-d086a4460805"},"once":false}︡{"done":true}









