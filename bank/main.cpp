//  main.cpp
//  bank
//
//  Created by Devanshi  Shah on 29/01/19.
//  Copyright © 2019 Devanshi  Shah. All rights reserved.

#include <iostream>

class bank
{
private:
    char nm[10];
    int dp,amtd,amtw;
public:
    int ch,acno;
    void account()
    {
            std::cout<<"Enter name:"<<std::endl;
            std::cin>>nm;
            std::cout<<"Enter account number"<<std::endl;
            std::cin>>acno;
            std::cout<<"Enetr initial deposit"<<std::endl;
            std::cin>>dp;
        
    }
    
    void deposit()
    {
        std::cout<<"How much amount you want to deposit?? "<<std::endl;
        std::cin>>amtd;
        dp=dp+amtd;
        std::cout<<"Your total balance is: "<<dp<<std::endl;
    }
    
    void withdraw()
    {
        std::cout<<"How much amount you want to withdraw?? "<<std::endl;
        std::cin>>amtw;
        dp=dp-amtw;
        std::cout<<"Your total balance is: "<<dp<<std::endl;
    }
    
    void balance()
    {
        std::cout<<"You total balance is "<<dp<<std::endl;
    }
};

int main()
{
    bank b[10];
    int ch,i,n= 0;
    while(1)
    {
    std::cout<<" 1.New Account\n 2.Deposit\n 3.Withdraw\n Enter your choice"<<std::endl;
    std::cin>>ch;
    
    if (ch==1)
    {
        std::cout<<"how many details you want to enter?"<<std::endl;
        std::cin>>n;
        
        for (i=0;i<n;i++)
        {
            b[i].account();
        }
    }
        
        if(ch==2)
        {
            int ano;
            std::cout<<"Enter your account number: ";
            std::cin>>ano;
            
            for(i=0;i<n;i++)
            {
                if(ano==b[i].acno)
                {
                    b[i].deposit();
                    break;
                }
            }
        }
        
        if(ch==3)
        {
            
            int ano;
            std::cout<<"Enter your account number: ";
            std::cin>>ano;
            
            for(i=0;i<n;i++)
            {
                if(ano==b[i].acno)
                {
                    b[i].withdraw();
                    break;
                }
            }
        }
        
        if(ch==4)
        {
            
            int ano;
            std::cout<<"Enter your account number: ";
            std::cin>>ano;
            
            for(i=0;i<n;i++)
            {
                if(ano==b[i].acno)
                {
                    b[i].balance();
                    break;
                }
            }
        }
    }
}
