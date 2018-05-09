//link: https://projecteuler.net/thread=17;page=7
//author: Yashar_H

#include <iostream>
using namespace std;
void digit1(int a);
void digit2(int a);
void digit3(int a);
int l=8984; // number of letters for "one thousand", "hundred"s and "and"s(note that "and" is not used if i is divisible by 100).
int main()
{
	int i;
	for(i=1; i<1000; i++)
	{
		if(i<10) digit1(i);
		else if(i<100) digit2(i);
		else digit3(i);
	}
	cout << l;
	return 0;
}
void digit1(int a)
{
	switch(a)
	{
		    case 0:
			    break;
			case 1:
			case 2:
			case 6: l+=3;
				break;
			case 4:
			case 5:
			case 9: l+=4;
				break;
			default: l+=5;
	}
	return;
}
void digit2(int a)
{
	if(a<20)
	{
		switch(a)
		{
		case 10: l+=3;
			    break;
		case 11:
		case 12: l+=6;
				break;
		case 15:
		case 16: l+=7;
				break;
		case 17: l+=9;
				break;
		default: l+=8;
	    }
	}
	else
	{
		int j=a%10;
		a/=10;
		switch(a)
		{
		case 7: l+=7;
			break;
		case 4:
		case 5:
		case 6: l+=5;
		    break;
		default: l+=6;
	    }
	    digit1(j);
	}
}
void digit3(int a)
{
	int k;
	k=a/100;
	digit1(k);
	a%=100;
	if(a>=10) digit2(a);
	else digit1(a);
}

//link: http://blog.csdn.net/liaoxingyi/article/details/7536709

static void Main(string[] args)  
{  
    // null one two three four five six seven eight nine  
    int[] one2nine = new int[]{0, 3, 3, 5, 4, 4, 3, 5, 5, 4};  
  
    // null null twenty thirty forty  
    // fifty sixty seventy eighty ninety  
    int[] tens = new int[] { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };  
  
    // ten eleven twelve thirteen fourteen  
    // fifteen sixteen seventeen eighteen nineteen  
    int[] ten2nineteen = new int[] { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };  
  
    int sum = 0;  
  
    // 百位  
    for (int i = 0; i < 10; i++)  
    {  
        // 十位  
        for (int j = 0; j < 10; j++)  
        {  
            // 个位  
            for (int k = 0; k < 10; k++)  
            {  
                // 11-19 特殊处理  
                if (j != 1)  
                    sum += one2nine[i] + tens[j] + one2nine[k];  
                else  
                    sum += one2nine[i] + ten2nineteen[k];  
  
                // 大于100, + hundred and  
                if (i > 0)  
                    sum += 10;  
                // 整百, - and  
                if (i > 0 && j + k == 0)  
                    sum -= 3;  
            }  
        }  
  
    }  
    sum += 11;  // + one thousand  
    Console.WriteLine(sum);  
}  