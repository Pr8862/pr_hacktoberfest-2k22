#include<iostream>            
using namespace std;

class complex{             
    private:
        float real;                       
        float img;
    public:
        complex(){                      // not necessary
            real=0;                     //  just for initializing the values = 0
            img=0;
        }                         
        complex(float real, float img){
            this->real=real;
            this->img=img;
        }                           
        complex(complex &c){                // copy constructor
            real=c.real;
            img=c.img;
        }                           
        void showData(){
            if (img<0)
                {
                    cout<<real<<img<<"j"<<endl;                    
                }
            else
                {
                    cout<<real<<" + "<<img<<"j"<<endl;
                }    
        }

        complex addition(complex x, complex y){
            complex temp;
            temp.real= x.real + y.real; 
            temp.img= x.img + y.img;
            return temp; 
        }
        complex substraction(complex x, complex y){
            complex temp;
            temp.real= x.real - y.real; 
            temp.img= x.img - y.img;
            return temp; 
        }
        complex multiplication(complex x, complex y){
            complex temp;
            temp.real= x.real * y.real; 
            temp.img= x.img * y.img;
            return temp; 
        }
        complex division(complex x, complex y){
            complex temp;
            temp.real= x.real / y.real; 
            temp.img= x.img / y.img;
            // temp.real =((x.real*y.real)+(x.img+y.img))/((y.real*y.real)+(y.img*y.img));
            // temp.img =((x.img*y.real)-(x.real*y.img))/((y.real*y.real)+(y.img*y.img));
            return temp; 
        }
   
};



int main()
{
    float a,b,c,d;
    cout<<"Enter the real  part of complex no.1 : "<<endl;
    cin>>a;
    cout<<"Enter the imaginary part of complex no.1 : "<<endl;
    cin>>b;
    cout<<"Enter the real  part of complex no.2 : "<<endl;
    cin>>c;
    cout<<"Enter the imaginary part of complex no.2 : "<<endl;
    cin>>d;

    complex c1(a,b), c2(c1), c3(c,d), c4, c5, c6, c7;
    cout<<"The first complex no is : "<<endl;
    c1.showData();
    cout<<"Result of copy constructor is : "<<endl;
    c2.showData();

    c4=c4.addition(c1,c3);
    cout<<"After addition the complex no. is : "<<endl;                    
    c4.showData();

    c5=c5.substraction(c1,c3);
    cout<<"After substraction the complex no. is : "<<endl;                    
    c5.showData();

    c6=c6.multiplication(c1,c3);
    cout<<"After multiplication the complex no. is : "<<endl;                    
    c6.showData();

    c7=c7.division(c1,c3);
    cout<<"After division the complex no. is : "<<endl;                    
    c7.showData();

    // cout<<"After addition the complex no. is : "<<real<<img<<"j"<<endl;                    

    

    return 0;
}
