#include <iostream>
/*
 * ????????,??????,????????????????,????,
 * ??????????????,?????,????????????????
 * ??,?????,?????????????,?????,???,???,?
 * ????????,???????????????????????
 */
int monkey(int num,int peach);
int main()
{
for (int i = 1; i<=4000; i++)
{
    monkey(5,i);
}

return 0;
}
int monkey(int num,int peach)
{
    if (num==0)
    {
    std::cout<<"complete"<<std::endl;
    return 1;
    }
    if (peach%5!=1)
        return -1;
    else
    {
        int peach_new=(peach-1)*4/5;
        int num_new=num-1;
        int flag=monkey(num_new,peach_new);
        if (flag==1)
        {
        std::cout<<"for monkey num:"<<num<<"peaches num"<<peach<<std::endl;
        return 1;
        }
        else
        return -1;
    }
}
