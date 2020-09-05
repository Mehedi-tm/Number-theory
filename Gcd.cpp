/*gcd means jodi amake a and b duita value dewa hoi and eder gcd ber korte bola hoi then amar step gula hobe emon--
1.a and b ke ekta a*b grid hisebe kolpona korbo.
2.emon ekta maximum value x lagbe jeta diye asole a*b size er grid ke fill up kora jabe.
eikahne ekta jinis holo jodi amader ekta jaigai emon hobe x er ekta value diye amra ekta grid er 4 bhag er 3 bhag e fill up kore felci ta hole baki 1 bhag jeita diye fill up korbo 
oita e gcd.mane baki 1 bhag use kore amra pura gcd ber korte parbo.
e jonno jei jinista use korte hobe seta hocce a,b er jonno jotokkhon porjonto na b er man 0 na hocce totokkhon porjonto loop cholbe and b er value ke a te rakhbo and a%b ke b te
rakhbo.jodi amader a kokhono b er caite choto hoi jemon a=10 b=15 then jokhn amra a%b korbo tokhn value hobe tokhn kintu boro value ta a te jabe and choto jeta ota b te jabe.
amra eta e korbo always a ke boro rakhbo.a%b==0 ase tar mane a and b duitake e fill up korbe..b ke amra always minimum kore rakhbo.
jemon jodi a er value 15 ar b er value 10 hoi then the following algorithm is-------------
1.a=15%10=5//tar mane b diye a ke divide korar pore 5 baki ace ekhono.
2.swap(a,b);//ekhn amra a er modde b ke rakhbo and b er modde a ke rakhbo.. 
3.ekhn amra dekhbo remainder diye b ke divide kora jai kina eta cholte thakbe jotokkhon porjonto b ke divide kora jai..../*

#include<bits/stdc++.h>
using namespace std;
void gcd(int a, int b)
{
while(b)
{
int a=a%b;
swap(a,b);
}
return a;
}
int main()
{
int a,b;
cin>>a>>b;
gcd(a,b);
}
