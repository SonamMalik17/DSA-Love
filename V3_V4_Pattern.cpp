#include<iostream>
using namespace std;
int main()
{


    // Pattern-1
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    int i=1;
    while(i<=r)
    {
        int j=1;
        while(j<=r)
        {
            cout<<"*"<<"\t";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }


    // Pattern-2
    int row;
    int k=1;
    cout<<"Enter no. of rows : ";
    cin>>row;
    while(k<=row)
    {
        int l=1;
        while(l<=row)
        {
            cout<<k<<"\t";
            l=l+1;
        }
        cout<<endl;
        k=k+1;
    }


    // Pattern-3
    int row1;
    int m=1;
    cout<<"Enter no. of rows : ";
    cin>>row1;
    while(m<=row1)
    {
        int n=1;
        while(n<=row1)
        {
            cout<<n<<"\t";
            n=n+1;
        }
        m=m+1;
        cout<<endl;
    }


    // Pattern-4
    int row2;
    int o=1;
    cout<<"Enter no. of rows : ";
    cin>>row2;
    while(o<=row2)
    {
        int p=1;
        while(p<=row2)
        {
            cout<<(row2-p+1)<<"\t";
            p=p+1;
        }
        o=o+1;
        cout<<endl;
    }


    // Pattern-5, Method 1
    int row3;
    int q=0;
    cout<<"Enter no. of rows : ";
    cin>>row3;
    while(q<row3)
    {
        int c=0;
        int s=row3*q;
        while(c<row3)
        {
            cout<<(s+1)<<"\t";
            s=s+1;
            c=c+1;
        }
        cout<<endl;
        q=q+1;
    }

    // Pattern-5, Method 2
    int row4;
    int count=1;
    int t=1;
    cout<<"Enter no. of rows : ";
    cin>>row4;
    while(t<=row4)
    {
        int u=1;
        while(u<=row4)
        {
            cout<<count<<"\t";
            count=count+1;
            u=u+1;
        }
        cout<<endl;
        t=t+1;
    }


    // Pattern-6
    int row5;
    int u=1;
    cout<<"Enter no. of rows : ";
    cin>>row5;
    while(u<=row5)
    {
        int v=0;
        while(v<u)
        {
            cout<<"*"<<"\t";
            v=v+1;
        }
        cout<<endl;
        u=u+1;
    }


    // Pattern-7
    int row6;
    int w=1;
    cout<<"Enter no. of rows : ";
    cin>>row6;
    while(w<=row6)
    {
        int x=0;
        while(x<w)
        {
            cout<<w<<"\t";
            x=x+1;
        }
        cout<<endl;
        w=w+1;
    }


    // Pattern-8, HW
    int row7;
    int y=1;
    int z=1;
    cout<<"Enter no. of rows : ";
    cin>>row7;
    while(y<=row7)
    {   
        int count=0;
        while(count<y)
        {
            cout<<z<<"\t";
            z=z+1;
            count=count+1;
        }
        cout<<endl;
        y=y+1;
    }



    // Pattern-9, Method1
    int row8;
    int i1=1;
    cout<<"Enter the no. of rows : ";
    cin>>row8;
    while(i1<=row8)
    {
        int j1=i1;
        int k1=1;
        while(k1<=i1)
        {
            cout<<j1<<"\t";
            j1=j1+1;
            k1=k1+1;
        }
        cout<<endl;
        i1=i1+1;
    }




    // Patern-9, HW-Method2
    int row9;
    int i2=1;
    cout<<"Enter the no. of rows : ";
    cin>>row9;
    while(i2<=row9)
    {
        int k2=0;
        while(k2<i2)
        {
            cout<<i2+k2<<"\t";
            k2=k2+1;
        }
        cout<<endl;
        i2=i2+1;
    }


    // Pattern-10
    int row10;
    int i3=1;
    cout<<"Enter the no. of rows : ";
    cin>>row10;
    while(i3<=row10)
    {
        int k3=0;
        while(k3<i3)
        {
            cout<<i3-k3<<"\t";
            k3=k3+1;
        }
        cout<<endl;
        i3=i3+1;
    }



    // Pattern-11, Method1
    int row11;
    char ch='A';
    int i4=1;
    cout<<"Enter the no. of rows : ";
    cin>>row11;
    while(i4<=row11)
    {
        int k4=1;
        while(k4<=row11)
        {
            cout<<ch<<"\t";
            k4=k4+1;
        }
        cout<<endl;
        ch=ch+1;
        i4=i4+1;
    }



    // Pattern-11, Method2
    int row12;
    char ch1='A';
    int i5=1;
    cout<<"Enter the no. of rows : ";
    cin>>row12;
    while(i5<=row12)
    {
        int k5=1;
        while(k5<=row12)
        {
            char ch1='A'+ i5 - 1;
            cout<<ch1<<"\t";
            k5=k5+1;
        }
        cout<<endl;
        i5=i5+1;
    }



    // Pattern-12, HW-Method1
    int row13;
    int i6=1;
    cout<<"Enter the no. of rows : ";
    cin>>row13;
    while(i6<=row13)
    {
        char ch2='A';
        int k6=1;
        while(k6<=row13)
        {
            cout<<ch2<<"\t";
            ch2=ch2+1;
            k6=k6+1;
        }
        cout<<endl;
        i6=i6+1;
    }



    // Pattern-12, Method2
    int row14;
    char ch3='A';
    int i7=1;
    cout<<"Enter the no. of rows : ";
    cin>>row14;
    while(i7<=row14)
    {
        int k7=1;
        while(k7<=row14)
        {
            char ch3='A'+ k7 - 1;
            cout<<ch3<<"\t";
            k7=k7+1;
        }
        cout<<endl;
        i7=i7+1;
    }



    // Pattern-13, HW
    int row15;
    int i8=1;
    char ch4='A';
    cout<<"Enter the no. of rows : ";
    cin>>row15;
    while(i8<=row15)
    {
        int k8=1;
        while(k8<=row15)
        {
            cout<<ch4<<"\t";
            ch4=ch4+1;
            k8=k8+1;
        }
        cout<<endl;
        i8=i8+1;
    }



    // Pattern-14, Method1
    int row16;
    int i9=1;
    cout<<"Enter the no. of rows : ";
    cin>>row16;
    while(i9<=row16)
    {
        char ch5='A'+i9-1;
        int k9=1;
        while(k9<=row16)
        {
            cout<<ch5<<"\t";
            ch5=ch5+1;
            k9=k9+1;
        }
        cout<<endl;
        i9=i9+1;
    }



    // Pattern-14, Method2
    int row17;
    int m1=1;
    cout<<"Enter the no. of rows : ";
    cin>>row17;
    while(m1<=row17)
    {
        int n1=1;
        while(n1<=row17)
        {
            char ch6='A'+m1+n1-2;
            cout<<ch6<<"\t";
            n1=n1+1;
        }
        cout<<endl;
        m1=m1+1;
    }
    


    // Pattern-15, Method1
    int row18;
    int m2=1;
    char ch7='A';
    cout<<"Enter the no. of rows : ";
    cin>>row18;
    while(m2<=row18)
    {
        int n2=1;
        while(n2<=m2)
        {
            cout<<ch7<<"\t";
            n2=n2+1;
        }
        cout<<endl;
        ch7=ch7+1;
        m2=m2+1;
    }
    


    // Pattern-15, Method2
    int row19;
    int m3=1;
    cout<<"Enter the no. of rows : ";
    cin>>row19;
    while(m3<=row19)
    {
        int n3=1;
        while(n3<=m3)
        {
            char ch8='A'+m3-1;
            cout<<ch8<<"\t";
            n3=n3+1;
        }
        cout<<endl;
        m3=m3+1;
    }


    // Pattern-16
    int row20;
    int m4=1;
    char ch9='A';
    cout<<"Enter the no. of rows : ";
    cin>>row20;
    while(m4<=row20)
    {
        int n4=1;
        while(n4<=m4)
        {
            cout<<ch9<<"\t";
            ch9=ch9+1;
            n4=n4+1;
        }
        cout<<endl;
        m4=m4+1;
    }
    


    // Pattern-17, Method1
    int row21;
    int m5=1;
    cout<<"Enter the no. of rows : ";
    cin>>row21;
    while(m5<=row21)
    {
        int n5=1;
        while(n5<=m5)
        {
            char ch10='A'+m5+n5-2;
            cout<<ch10<<"\t";
            n5=n5+1;
        }
        cout<<endl;
        m5=m5+1;
    }



    // Pattern-17, Method2
    int row22;
    int m6=1;
    cout<<"Enter the no. of rows : ";
    cin>>row22;
    while(m6<=row22)
    {
        int n6=1;
        char ch11='A'+m6-1;
        while(n6<=m6)
        {
            cout<<ch11<<"\t";
            ch11=ch11+1;
            n6=n6+1;
        }
        cout<<endl;
        m6=m6+1;
    }




    // Pattern-18, Method1
    int row23;
    int m7=1;
    cout<<"Enter the no. of rows : ";
    cin>>row23;
    while(m7<=row23)
    {
        int n7=1;
        while(n7<=m7)
        {
            char ch11='A'+row23-m7+n7-1;
            cout<<ch11<<"\t";
            n7=n7+1;
        }
        cout<<endl;
        m7=m7+1;
    }



    // Pattern-18, Method2
    int row24;
    int m8=1;
    cout<<"Enter the no. of rows : ";
    cin>>row24;
    while(m8<=row24)
    {
        int n8=1;
        char ch13='A'+row24-m8;
        while(n8<=m8)
        {
            cout<<ch13<<"\t";
            ch13=ch13+1;
            n8=n8+1;
        }
        cout<<endl;
        m8=m8+1;
    }



    // Pattern-19, Method1
    int row25;
    int m9=1;
    cout<<"Enter the no. of rows : ";
    cin>>row25;
    while(m9<=row25)
    {
        int n9=1;
        while(n9<=(row25-m9))
        {
            cout<<" "<<"\t";
            n9=n9+1;
        }
        n9=1;
        while(n9<=m9)
        {
            cout<<"*"<<"\t";
            n9=n9+1;
        }
        cout<<endl;
        m9=m9+1;
    }



    // Pattern-19, Method2
    int row26;
    int m10=1;
    cout<<"Enter the no. of rows : ";
    cin>>row26;
    while(m10<=row26)
    {
        int space=row26-m10;
        while(space)
        {
            cout<<" "<<"\t";
            space=space-1;
        }
        int n10=1;
        while(n10<=m10)
        {
            cout<<"*"<<"\t";
            n10=n10+1;
        }
        cout<<endl;
        m10=m10+1;
    }



    // Pattern-20, HW
    int row27;
    int m11=1;
    cout<<"Enter the no. of rows : ";
    cin>>row27;
    while(m11<=row27)
    {
        int star=row27-m11+1;
        while(star)
        {
            cout<<"*"<<"\t";
            star=star-1;
        }
        cout<<endl;
        m11=m11+1;
    }



    // Pattern-21, HW
    int row28;
    int m12=1;
    cout<<"Enter the no. of rows : ";
    cin>>row28;
    while(m12<=row28)
    {
        int space1=m12-1;
        while(space1)
        {
            cout<<" "<<"\t";
            space1=space1-1;
        }
        int n12=1;
        while(n12<=(row28-m12+1))
        {
            cout<<"*"<<"\t";
            n12=n12+1;
        }
        cout<<endl;
        m12=m12+1;
    }



    // Pattern-22, HW
    int row29;
    int m13=1;
    cout<<"Enter the no. of rows : ";
    cin>>row29;
    while(m13<=row29)
    {
        int space2=m13-1;
        while(space2)
        {
            cout<<" "<<"\t";
            space2=space2-1;
        }
        int n13=1;
        while(n13<=(row29-m13+1))
        {
            cout<<m13<<"\t";
            n13=n13+1;
        }
        cout<<endl;
        m13=m13+1;
    }



    // Pattern-23, HW
    int row30;
    int m14=1;
    cout<<"Enter the no. of rows : ";
    cin>>row30;
    while(m14<=row30)
    {
        int space3=row30-m14;
        while(space3)
        {
            cout<<" "<<"\t";
            space3=space3-1;
        }
        int n14=1;
        while(n14<=m14)
        {
            cout<<m14<<"\t";
            n14=n14+1;
        }
        cout<<endl;
        m14=m14+1;
    }



    // Pattern-24, HW
    int row31;
    int m15=1;
    cout<<"Enter the no. of rows : ";
    cin>>row31;
    while(m15<=row31)
    {
        int space4=m15-1;
        while(space4)
        {
            cout<<" "<<"\t";
            space4=space4-1;
        }
        int n15=m15;
        while(n15<=row31)
        {
            cout<<n15<<"\t";
            n15=n15+1;
        }
        cout<<endl;
        m15=m15+1;
    }



    // Pattern-25, HW
    int row32;
    int m16=1;
    int value=1;
    cout<<"Enter the no. of rows : ";
    cin>>row32;
    while(m16<=row32)
    {
        int space5=row32-m16;
        while(space5)
        {
            cout<<" "<<"\t";
            space5=space5-1;
        }
        int n16=1;
        while(n16<=m16)
        {
            cout<<value<<"\t";
            value=value+1;
            n16=n16+1;
        }
        cout<<endl;
        m16=m16+1;
    }


    // Pattern-26
    int row33;
    int m17=1;
    cout<<"Enter the no. of rows : ";
    cin>>row33;
    while(m17<=row33)
    {
        int space6=row33-m17;
        while(space6)
        {
            cout<<" "<<"\t";
            space6=space6-1;
        }
        int n17=1;
        while(n17<=m17)
        {
            cout<<n17<<"\t";
            n17=n17+1;
        }
        n17=n17-2;
        while(n17)
        {
            cout<<n17<<"\t";
            n17=n17-1;
        }
        cout<<endl;
        m17=m17+1;
    }


    // Pattern-27, HW
    int row34;
    int m18=1;
    cout<<"Enter the no. of rows : ";
    cin>>row34;
    while(m18<=row34)
    {
        int n18=1;
        while(n18<=(row34-m18+1))
        {
            cout<<n18<<"\t";
            n18=n18+1;
        }
        int stary=2*(m18-1);
        while(stary)
        {
            cout<<"*"<<"\t";
            stary=stary-1;
        }
        n18=n18-1;
        while(n18)
        {
            cout<<n18<<"\t";
            n18=n18-1;
        }
        cout<<endl;
        m18=m18+1;
    }



    return 0;
}