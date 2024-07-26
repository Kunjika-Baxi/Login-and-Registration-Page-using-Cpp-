#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"\n\t-----Welcome-----";
    cout<<"\nEnter : \n1.Sign-in (Already a User)\n2.Sign-up (New User)";
    int ch;
    cout<<"\nEnter Your Choice : ";cin>>ch;
    if(ch==1)
    {
        string uname = "User";
        string pass = "User@2019";
        string nuname,npass;
        while(1)
        {
        cout<<"\nEnter User Name : ";cin>>nuname;fflush(stdin);
        if(nuname!=uname)
        {
            cout<<"\n Invalid User Name!!";
        }
        else 
        break;
        }
        while(1)
        {
        cout<<"\nEnter Password : ";cin>>npass;fflush(stdin);
        if(npass!=pass)
        {
            cout<<"\n Invalid Password!!";
        }
        else 
        break;
        }
        printf("\nYou have Logged-in Successfully...");
    }
    else 
    {
        string name,cn,email,user,gnpass,cpass;
        cout<<"\n\t-----Registration Page-----";
        cout<<"\nEnter Name : ";cin>>name;fflush(stdin);
        while(1)
        {
        cout<<"\nEnter Contact Number : ";cin>>cn;fflush(stdin);
        if(cn.length()!=10)
        {
            cout<<"\nEnter Valid Contact Number !! ";
        }
        else 
        {
            break;
        }
        }
        while(1)
        {
        cout<<"\nEnter Email-ID : ";cin>>email;fflush(stdin);
        int eg=0;
        for(int i=0;i<email.length();i++)
        {
            if(email[i]>='A' && email[i]<='Z')
            eg++;
        }
        if(eg>0)
        {
            cout<<"\nEnter Valid Email ID !! ";
        }
        else 
        break;
        }
        cout<<"\nEnter User Name : ";cin>>user;fflush(stdin);
        int digit=0,up=0,lc=0,spc=0;
        while(1)
        {
             cout<<"\nEnter Password : (Must Contain : Single Capital and small alphabet, single digit and a special symbol (#, _ or @ )) : ";cin>>gnpass;
            if(gnpass.length()>=8 && gnpass.length()<=15)
            {
                for(int i=0;i<gnpass.length();i++)
                {
                    if(gnpass[i]>='0' && gnpass[i]<='9')
                    digit++;
                    else if(gnpass[i]>='a' && gnpass[i]<='z')
                    lc++;
                    else if(gnpass[i]>='A' && gnpass[i]<='Z')
                    up++;
                    else if(gnpass[i]=='@' ||  gnpass[i]=='_' || gnpass[i]=='#')
                    spc++;
                 }
                 if(digit==0 || lc==0 || up==0 || spc==0)
                {
                      cout<<"\nEnter Strong Password ! ";
                }
                else 
                {
                    break;
                }
            }
            else 
            {
                cout<<"\nEnter Valid Password ! ";
            }
        }
        while(1)
        {
            cout<<"\nConfirm Password : ";cin>>cpass;
            if(cpass!=gnpass)
            {
                cout<<"\nEnter Valid Confirm Password !! ";
            }
            else 
            {
                break;
            }
        }
        string code;
        cout<<"\nWe have sent a Verfication Code : Please Verify : ";
        cout<<"\nVerification Code : ";
        for (int i=0;i<6;i++)
        {
            cout<<(rand()%9);
        }
            cout<<"\nEnter Verification Code : ";cin>>code;
            for(int i=0;i<code.length();i++)
            {
                if(code.length()==6 && (code[i]>='0' && code[i]<='9'))
                {
                    cout<<"\nYou have been Verified Successfully... \nThank you.";break;
                }
                else 
                {
                    cout<<"\nInvalid Verification Code !! \nPlease Try Again Later..";break;
                }
            }
    }
}
