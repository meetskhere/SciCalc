#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#include<dos.h>


class calculator
{
 public :
 void Basic();
 void Geometrical();
 void Functional();
 void Series();
 void Matrix();
 void Statistics();
};

void main()
{
 clrscr();
 calculator calc;
 char  opt=' ';
 char ch=' ';
 cout<<"\n\n\n\t\t\tSCIENTIFIC CALCULATOR v1.0"<<endl;
 sleep(2);
 clrscr();
 cout<<"Welcomes YOU!!!"<<endl;
 do
 {
  clrscr();
  cout<<"Enter correct number against the given option"<<endl;
  cout<<"(a)Basic Calculator\n(b)Geometrical calculator\n(c)Functional Calculator\n(d)Series Calculator\n(e)Matrix Calculator\n(f)Statistical Calculator"<<endl;
  opt=getche();
  delay(500);
  clrscr();
  cout<<"Press any other key to exit from the system"<<endl;
  switch(opt)
  {
   case 'a':
   {
    cout<<"In this basic calculator segment, one can calculate elementary thingsthat is useful in day-to-day life. It includes adding, substracting, multiplying, dividing etc."<<endl;
    calc.Basic();
    break;
   }
   case 'b':
   {
    cout<<"In this geometrical calculator segment,one can find area and perimeter of a planer closed figure while surface area and volume of a solid closed body."<<endl;
    calc.Geometrical();
    break;
   }
   case 'c':
   {
    cout<<"In this functional calculation segment, one can calculate on elementary mathematical function with real entries and can even generate a table if they wish."<<endl;
    calc.Functional();
    break;
   }
   case 'd':
   {
    cout<<"In this series calculation segment, one can compute an entire Arithmetic, Geometric, Harmonic or Special series based on certain parameters as well as can identify whether the  entered sequence of numbers belongs to which series category."<<endl;
    calc.Series();
    break;
   }
   case 'e':
   {
    cout<<"In the Matrix calculation segment, one can do various elementary operation on one or more than one matrices and can also identify a matrix."<<endl;
    calc.Matrix();
    break;
   }
   case 'f':
   {
    cout<<"In the Statistical calculation segment, one can calculate certain  statistical-related work. This is just an upgraded version of case(I) utility."<<endl;
    calc.Statistics();
    break;
   }
   default :
   {
    cout<<"Logging off from the system"<<endl;
    sleep(3);
   }
  }
  cout<<"DO YOU WANT TO VIEW THE MAIN MENU?(Y/N)"<<endl;
  ch=getche();
 }while(ch=='Y'||ch=='y');

 int getch ();
}


void calculator::Basic()
{
 long int i=0, j=0;
 long int num=0;
 long double num1=0, num2=0;
 char ask=' ',choice=' ';
 do
 {
  cout<<"Enter correct number against the given option"<<endl;
  cout<<"(a)Factorial of a natural number\n(b)Checking of a prime number\n(c)Finding of prime numbers\n(d)Addition of two real numbers\n(e)Multiplication of two real numbers\n(f)Difference of two real numbers\n(g)Division of two real numbers\n(h)Factors of a given natural number"<<endl;
  cout<<"Enter your option: ";
  choice=getche();
  clrscr();
  sleep(1);
  switch(choice)
  {
   case 'a':
    {
     long int fact=1;
     int p=0;
     cout<<"Here you are about to find factorial of natural number"<<endl;
     cout<<"Enter a natural number: ";
     cin>>num;
     p=num;
     if(num==0||num==1)
     cout<<"The factorial of "<<num<<" is "<<fact<<endl;

     while(num>1)
     {
      fact=fact*num;
      num=num-1;
     }
     cout<<"The factorial of "<<p<<" is "<<fact<<endl;
     break;
    }
   case 'b':
    {
     cout<<"Here you are about to check whether a natural number is a prime number or not"<<endl;
     int pt=0;
     cout<<"Enter a natural number:"<<endl;
     cin>>num;
     if(num>3)
     {
      for(i=2; i<=sqrt(num);i++)
      {
       if(pt==0)
       {
	if(num%i==0)
	{
	cout<<"the greatest number through which the number is divisible is "<<i<<".\nSo it is not a prime number"<<endl;
	pt=1;
	}
       }
      }
     }
     if(pt==0||num==2||num==3)
     cout<<"The number is a prime number"<<endl;
     break;
    }
   case 'c':
   {
    long int a=0, b=0, n=0, pt=0;
    cout<<"Here you are about to find prime numbers between the specified interval"<<endl;
    cout<<"Enter the starting point of the interval: ";
    cin>>a;
    cout<<"Enter the ending point of the interval: ";
    cin>>b;
    cout<<"List of prime numbers lying between "<<a<<" and "<<b<<" is as follows:- "<<endl;
    if(a>1 && b>1 && b>a)
    {
     for(i=a+1; i<b; i++)
     {
      for(j=2; j<=sqrt(i)+1; j++)
      {
       if(pt==0)
       {
	if(i%j==0)
	{
	 pt=1;

	}
	else
	 pt=0;
       }
      }
      if(pt==0)
      {
       cout<<i<<",\t";
       n=n+1;
      }
      pt=0;
     }
     cout<<"Total no. of primes are "<<n<<endl;
    }
    break;
   }
   case 'd':
   {
    cout<<"Here you are about to add two real numbers"<<endl;
    float sum=0;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    sum=num1+num2;
    cout<<"The sum of the two numbers entered is"<<sum<<endl;
    break;
   }
   case 'e':
   {
    cout<<"Here you are about to multiply two real numbers"<<endl;
    float mul=0;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    mul=num1*num2;
    cout<<"The products of the two numbers are "<<mul<<endl;
    break;
   }
   case 'f':
   {
    cout<<"Here you are about to find the difference of two real numbers"<<endl;
    float sub=0;
    cout<<"Enter your first real number: ";
    cin>>num1;
    cout<<"Enter your second real number: ";
    cin>>num2;
    sub=num1-num2;
    cout<<"The difference of the two real numbers entered is "<<sub<<endl;
    break;
   }
   case 'g':
   {
    cout<<"Here you are about to divide one real number by another"<<endl;
    int Q=0, R=0, num01=0, num02=0 ;
    cout<<"Enter the numerator: ";
    cin>>num01;
    cout<<"Enter the denominator: ";
    cin>>num02;
    if(num02==0)
    {
     cout<<"The division is not possible as the numerator and denominator must be finite as well as the denominator cannot be equal to zero"<<endl;
    }
    else
    {
     Q=num01/num02;
     R=num01%num02;
     cout<<"On division, the obtained values are "<<endl;
     cout<<"Quotient="<<Q<<" and remainder ="<<R<<endl;
    }
    break;
   }
   case 'h':
   {
    cout<<"Here you are about to find the factors of a given natural number"<<endl;
    long int num=0, i=0, j=0;
    cout<<"Enter the number to know its factors: ";
    cin>>num;
    for(i=1; i<= num; i++)
    {
     if(num%i!=0)
     {
      continue;
     }
     else
     {
      cout<<i<<" is a factor"<<endl;
      j=j+1;
     }
    }
    cout<<"Total number of factors="<<j<<endl;
    break;
   }
   default:
   {
    cout<<"Invalid entry"<<endl;
   }
  }
  cout<<"Do you want to calculate again(Y/N)? ";
  ask=getche();
  cout<<endl;
 }while(ask=='Y'|| ask=='y');
}

void calculator::Geometrical()
{
 char choice=' ', ask=' ';
 do
 {
  cout<<"Choose your calculation field"<<endl;
  cout<<"(a) 2-D (planar) surfaces\n(b) 3-D (solid) bodies"<<endl;
  choice=getche();
  clrscr();
  sleep(1);
  switch(choice)
  {
   case 'a':
   {
    int n=0;
    cout<<"You are about to calculate area and perimeter of 2-dimensional surfaces"<<endl;
    cout<<"Choose from the following options"<<endl;
    cout<<"1.Triangle\n2.Quadrilateral\n3.Pentagon\n4.Ellipse\n5.Astroid"<<endl;
    n=getche();
    n=n-48;
    delay(500);
    clrscr();
    switch(n)
    {
     case 1:
     {
      int a=0,b=0,c=0;
      float p=0, s=0, area=0;


      cout<<"Your chosen surface is a Triangle. Enter the three sides of the triangle"<<endl;
      cin>>a>>b>>c;
      cout<<"Length of first side="<<a<<endl;
      cout<<"Length of second side="<<b<<endl;
      cout<<"Length of third side="<<c<<endl;
      p=a+b+c;
      s=p/2;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
      cout<<"Area of the figure="<<area<<endl;
      cout<<"Perimeter of the figure="<<p<<endl;
      if(a==b && b==c)
       cout<<"It belongs to the category of'Equilateral triangles'"<<endl;
      else if((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a))
       cout<<"It belongs to the category of 'Isosceles triangles'"<<endl;
      else if((pow(a,2)+pow(b,2)==pow(c,2))||(pow(b,2)+pow(c,2)==pow(a,2))||(pow(c,2)+pow(a,2)==pow(b,2)))
       cout<<"It belongs to the category of 'Right-angled triangles'"<<endl;
      else
       cout<<"It is a scalene triangle"<<endl;
      break;
     }
     case 2:
     {
      int a=0,b=0,c=0,d=0;
      float p=0,s=0,q=0,area=0;
      cout<<"Your chosen surface is a quadrilateral.\nEnter the four sides sides of the quadrilateral:"<<endl;
      cin>>a>>b>>c>>d;
      cout<<"Length of the first side="<<a<<endl;
      cout<<"Length of the second side="<<b<<endl;
      cout<<"Length of the third side="<<c<<endl;
      cout<<"Length of the fourth side="<<d<<endl;
      p=a+b+c+d;
      s=p/2;
      cout<<"Perimeter of the quadrilateral="<<p<<endl;
      cout<<"For area we need more parameters, sum of any two opposite angles.\nSo, enter the sum of any two angles"<<endl;
      cin>>q;
      area=((s-a)*(s-b)*(s-c)*(s-d)-(a*b*c*d*cos(q/2)*cos(q/2)));
      cout<<"Area of the quadrilateral="<<area<<endl;
      float pi=(4*atan(1));
      if(a==b && b==c && c==a && q==pi)
      {
       cout<<"The quadrilateral is a square"<<endl;
      }
      else if(a==c&&b==d&&q==pi)
       cout<<"The quadrilateral is a ractangle"<<endl;
      else if(a==b&&b==c&&c==d&&q!=pi)
       cout<<"The quadrilateral is a rhombus"<<endl;
      else if(a==c&&b==d&&q!=pi)
       cout<<"The quadrilateral is a parallelogram"<<endl;
      else if(a==b&&c==d)
       cout<<"The quadrilateral is a kite"<<endl;
      else
       cout<<"It is a general quadrilateral(scalene)"<<endl;
      break;
     }
     case 3:
     {
      int a=0;
      float area=0, c=1.720477401;


      cout<<"Your chosen surface is a pentagon and we shall take case of a regular pentagon only to avoid complicacies"<<endl;
      cout<<"Enter the length of the side: ";
      cin>>a;
      cout<<"Perimeter of the pentagon="<<(5*a)<<endl;
      area=c*(a*a);
      cout<<"Area of the pentagon="<<area<<endl;
      break;
     }
     case 4:
     {
      float pi=4*atan(1),a=0,b=0;

      cout<<"Your chosen surface is an ellipse.\nEnter the value of the semi-major and the semi-minor axes:"<<endl;
      cin>>a>>b;
      cout<<"Perimeter of the ellipse="<<pi*(a+b)<<endl;
      cout<<"Area of the ellipse="<<pi*a*b<<endl;
      if(a!=b)
       cout<<"Entered ellipse is a standard ellipse"<<endl;
      else
       cout<<"Entered ellipse is a circle"<<endl;
      break;
     }
     case 5:
     {
      float pi=(4*atan(1)), a=0, b=0;

      cout<<"Your chosen surface is an astroid"<<endl;
      cout<<"Enter the values of the semi-major and the semi-minor axes:"<<endl;
      cin>>a>>b;
      cout<<"Perimeter of the astroid="<<((4*((a*a)+(a*b)+(b*b)))/(a+b))<<endl;
      cout<<"Area of the astroid="<<(3*pi*a*b)/8<<endl;
      break;
     }
     default :
     {
      cout<<"Invalid Entry"<<endl;
     }
    }
    break;
   }
   case 'b':
   {
    int n=0;
    cout<<"You are about to calculate volume and surface area of 3-Dimensional surface"<<endl;
    cout<<"Choose from the following options:"<<endl;
    cout<<" Group A:Platonic solids-"<<endl;
    cout<<"\t1)Tetrahedron(faces =4,vertices=4,edges=6)\n\t2)Hexahedron(faces=6,vertices=8,edges=8)\n\t3)Octahedron(faces=8,vertices=6,edges=12)"<<endl;
    cout<<" Group B:Quadric shapes-"<<endl;
    cout<<"\t4)Right cone\n\t5)Sphere\n\t6)Right conical frustum\n\t7)Spherical frustum\n\t8)Right cylinder"<<endl;
    n=getche();
    n=n-48;
    delay(500);
    clrscr();
    switch(n)
    {
     case 1:
     {
      float a=0,b=0, c=0, v=0, s=0, A=0;


      cout<<"Here you are about to find the surface area and volume of a tetrahedron"<<endl;
      cout<<"Enter the values of its sides";
      cin>>a>>b>>c;
      s=(a+b+c)/2;
      A=sqrt(s*(s-a)*(s-b)*(s-c));
      v=sqrt((7*a*a)-(2*b*b)+(c*c))*(A/9);
      cout<<"Volume of the tetrahedron="<<v<<endl;
      cout<<"Surface area of the tetrahedron="<<(4*A)<<endl;
      break;
     }
     case 2:
     {
      float a=0,b=0, c=0;


      cout<<"Here you are about to find the surface area and volume of a hexahedron where angle between any of the sides is 90'"<<endl;
      cout<<"enter the length , breadth and height of the hexahedron(cuboid)"<<endl;
      cin>>a>>b>>c;
      cout<<"Volume of the hexahedron="<<a*b*c<<endl;
      cout<<"Surface area of the hexahedron="<<2*(a*b+b*c+c*a)<<endl;
      if(a==b && b==c)
       cout<<"The hexahedron is actually a cube"<<endl;
      else
       cout<<"The hexahedron is actually a cuboid"<<endl;
      break;
     }
     case 3:
     {
      float a=0, b=sqrt(2)/3, area=0;


      cout<<"Here you are about to find the surface area and volume of a regular octahedron."<<endl;
      cout<<"Enter the value of the side:";
      cin>>a;
      cout<<"Volume of the regular octahedron="<<b*a*a*a<<endl;
      area=2*sqrt(3)*a*a;
      cout<<"Surface area of the regular octahedron="<<area<<endl;
      break;
     }
     case 4:
     {
      float h=0,a=0, b=0, pi=4*atan(1);


      cout<<"You are about to find the volume and curved surface area of a right cone"<<endl;
      cout<<"Enter the height of the cone: ";
      cin>>h;
      cout<<"Enter the elliptical base's semi-major and semi-minor axes: ";
      cin>>a>>b;
      cout<<"Volume of the cone="<<(pi*a*b*h)/3<<endl;
      cout<<"Curved surface area of the cone="<<pi*((a+b)/2)*(sqrt(h*h+a*b))<<endl;
      if(a==b)
       cout<<"The cone, according to the entered dimensions,comes under the category of right circular cones"<<endl;
      else
       cout<<"The cone, according to the entered dimensions,comes under the category of right elliptical cones"<<endl;;
      break;
     }
     case 5:
     {
      float r=0,pi=4*atan(1);


      cout<<"You area about to find the volume and curved surface area of a sphere"<<endl;
      cout<<"Enter the radius of the sphere: "<<endl;
      cin>>r;
      cout<<"Volume of the sphere="<<(4*pi*r*r*r)/3<<endl;
      cout<<"Surface area of the sphere="<<4*pi*r*r<<endl;
      break;
     }
     case 6:
     {
      float h=0,r1=0,r2=0,pi=4*atan(1),l=0;


      cout<<"You area about to find the volume and curved surface area of a right circular frustum"<<endl;
      cout<<"Enter the height of the conical frustum: ";
      cin>>h;
      cout<<"Enter the lower base radius and upper base radius: ";
      cin>>r1>>r2;
      cout<<"volume of the conical frustum="<<pi*h*(r1*r1+r1*r2+r2*r2)/3<<endl;
      l=sqrt((r2-r1)+h*h);
      cout<<"Surface area of the curved surface="<<pi*l*(r1+r2)<<endl;
      break;
     }
     case 7:
     {
      float R=0,r1=0,r2=0, h=0,pi=4*atan(1);


      cout<<"You are about to find the volume and curved surface area of a spherical frustum"<<endl;
      cout<<"Enter the actual radius of the spherical frustum so formed"<<endl;
      cin>>R;
      cout<<"Enter the lower base radius and the upper base radius"<<endl;
      cin>>r1>>r2;
      h=sqrt(R*R-r1*r1)-sqrt(R*R-r2*r2);
      cout<<"Volume of the spherical frustum="<<(pi*h*(3*r1*r1+3*r2*r2+h*h))/6<<endl;
      cout<<"Surface area of the spherical frustum="<<2*pi*R*h<<endl;
      break;
     }
     case 8:
     {
      float h=0, a=0,b=0,pi=4*atan(1);


      cout<<"You area about to find the volume and curved surface area of a right cylinder"<<endl;
      cout<<"Enter the height of th cylinder"<<endl;
      cin>>h;
      cout<<"Enter the elliptical base's semi-major and semi-minor axes"<<endl;
      cin>>a>>b;
      cout<<"Volume of the cylinder="<<(pi*a*b*h)<<endl;
      cout<<"Surface area of the the cylinder="<<pi*(a+b)*h<<endl;
      if(a==b)
       cout<<"The cylinder, according to the dimensions you entered, comes under the category of right circular cylinders"<<endl;
      else
       cout<<"The cylinder, according to the dimensions you entered, comes under the category of right elliptical cylinders"<<endl;
      break;
     }
     default:
      cout<<"Invalid Entry"<<endl;
    }
    break;
   }
   default:
    cout<<"Invalid Entry"<<endl;
  }
  cout<<"Do you want to calculate again(Y/N)? ";
  ask=getche();
  cout<<endl;
 }while(ask=='Y'||ask=='y');
}

void calculator::Functional()
{
 float i=0;
 char ask=' ',choice=' ';
 do
 {
  clrscr();
  cout<<"Choose from the following options-"<<endl;
  cout<<"(a)Piecewise functions\n(b)Polynomial functions\n(c)Trigonometric functions\n(d)Inverse Trigonometric functions\n(e)Hyperbolic trigonometric functions\n(f)Inverse Hyperbolic Trigonometric functions\n(g)Exponential functions\n(h)Logarithmic functions"<<endl;
  choice=getche();
  delay(500);
  clrscr();
  switch(choice)
  {
   case 'a':
   {
    float opt=0,val=0,fn=0;
    cout<<"Here you are about to deal with the piecewise functions"<<endl;
    cout<<"Choose from the following options-"<<endl;
    cout<<"1):floor() function\n2):ceil() function\n3):abs() function\n4):sgn() function\n5):fract() function"<<endl;
    opt=getche();
    opt=opt-48;
    sleep(1);
    clrscr();
    if(opt==1)
    {
     cout<<"Your chosen function is floor().\nEnter a value that is within the domain of the function: ";
     cin>>val;
     fn=floor(val);
     cout<<"floor("<<val<<")= "<<fn<<endl;
    }
    else if(opt==2)
    {
     cout<<"Your chosen function is ceil().\nEnter a value that is within the domain of the function: ";
     cin>>val;
     fn=ceil(val);
     cout<<"ceil("<<val<<")= "<<fn<<endl;
    }
    else if(opt==3)
    {
     cout<<"Your chosen function is abs().\nEnter a value that is within the domain of the function: ";
     cin>>val;
     fn=abs(val);
     cout<<"abs("<<val<<")="<<fn<<endl;
    }
    else if(opt==4)
    {
     cout<<"Your chosen function is sgn().\nEnter a value that is within the domain of the function: ";
     cin>>val;
     if(val!=0)
     {
      fn=abs(val)/val;
      cout<<"sgn("<<val<<")="<<fn<<endl;
     }
     else
      cout<<"sgn(0)=0"<<endl;
    }
    else if(opt==5)
    {
     cout<<"Your chosen function is fract().\nEnter a value that is within the domain of the function: ";
     cin>>val;
     fn=val-floor(val);
     cout<<"fract("<<val<<")="<<fn<<endl;
    }
    else
     cout<<"Invalid entry"<<endl;
    break;
   }
   case 'b':
   {
    int opt=0;

    cout<<"Here you are about to deal eith polynomial functions."<<endl;
    cout<<"Choose from the following options:"<<endl;
    cout<<"1)Solve linear equation with one variable\n2)Solve linear equation with two variables\n3)Solve linear equation with three variables\n4)Solve quadratic equation with one variable\n5)Solve cubic equation with one variable"<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     long float a=0,b=0,res1=0;
     cout<<"You are about to solve a linear equation with one variable."<<endl;
     cout<<"The format is 'ax+b=0'where x is the solution"<<endl;
     cout<<"Enter the values of a and b"<<endl;
     if(a==b)
     {
      cout<<"You cannot place a=0"<<endl;
     }
     else
     {
      res1=-1*(b/a);
      cout<<"The solution(s) is/are: "<<res1<<endl;
     }
    }
    else if(opt==2)
    {
     long float D1=0,D2=0,a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
     cout<<"You are about to solve a linear equation with two variables. The format of the equation is 'a1x+b1y+c1=0' and 'a2x+b2y+c2=0'"<<endl;
     cout<<"Enter the values of the coefficients of variables and the constant for the first equation: ";
     cin>>a1>>b1>>c1;
     cout<<"Enter the values of the coefficients of variables and the constant for the second equation: ";
     cin>>a2>>b2>>c2;
     cout<<"Entered equations are:"<<endl;
     cout<<"("<<a1<<")x+("<<b1<<")y+("<<c1<<")=0"<<endl;
     cout<<"("<<a2<<")x+("<<b2<<")y+("<<c2<<")=0"<<endl;
     D1=(b1*c2-b2*c1)/(a1*b2-a2*b1);
     D2=(c1*a2-c2*a1)/(a1*b2-a2*b1);
     cout<<"x="<<D1<<endl;
     cout<<"y="<<D2<<endl;
    }
    else if(opt==3)
    {
     long double D1=0,D2=0,D3=0;
     float a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
     cout<<"You are about to solve a linear equation in three variables. The format is 'a1x+b1y+c1z+d=0', 'a2x+b2y+c2z+d2=0' and 'a3x+b3y+c3z+d3=0'."<<endl;
     cout<<"Enter the values of the coefficients of variables and the constant for the first equation: ";
     cin>>a1>>b1>>c1>>d1;
     cout<<"Enter the values of the coefficients of variables and the constant for the second equation: ";
     cin>>a2>>b2>>c2>>d2;
     cout<<"Enter the values of the coefficients of variables and the constant for the third equation: ";
     cin>>a3>>b3>>c3>>d3;
     cout<<"Entered equations are:"<<endl;
     cout<<"("<<a1<<")x+("<<b1<<")y+("<<c1<<")z+("<<d1<<")=0"<<endl;
     cout<<"("<<a2<<")x+("<<b2<<")y+("<<c2<<")z+("<<d2<<")=0"<<endl;
     cout<<"("<<a3<<")x+("<<b3<<")y+("<<c3<<")y+("<<d3<<")=0"<<endl;
     D1=(b1*(c2*d3-c3*d2)+b2*(c3*d1-c1*d3)+b3*(c1*d2-c2*d1))/(a1*(b2*c3-b3*c2)+a2*(b3*c1-b1*c3)+a3*(b1*c2-b2*c1));
     D2=(c1*(a2*d3-a3*d2)+c2*(a3*d1-a1*d3)+c3*(a1*d2-a2*d1))/(a1*(b2*c3-b3*c2)+a2*(b3*c1-b1*c3)+a3*(b1*c2-b2*c1));
     D3=(a1*(b2*d3-b3*d2)+a2*(b3*d1-b1*d3)+a3*(b1*d2-b2*d1))/(a1*(b2*c3-b3*c2)+a2*(b3*c1-b1*c3)+a3*(b1*c2-b2*c1));
     cout<<"x="<<D1<<endl;
     cout<<"y="<<D2<<endl;
     cout<<"z="<<D3<<endl;
    }
    else if(opt==4)
    {
     float a=0,b=0,c=0,r1=0,r2=0;
     cout<<"You are about to solve a quadratic equation with one variable. The format is 'a(x^2)+bx+c=0'"<<endl;
     cout<<"Enter the value of constant coefficients: ";
     cin>>a>>b>>c;
     if((b*b-4*a*c)>=0)
     {
      cout<<"The equation has distinct roots and the roots are: "<<endl;
      r1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
      r2=(-1*b-sqrt(b*b-4*a*c))/(2*a);
      cout<<"x1="<<r1<<endl;
      cout<<"x2="<<r2<<endl;
     }
     else if((b*b-4*a*c)==0)
     {
      cout<<"The equation has coincident roots and the roots are: "<<endl;
      cout<<"x="<<(-1*b)/(2*a)<<endl;
     }
     else
     {
      cout<<"The equation has complex conjugate roots and the roots are: "<<endl;
      r1=sqrt(4*a*c-b*b)/(2*a);
      r2=(-1*b)/(2*a);
      cout<<"x1="<<r2<<"+i"<<r1<<endl;
      cout<<"x2="<<r2<<"-i"<<r1<<endl;
     }
     cout<<"entered equation was: "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
    }
    else if(opt==5)
    {
     float a=0, b=0, c=0, d=0, D=0, P=0, Q=0, k=6*pow(2,1/3);
     cout<<"You are about to solve a cubic equation with one variable. The format is 'a(x^3)+b(x^2)+cx+d=0'"<<endl;
     cout<<"Enter the value of constant coefficients: ";
     cin>>a>>b>>c>>d;
     D=18*a*b*c*d-4*b*b*b*d-4*c*c*c*a+b*b*c*c-27*a*a*d*d;
     if(D<0)
     {
      cout<<"The equation has one distinct real root and two conjugate roots"<<endl;
      cout<<"The roots of the cubic equation are: "<<endl;
      P=2*b*b*b-9*a*b*c+27*a*a*d+sqrt(-1*D*27*a*a);
      Q=2*b*b*b-9*a*b*c+27*a*a*d+sqrt(-1*D*27*a*a);
      cout<<"x1=("<<(-1*(b/(3*a))-((2/k)*pow(P,1/3))-((2/k)*pow(Q,1/3)))<<")"<<endl;
      cout<<"x2=("<<(-1*(b/(3*a))+(pow(P,1/3)/(k*a))+(pow(Q,1/3)/(k*a)))<<")i("<<(pow(P,1/3)*sqrt(3)/(k*a))-(pow(Q,1/3)*sqrt(3)/(k*a))<<")"<<endl;
      cout<<"x3=("<<(-1*(b/(3*a))+(pow(P,1/3)/(k*a))+(pow(Q,1/3)/(k*a)))<<")i("<<(pow(P,1/3)*(-1)*sqrt(3)/(k*a))+(pow(Q,1/3)*sqrt(3)/(k*a))<<")"<<endl;
     }
     else if(D==0)
     {
      cout<<"The equation has one distinct real root and two coincident real roots"<<endl;
      cout<<"The roots of the equation are : "<<endl;
      D=2*b*b*b-9*a*b*c+27*a*a*d;
      cout<<"x1=("<<(-(b/(3*a))+(4/(a*k))*pow(P,1/3))<<endl;
      cout<<"x2=("<<(-(b/(3*a))+(2/(a*k))*pow(P,1/3))<<endl;
      cout<<"x3=("<<(-(b/(3*a))+(2/(a*k))*pow(P,1/3))<<endl;
     }
     else
     {
      cout<<"The given equation has three distinct real roots"<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'c':
   {
    float opt=0,val=0,fn=0,num1=0,num2=0,step=0;
    char tab=' ';
    cout<<"Here you are about to deal with Trigonometric functions."<<endl;
    cout<<"Choose from the following functions to calculate and/or to generate a table of values if you wish"<<endl;
    cout<<"(1) Sine function or sin()\n(2) Cosine function or cos()\n(3) Tangent function or tan()\n(4) Cotangent function or cot()\n(5) Secant function or sec()\n(6) Cosecant function or csc()"<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     cout<<"Your chosen function is sin(). To calculate, enter a value that is within the domain of the function. The domain of the function is: -inf<val<inf; and the range of the function is -1<=sin()<=1. Entered value is taken in radians"<<endl;
     cin>>val;
     fn=sin(val);
     cout<<"sin("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point  of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Sine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=sin(i);
	 cout<<"sin("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered wrong starting or ending value."<<endl;
     }
    }
    if(opt==2)
    {
     cout<<"Your chosen function is cos(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val <+inf; and the range of the function is: -1 <=cos() <=1. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=cos(val);
     cout<<"cos("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Cosine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=cos(i);
	 cout<<"cos("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==3)
    {
     cout<<"Your chosen function is tan(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -(pi/2) <val< +(pi/2), where pi=3.14592654..; and the range of the function is: -inf <tan() <+inf. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=tan(val);
     cout<<"tan("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Tangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=tan(i);
	 cout<<"tan("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==4)
    {
     cout<<"Your chosen function is cot(). To calculate, enter a value that is within the domain of the function.The domain of the function is: 0 <val< pi, where pi=3.141592654..; and the range of the function is: -1 <=cot() <=1. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=1/(tan(val));
     cout<<"cot("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();;
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Cotangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=1/(tan(i));
	 cout<<"cot("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==5)
    {
     cout<<"Your chosen function is sec(). To calculate, enter a value that is within the domain of the function.The domain of the function is: 0<= val<= pi, where pi=3.141592654.. and val !=(pi/2) ; and the range of the function is: -inf <sec() <+inf. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=1/cos(val);
     cout<<"sec("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Secant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=1/cos(i);
	 cout<<"sec("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==6)
    {
     cout<<"Your chosen function is csc(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -(pi/2) <=val <= +(pi/2); and the range of the function is: -inf <csc() <+inf. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=1/sin(val);
     cout<<"csc("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Cosecant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=1/sin(i);
	 cout<<"csc("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'd':
   {
    float opt=0,val=0,fn=0,num1=0,num2=0,step=0;
    char tab=' ';
    cout<<"Here you are about to deal with Inverse Trigonometric functions."<<endl;
    cout<<"Choose from the following functions to calculate and/or to generate a table of values if you wish"<<endl;
    cout<<"(1) Arc sine function or asin()\n(2) Arc cosine function or acos()\n(3) Arc tangent function or atan()\n(4) Arc cotangent function or acot()\n(5) Arc secant function or asec()\n(6) Arc cosecant function or acsc()"<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     cout<<"Your chosen function is asin(). To calculate, enter a value that is within the domain of the function. The domain of the function is: -1 <=val <= +1; and the range of the function is -(pi/2) <=asin() <= +(pi/2), where pi=3.141592654... Displayed value is in radians"<<endl;
     cin>>val;
     fn=asin(val);
     cout<<"asin("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point  of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Arc sine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=asin(i);
	 cout<<"asin("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered wrong starting or ending value."<<endl;
     }
    }
    if(opt==2)
    {
     cout<<"Your chosen function is acos(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -1 <=val <=1; and the range of the function is: -(pi/2) <=acos() <= +(pi/2), where pi=3.141592654... Displayed value is in radians."<<endl;
     cin>>val;
     fn=acos(val);
     cout<<"acos("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Arc cosine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=acos(i);
	 cout<<"acos("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==3)
    {
     cout<<"Your chosen function is atan(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val< +inf; and the range of the function is: -(pi/2) <atan() < +(pi/2),where pi=3.141592654. Displayed value is in radians."<<endl;
     cin>>val;
     fn=atan(val);
     cout<<"atan("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Arc tangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=atan(i);
	 cout<<"atan("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==4)
    {
     cout<<"Your chosen function is acot(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val< inf; and the range of the function is: 0 < acot() <pi, where pi=3.141592654... Displayed value is taken in radians."<<endl;
     cin>>val;
     fn=atan(1/val);
     cout<<"cot("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Arc cotangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=atan(1/i);
	 cout<<"acot("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==5)
    {
     cout<<"Your chosen function is asec(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf< val< +inf, where and val doesn't belong to the interval(-1,1) ; and the range of the function is: 0 <=asec() <pi <+inf Entered value is in radians."<<endl;
     cin>>val;
     fn=acos(1/val);
     cout<<"asec("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Arc secant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2 ;i=i+step)
	{
	 fn=acos(1/i);
	 cout<<"asec("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==6)
    {
     cout<<"Your chosen function is acsc(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val < +(pi/2); and the range of the function is: -(pi/2) <acsc() <+(pi/2), where pi=3.141592654 . Displated value is taken in radians."<<endl;
     cin>>val;
     fn=asin(1/val);
     cout<<"csc("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Arc cosecant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<=num2 ;i=i+step)
	{
	 fn=asin(1/i);
	 cout<<"acsc("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'e':
   {
    float opt=0,val=0,fn=0,num1=0,num2=0,step=0;
    char tab=' ';
    cout<<"Here you are about to deal with Hyperbolic Trigonometric functions."<<endl;
    cout<<"Choose from the following functions to calculate and/or to generate a table of values if you wish"<<endl;
    cout<<"(1) Hyperbolic sine function or sinh()\n(2) Hyperbolic cosine function or cosh()\n(3) Hyperbolic tangent function or tanh()\n(4) Hyperbolic cotangent function or coth()\n(5) Hyperbolic secant function or sech()\n(6) Hyperbolic cosecant function or csch()"<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     cout<<"Your chosen function is sinh(). To calculate, enter a value that is within the domain of the function. The domain of the function is: -inf<val<inf; and the range of the function is -1<=sinh()<=1. Entered value is taken in radians"<<endl;
     cin>>val;
     fn=sinh(val);
     cout<<"sinh("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point  of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic sine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=sinh(i);
	 cout<<"sinh("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered wrong starting or ending value."<<endl;
     }
    }
    if(opt==2)
    {
     cout<<"Your chosen function is cosh(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val <+inf; and the range of the function is: -1 <=cosh() <=1. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=cosh(val);
     cout<<"cosh("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic cosine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=cosh(i);
	 cout<<"cosh("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==3)
    {
     cout<<"Your chosen function is tanh(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -(pi/2) <val< +(pi/2), where pi=3.14592654..; and the range of the function is: -inf <tanh() <+inf. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=tanh(val);
     cout<<"tanh("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic tangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=tanh(i);
	 cout<<"tanh("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==4)
    {
     cout<<"Your chosen function is coth(). To calculate, enter a value that is within the domain of the function.The domain of the function is: 0 <val< pi, where pi=3.141592654..; and the range of the function is: -1 <=coth() <=1. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=1/tanh(val);
     cout<<"coth("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic cotangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=1/tanh(i);
	 cout<<"coth("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==5)
    {
     cout<<"Your chosen function is sech(). To calculate, enter a value that is within the domain of the function.The domain of the function is: 0<= val<= pi, where pi=3.141592654.. and val !=(pi/2) ; and the range of the function is: -inf <sech() <+inf. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=1/cosh(val);
     cout<<"sech("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic secant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=1/cosh(i);
	 cout<<"sech("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==6)
    {
     cout<<"Your chosen function is csch(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -(pi/2) <=val <= +(pi/2); and the range of the function is: -inf <csch() <+inf. Entered value is taken in radians."<<endl;
     cin>>val;
     fn=1/sinh(val);
     cout<<"csch("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic cosecant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step;i<=num2-step;i=i+step)
	{
	 fn=1/sinh(i);
	 cout<<"csch("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'f':
   {
    float opt=0,val=0,fn=0,num1=0,num2=0,step=0;
    char tab=' ';
    cout<<"Here you are about to deal with Inverse Hyperbolic Trigonometric functions."<<endl;
    cout<<"Choose from the following functions to calculate and/or to generate a table of values if you wish"<<endl;
    cout<<"(1) Hyperbollic arc sine function or asinh()\n(2) Hyperbollic arc cosine function or acosh()\n(3) Hyperbollic arc tangent function or atanh()\n(4) Hyperbollic arc cotangent function or acoth()\n(5) Hyperbollic arc secant function or asech()\n(6) Hyperbollic arc cosecant function or acsch()"<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     cout<<"Your chosen function is asinh(). To calculate, enter a value that is within the domain of the function. The domain of the function is: -1 <=val <= +1; and the range of the function is -(pi/2) <=asinh() <= +(pi/2), where pi=3.141592654... Displayed value is in radians"<<endl;
     cin>>val;
     fn=log(val+sqrt(val*val+1));
     cout<<"asinh("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point  of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic arc sine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=log(i+sqrt(i*i+1));
	 cout<<"asinh("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered wrong starting or ending value."<<endl;
     }
    }
    if(opt==2)
    {
     cout<<"Your chosen function is acosh(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -1 <=val <=1; and the range of the function is: -(pi/2) <=acosh() <= +(pi/2), where pi=3.141592654... Displayed value is in radians."<<endl;
     cin>>val;
     fn=log(val+sqrt(val*val-1));
     cout<<"acos("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic arc cosine function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=log(val+sqrt(val*val-1));
	 cout<<"acosh("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==3)
    {
     cout<<"Your chosen function is atanh(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val< +inf; and the range of the function is: -(pi/2) <atanh() < +(pi/2),where pi=3.141592654. Displayed value is in radians."<<endl;
     cin>>val;
     fn=(1/2)*log((val+1)/(1-val));
     cout<<"atanh("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic arc tangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=(1/2)*log((i+1)/(1-i));
	 cout<<"atanh("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==4)
    {
     cout<<"Your chosen function is acoth(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val< inf; and the range of the function is: 0 < acoth() <pi, where pi=3.141592654... Displayed value is taken in radians."<<endl;
     cin>>val;
     fn=(1/2)*log((val+1)/(val-1));
     cout<<"cot("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic arc cotangent function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=(1/2)*log((i+1)/(i-1));
	 cout<<"acoth("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==5)
    {
     cout<<"Your chosen function is asech(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf< val< +inf, where and val doesn't belong to the interval(-1,1) ; and the range of the function is: 0 <=asech() <pi <+inf Entered value is in radians."<<endl;
     cin>>val;
     fn=log((1+sqrt(1-val*val))/val);
     cout<<"asech("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<50; l++)
       {
	if(l==25)
	 sleep(2);
	cout<<"";
	delay(100);
       }
       for(l=50; l<80; l++)
       {
	if(l==75)
	 sleep(1);
	cout<<"";
	delay(20);
       }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic arc secant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<num2 ;i=i+step)
	{
	 fn=log((1+sqrt(1-i*i))/i);
	 cout<<"asech("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else if(opt==6)
    {
     cout<<"Your chosen function is acsch(). To calculate, enter a value that is within the domain of the function.The domain of the function is: -inf <val < +(pi/2); and the range of the function is: -(pi/2) <acsch() <+(pi/2), where pi=3.141592654 . Displated value is taken in radians."<<endl;
     cin>>val;
     fn=log((1+sqrt(1+val*val))/val);
     cout<<"csch("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='Y'||tab=='y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       sleep(1);
       clrscr();
       cout<<"\t\t\tCalculating table"<<endl;
       cout<<"\t\t\tLoading..."<<endl;
       sleep(1);
       for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
       sleep(1);
       clrscr();
       cout<<"Hyperbolic arc cosecant function\t\t\tvalues"<<endl;
       if(step>0)
       {
	for(i=num1+step; i<=num2 ;i=i+step)
	{
	 fn=log((1+sqrt(1+i*i))/i);
	 cout<<"acsch("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
	cout<<"Table error"<<endl;
      }
      else
       cout<<"You have entered a wrong starting or ending value."<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'g':
   {
    float opt=0, val=0, fn=0,num1=0,num2=0,step=0;
    char tab=' ';
    cout<<"Here you are about to deal with exponential functions"<<endl;
    cout<<"Choose from the given options to calculate and/or to generate a table of values if you wish"<<endl;
    cout<<"(1) Exponential function(e^()), base:e=2.71828..\n(2) Exponential function(10^()), base:10\n(3) Exponential function(a^()), base:'a' "<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     cout<<"You've chosen exponential function with base e, where e=2.71828.. To calculate, enter a value within the domain of the function. The domain of the function is -inf< val< +inf and the range of the function is 0< exp()< inf."<<endl;
     cin>>val;
     fn=exp(val);
     cout<<"e^("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='y'||tab=='Y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       if(step>0)
       {
	sleep(1);
	clrscr();
	cout<<"\t\t\tCalculating table"<<endl;
	cout<<"\t\t\tLoading..."<<endl;
	sleep(1);
	for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
	sleep(1);
	clrscr();
	cout<<"Exponential function\t\t\tValues"<<endl;
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=exp(i);
	 cout<<"e^("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
       {
	cout<<"Table error"<<endl;
       }
      }
      else
      {
       cout<<"You have entered a wrong starting or ending value."<<endl;
      }
     }
    }
    if(opt==2)
    {
     float fac=0;
     cout<<"You've chosen exponential function with base 10. To calculate, enter a value within the domain of the function. The domain of the function is -inf< val< +inf and the range of the function is 0< exp10()< inf."<<endl;
     cin>>val;
     fac=log(10);
     fn=exp(fac*val);
     cout<<"10^("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='y'||tab=='Y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       if(step>0)
       {
	sleep(1);
	clrscr();
	cout<<"\t\t\tCalculating table"<<endl;
	cout<<"\t\t\tLoading..."<<endl;
	sleep(1);
	for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
	sleep(1);
	clrscr();
	cout<<"Exponential function,base 10\t\t\tValues"<<endl;
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=exp(fac*i);
	 cout<<"10^("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
       {
	cout<<"Table error"<<endl;
       }
      }
      else
      {
       cout<<"You have entered a wrong starting or ending value."<<endl;
      }
     }
    }
    if(opt==3)
    {
     float fac=0, base=0;
     cout<<"You've chosen exponential function with base 'a'. To calculate, enter a value within the domain of the function. The domain of the function is -inf< val< +inf and the range of the function is 0< axp()< inf."<<endl;
     cin>>val;
     cout<<"Enter the value of the base: ";
     cin>>base;
     fac=log(base);
     fn=exp(fac*val);
     cout<<"a^("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='y'||tab=='Y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       if(step>0)
       {
	sleep(1);
	clrscr();
	cout<<"\t\t\tCalculating table"<<endl;
	cout<<"\t\t\tLoading..."<<endl;
	sleep(1);
	for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
	sleep(1);
	clrscr();
	cout<<"Exponential function,base "<<base<<"\t\t\tValues"<<endl;
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=exp(fac*i);
	 cout<<"a^("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
       {
	cout<<"Table error"<<endl;
       }
      }
      else
      {
       cout<<"You have entered a wrong starting or ending value."<<endl;
      }
     }
    }
   }
   case 'h':
   {
    float opt=0, val=0, fn=0, num1=0, num2=0, step=0;
    char tab=' ';
    cout<<"Here you are about to deal with Logarithmic functions"<<endl;
    cout<<"Choose from the following options: "<<endl;
    cout<<"1) logarithmic function(ln()), base: e=2.71828..\n2)Logarithmic function(log()), base: 10\n3) Logarithmic function(loga()), base:'a'"<<endl;
    opt=getche();
    opt=opt-48;
    delay(500);
    clrscr();
    if(opt==1)
    {
     cout<<"You've chosen Logarithmic function with base e, where e=2.71828.. To calculate, enter a value within the domain of the function. The domain of the function is 0< val< inf and the range of the function is -inf< log()< +inf."<<endl;
     cin>>val;
     fn=log(val);
     cout<<"ln("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='y'||tab=='Y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       if(step>0)
       {
	sleep(1);
	clrscr();
	cout<<"\t\t\tCalculating table"<<endl;
	cout<<"\t\t\tLoading..."<<endl;
	sleep(1);
	for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
	sleep(1);
	clrscr();
	cout<<"Logarithmic function, base: e\t\t\tValues"<<endl;
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=log(i);
	 cout<<"ln("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
       {
	cout<<"Table error"<<endl;
       }
      }
      else
      {
       cout<<"You have entered a wrong starting or ending value."<<endl;
      }
     }
    }
    else if(opt==2)
    {
     float fac=0;
     cout<<"You've chosen Logarithmic function with base 10. To calculate, enter a value within the domain of the function. The domain of the function is 0< val< inf and the range of the function is -inf< log10()< +inf."<<endl;
     cin>>val;
     fac=1/log(10);
     fn=fac*log(val);
     cout<<"log("<<val<<")="<<fn<<endl;
     cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
     tab=getche();
     if(tab=='y'||tab=='Y')
     {
      cout<<"Enter the starting point of the interval: ";
      cin>>num1;
      cout<<"Enter the ending point of the interval: ";
      cin>>num2;
      if(num1<num2)
      {
       cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
       cin>>step;
       fn=0;
       if(step>0)
       {
	sleep(1);
	clrscr();
	cout<<"\t\t\tCalculating table"<<endl;
	cout<<"\t\t\tLoading..."<<endl;
	sleep(1);
	for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
	sleep(1);
	clrscr();
	cout<<"Logarithmic function,base:10\t\t\tValues"<<endl;
	for(i=num1+step; i<num2; i=i+step)
	{
	 fn=fac*log(i);
	 cout<<"log("<<i<<")=\t\t\t"<<fn<<endl;
	}
       }
       else
       {
	cout<<"Table error"<<endl;
       }
      }
      else
      {
       cout<<"You have entered a wrong starting or ending value."<<endl;
      }
     }
    }
    else if(opt==3)
    {
     float fac=0, base=0;
     cout<<"You've chosen Logarithmic function with base 'a'. To calculate, enter a value within the domain of the function. The domain of the function is 0< val< inf and the range of the function is -inf< loga()< +inf."<<endl;
     cin>>val;
     cout<<"Enter the value of the base: ";
     cin>>base;
     fac=1/log(base);
     fn=fac*log(val);
     cout<<"loga("<<val<<")="<<fn<<endl;
     if(base!=1 && base>0)
     {
      cout<<"Do you want to calculate the entire table of values(Y/N)?"<<endl;
      tab=getche();
      if(tab=='y'||tab=='Y')
      {
       cout<<"Enter the starting point of the interval: ";
       cin>>num1;
       cout<<"Enter the ending point of the interval: ";
       cin>>num2;
       if(num1<num2)
       {
	cout<<"Enter the desired steps(difference between two consecutive values) for the calculation: ";
	cin>>step;
	fn=0;
	if(step>0)
	{
	 sleep(1);
	 clrscr();
	 cout<<"\t\t\tCalculating table"<<endl;
	 cout<<"\t\t\tLoading..."<<endl;
	 sleep(1);
	 for(int l=0; l<80; l++)
	 {
	  cout<<"";
	  delay(200);
	 }
	 sleep(1);
	 clrscr();
	 cout<<"Logarithmic function, base:"<<base<<"\t\t\tValues"<<endl;
	 for(i=num1+step; i<num2; i=i+step)
	 {
	  fn=fac*log(i);
	  cout<<"loga("<<i<<")=\t\t\t"<<fn<<endl;
	 }
	}
	else
	{
	 cout<<"Table error"<<endl;
	}
       }
       else
       {
	cout<<"You have entered a wrong starting or ending value."<<endl;
       }
      }
     }
     else
     {
      cout<<"The value of base cannot be unity as well as the base should be greater than zero."<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
   }
   default :
   {
    cout<<"Invalid entry"<<endl;
   }
  }
  cout<<"Do you want to calculate again(Y/N)?"<<endl;
  ask=getche();
  cout<<endl;
 }while(ask=='Y'||ask=='y');
}

void calculator::Series()
{
 int i=0;
 char choice=' ', ask=' ';
 cout<<"You have chosen to calculate on series and sequence"<<endl;
 do
 {
  cout<<"Choose from the following options:"<<endl;
  cout<<"(a) Arithmetic series(A.P.)\n(b) Geometric series(G.P.)\n(c) Harmonic series\n(d) Special series"<<endl;
  choice=getche();
  delay(500);
  clrscr();
  switch(choice)
  {
   case 'a':
   {
    float opt=0, n=0, a=0,d=0, sum=0;
    cout<<"Your chosen functional part is based on 'Arithmetic series'. So choose from the following options:"<<endl;
    cout<<"(1) Forming Arithmetic series\n(2) Identifying Arithmetic series"<<endl;
    opt=getche();
    opt=opt-48;
    if(opt==1)
    {
     cout<<"Here you are about to form Arithmetic series by entering certain parameters"<<endl;
     cout<<"Enter the total no. of terms to be displayed: ";
     cin>>n;
     cout<<"Enter the first term of the sequence: ";
     cin>>a;
     cout<<"Enter the common difference: ";
     cin>>d;
     cout<<"The formed Arithmetic series is: "<<endl;
     for(i=0; i<n; i++)
     {
      cout<<a+(i*d)<<", ";
      sum=sum+(a+(i*d));
     }
     cout<<"Sum of the whole nos. in the series="<<sum<<endl;
    }
    else if(opt==2)
    {
     float num[1000], flag=0;
     cout<<"Here it will be identified whether the entered series is an arithmetic series or not"<<endl;
     cout<<"Enter the total no. of terms you want to enter(max size=1000)"<<endl;
     cin>>n;
     cout<<"Enter the numbers: ";
     for(i=0; i<n; i++)
     {
      cin>>num[i];
     }
     for(i=1; i<n-1; i++)
     {
      if((num[i+1]-num[i])==(num[i]-num[i-1]))
      {
       flag=1;
       sum+=num[i];
      }
      else
      {
       flag=0;
      }
     }
     sum=sum+num[0]+num[n-1];
     if(flag==1)
     {
      cout<<"Entered sequence belongs to an arithmetic series"<<endl;
      cout<<"Sum of the series="<<sum<<endl;
      cout<<"First term of Arithmetic series="<<num[0]<<endl;
      cout<<"Common difference of the Arithmetic series="<<(num[1]-num[0])<<endl;
     }
     else
     {
      cout<<"Entered sequence doesn't belong to Arithmetic series"<<endl;
     }
    }
    else
    {
     cout<<"Invalid Entry."<<endl;
    }
    break;
   }
   case 'b':
   {
    float n=0,a=0,r=0,sum=0;
    int opt;
    cout<<"Your chosen functional part is based on finite and infinite Geometric series. So choose from the given list of options:"<<endl;
    cout<<"1) Forming finite geometric series\n2) Forming infinite geometric series\n3) Identifying finite geometric series\n4) Identifying infinite geometric series"<<endl;
    opt=getche();
    opt=opt-48;
    if(opt==1)
    {
     cout<<"Here you are about to form finite Geometric series by entering certain parameters"<<endl;
     cout<<"Enter the total no. of terms to be displayed: ";
     cin>>n;
     cout<<"Enter the first term of the sequence: ";
     cin>>a;
     cout<<"Enter the common ratio: "<<endl;
     cin>>r;
     if(a!=0&&r!=0)
     {
      cout<<"The formed geometric series is"<<endl;
      for(i=0;i<n;i++)
      {
       cout<<(a*pow(r,i))<<", ";
       sum+=(a*pow(r,i));
      }
      cout<<"Sum of the whole numbers in the series is="<<sum<<endl;
     }
     else
     {
      cout<<"Invalid valueof 'a' and/or 'r'"<<endl;
     }
    }
    else if(opt==2)
    {
     cout<<"Here you are about to form infinite Geometric series by entering certain parameters"<<endl;
     cout<<"Enter the total no. of terms to be displayed: ";
     cin>>n;
     cout<<"Enter the first term of the sequence: ";
     cin>>a;
     cout<<"Enter the common ratio: "<<endl;
     cin>>r;
     if(a!=0 && r>0 && r<1)
     {
      cout<<"First 100 terms of the series are displayed below:"<<endl;
      for(i=0; i<100; i++)
      {
       cout<<a*pow(r,i)<<"\t";
      }
      sum=(a)/(1-r);
      cout<<"Sum of the above whole numbers in the series is: "<<sum<<endl;
     }
     else
     {
      cout<<"Invalid value of 'a' and/or 'r'.\nPlace r between 0 & 1"<<endl;
     }
    }
    else if(opt==3)
    {
     float num[1000], flag=0;
     cout<<"Here you are about to identify whether the entered series is a finite Geometric series or not"<<endl;
     cout<<"Total number of terms you want to enter(max size=1000) for identification"<<endl;
     cin>>n;
     cout<<"Enter your numbers: "<<endl;
     for(int i=0; i<n; i++)
     {
      cin>>num[i];
     }
     for(i=0; i<n-1; i++)
     {
      if((num[i+1]/num[i])==(num[i]/num[i-1])&&num[0]!=0)
      {
       flag=1;
       sum+=num[i];
      }
      else
      {
       flag=0;
      }
     }
     sum=sum+(num[0]+num[n-1]);
     if(flag==1)
     {
      cout<<"Entered sequence belongs to finite Geometric series"<<endl;
      cout<<"Sum of the series="<<sum<<endl;
      cout<<"First term of the finite Geometric series="<<num[0]<<endl;
      cout<<"Common ratio of the Geometric series="<<num[1]/num[0]<<endl;
     }
     else
     {
      cout<<"Entered sequence doesn't belong to finite Geometric series"<<endl;
     }
    }
    else if(opt==4)
    {
     float num[1000], flag=0;
     cout<<"Here you are about to identify whether the entered series is an infinite Geometric series or not"<<endl;
     cout<<"Total number of terms you want to enter(max size=1000) for identification"<<endl;
     cin>>n;
     cout<<"Enter your numbers: "<<endl;
     for(i=0; i<n; i++)
     {
      cin>>num[i];
     }
     for(i=0; i<n-1; i++)
     {
      if((num[i+1]/num[i])==(num[i]/num[i-1]) && num[0]!=0 && ((num[i]/num[i-1])<1)&&((num[i]/num[i-1])>0))
      {
       flag=1;
      }
      else
      {
       flag=0;
      }
     }
     if(flag==1)
     {
      sum=num[0]*((num[1]/num[0])/(1-(num[1]/num[0])));
      cout<<"Entered sequence belongs to infinite Geometric series"<<endl;
      cout<<"Sum of the series="<<sum<<endl;
      cout<<"First term of the infinite Geometric series="<<num[0]<<endl;
      cout<<"Common ratio of the infinite Geometric series="<<num[1]/num[0]<<endl;
     }
     else
     {
      cout<<"Entered sequence doesn't belong to infinite Geometric series"<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'c':
   {
    float n=0,a=0,b=0,sum=0,T=0;
    int opt;
    cout<<"Your chosen functional part is based on finite Harmonic series. So choose from the given list of options:"<<endl;
    cout<<"1) Forming finite Harmonic series\n2) Identifying finite Harmonic series"<<endl;
    opt=getche();
    opt=opt-48;
    if(opt==1)
    {
     cout<<"Here you are about to form finite Harmonic series by entering certain parameters"<<endl;
     cout<<"Enter the total no. of terms to be displayed: ";
     cin>>n;
     cout<<"Enter the first term of the sequence: ";
     cin>>a;
     cout<<"Enter the second term of the sequence: ";
     cin>>b;
     if(a>0 && b>0)
     {
      cout<<"The formed Harmonic series is:"<<endl;
      for(i=0; i<n; i++)
      {
       T=(a*b)/(b+n*(a-b));
       cout<<T<<", ";
       sum+=T;
      }
      cout<<"The sum of the whole numbers in the series is"<<sum<<endl;
     }
     else
     {
      cout<<"Any term in a Harmonic progression or series is not equal to zero"<<endl;
      cout<<"Enter the correct value"<<endl;
     }
    }
    else if(opt==2)
    {
     float num[1000];
     int flag=0;
     cout<<"Here you are about to identify whether the entered series is a finite Harmonic series or not"<<endl;
     cout<<"Total number of terms you want to enter(max size=1000) for identification"<<endl;
     cin>>n;
     cout<<"Enter your numbers: "<<endl;
     for(i=0; i<n; i++)
     {
      cin>>num[i];
     }
     for(i=0; i<n-1; i++)
     {
      if(((1/num[i+1])-(1/num[i]))==((1/num[i])-(1/num[i-1])))
      {
       flag=1;
       sum+=num[i];
      }
      else
      {
       flag=0;
      }
     }
     sum=sum+(num[0]+num[n-1]);
     if(flag==1)
     {
      cout<<"Entered sequence belongs to finite Harmonic series"<<endl;
      cout<<"Sum of the series="<<sum<<endl;
      cout<<"First term of the finite Harmonic series="<<num[0]<<endl;
      cout<<"Second term of the finite Harmonic series="<<num[1]<<endl;
     }
     else
     {
      cout<<"Entered sequence doesn't belong to finite Harmonic series"<<endl;
     }
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   case 'd':
   {
    int opt=0, n=0;
    double F=0, L=0;
    cout<<"Your chosen functional part is based on some special but standard series. So choose from the given options"<<endl;
    cout<<"(1) Fibonacci series\n(2) Lucas series"<<endl;
    opt=getche();
    opt=opt-48;
    if(opt==1)
    {
     cout<<"Here you are about to deal with Fibonacci series"<<endl;
     cout<<"Enter the no. of terms to be displayed: ";
     cin>>n;
     cout<<"List of Fibonacci numbers upto "<<n<<" terms are: "<<endl;
     for(i=0; i<n; i++)
     {
      F=(pow((1+sqrt(5)),i)-pow((1-sqrt(5)),i))/(pow(2,i)*sqrt(5));
      cout<<F<<", ";
     }
     cout<<endl;
    }
    else if(opt==2)
    {
     cout<<"Here you are about to deal with Lucas series"<<endl;
     cout<<"Enter the no. of terms to be displayed: ";
     cin>>n;
     cout<<"List of Lucas numbers upto "<<n<<" terms are: "<<endl;
     for(i=0; i<n; i++)
     {
      L=(pow((1+sqrt(5)),i)+pow((1-sqrt(5)),i))/(pow(2,i));
      cout<<L<<", ";
     }
     cout<<endl;
    }
    else
    {
     cout<<"Invalid entry"<<endl;
    }
    break;
   }
   default:
   {
    cout<<"Invalid entry"<<endl;
   }
  }
  cout<<"Do you want to calculate again?(Y/N): ";
  ask=getche();
  cout<<endl;
 }while(ask=='y'||ask=='Y');
}


void calculator::Matrix()
{
 int i=0, j=0, t=0;
 char ask=' ', choice=' ';
 cout<<"You have chosen to calculate on Matrix"<<endl;
 do
 {
  cout<<"Choose from the given options: "<<endl;
  cout<<"(a) Addition of matrices (upto 5x5)\n(b) Substraction of matrices (upto 5x5)\n(c) Multiplication of matrices (upto 5x5)\n(d) Transpose of a matrix (upto 5x5)\n(e) Determinant of a matrix (upto 3x3)\n(f) nth power of a matrix (upto 5x5)\n(g) Finding co-factor of a matrix (upto 3x3)\n(h) Finding adjoint of a matrix (upto 3x3)\n(i) Inverse of a matrix (upto 3x3)\n(j) Identification of matrix (upto 5x5)"<<endl;
  choice=getche();
  delay(500);
  clrscr();
  switch(choice)
  {
   case 'a':
   {
    float A[5][5], B[5][5], sum[5][5];
    int m=0, n=0, p=0, q=0;
    for(i=0; i<5; i++)
    {
     for(j=0; j<5; j++)
     {
      A[i][j]=0;
      B[i][j]=0;
      sum[i][j]=0;
     }
    }
    cout<<"Here you are about to add two matrices together as addition is a binary operationon real numbers"<<endl;
    cout<<"Enter no. of rows and columns of matrix A (max(5x5)) "<<endl;
    cin>>m>>n;
    cout<<"Enter no. of rows and columns of matrix B (max(5x5)) "<<endl;
    cin>>p>>q;
    if(m==p && n==q)
    {
     cout<<"Matrix A and B can be added together"<<endl;
     cout<<"Enter your data into matrix A"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cin>>A[i][j];

      }
      cout<<endl;
     }
     cout<<"Enter your data into matrix B"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cin>>B[i][j];

      }
      cout<<endl;
     }
     cout<<"Entered values of matrix A is given as"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<A[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     cout<<"Entered values of matrix B is given as"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cout<<B[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     for(i=0; i<m; i++)
     {
      for(int j=0; j<n; j++)
      {
       sum[i][j]=A[i][j]+B[i][j];
      }
     }
     cout<<"The sum of the two matrix(A+B) is"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<sum[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
    }
    else
    {
     cout<<"The matrices cannot be added!"<<endl;
     cout<<"For addition, the matrices should be of same order, i.e. the values of rows & columns of the  matrices that is to be added has to be of same dimension"<<endl;
    }
    break;
   }
   case 'b':
   {
    float A[5][5], B[5][5], diff[5][5];
    int m=0, n=0, p=0, q=0;
    for(i=0; i<5; i++)
    {
     for(j=0; j<5; j++)
     {
      A[i][j]=0;
      B[i][j]=0;
      diff[i][j]=0;
     }
    }
    cout<<"Here you are about to subtract B from A, where A and b are the two matrices that you have to enter"<<endl;
    cout<<"Enter the no. of rows and column of matrix A (max(5x5))"<<endl;
    cin>>m>>n;
    cout<<"Enter the no. of rows and column of matrix B (max(5x5))"<<endl;
    cin>>p>>q;
    if(m==p && q==n)
    {
     cout<<"(A-B)operation of matrix can be done"<<endl;
     cout<<"Enter your data into matrix A"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cin>>A[i][j];

      }
      cout<<endl;
     }
     cout<<"Enter your data into matrix B"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cin>>B[i][j];

      }
      cout<<endl;
     }
     cout<<"Entered values of matrix A is given as"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<A[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     cout<<"Entered values of matrix B is given as"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cout<<B[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       diff[i][j]=A[i][j]-B[i][j];
      }
     }
     cout<<"The difference of the two matrix(A-B) is"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<diff[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
    }
    else
    {
     cout<<"The matrix cannot be subtracted!"<<endl;
     cout<<"For subtraction, the matrices should be of same order, i.e. the no. of rows & columns of the  matrix that is to be subtracted has to be of same dimension"<<endl;
    }
    break;
   }
   case 'c':
   {
    float A[5][5], B[5][5], mul1[5][5], mul2[5][5];
    int m=0, n=0, p=0, q=0;
    cout<<"Here you are about to multiply matrix A & B (either of the type AxB or BxA), where A and b are the two matrices that you have to enter"<<endl;
    cout<<"Enter the no. of rows and column of matrix A (max(5x5))"<<endl;
    cin>>m>>n;
    cout<<"Enter the no. of rows and column of matrix B (max(5x5))"<<endl;
    cin>>p>>q;
    if(n==p && q==m)
    {
     cout<<"Matrix multiplication(AxB) as well as(BxA) is possible"<<endl;
     cout<<"Enter your data into matrix A"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cin>>A[i][j];

      }
      cout<<endl;
     }
     cout<<"Enter your data into matrix B"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cin>>B[i][j];

      }
      cout<<endl;
     }
     cout<<"Entered values of matrix A is given as"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<A[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     cout<<"Entered values of matrix B is given as"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cout<<B[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     for(i=0; i<m; i++)
     {
      for(j=0; j<q; j++)
      {
       mul1[i][j]=0;
       for(t=0; t<n;t++)
       {
	mul1[i][j]=mul1[i][j]+(A[i][t]*B[t][j]);
       }
      }
     }
     for(i=0; i<p; i++)
     {
      for(j=0; j<n; j++)
      {
       mul2[i][j]=0;
       for(t=0; t<m; t++)
       {
	mul2[i][j]=mul2[i][j]+(A[i][t]*B[t][j]);
       }
      }
     }
     cout<<"Multiplication of two matrices (AxB) is: "<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<q; j++)
      {
       cout<<mul1[i][j]<<"\t";
      }
      cout<<endl;
     }
     cout<<"Multiplication of two matrices (BxA) is: "<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<mul2[i][j]<<"\t";
      }
      cout<<endl;
     }
    }
    else if(m==q||n==p)
    {
     cout<<"Enter your data into matrix A"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cin>>A[i][j];

      }
      cout<<endl;
     }
     cout<<"Enter your data into matrix B"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cin>>B[i][j];

      }
      cout<<endl;
     }
     cout<<"Entered values of matrix A is given as"<<endl;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       cout<<A[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     cout<<"Entered values of matrix B is given as"<<endl;
     for(i=0; i<p; i++)
     {
      for(j=0; j<q; j++)
      {
       cout<<B[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     if(m==q)
     {
      cout<<"Multiplication of two matrices (BxA) is possible"<<endl;
      for(i=0; i<p; i++)
      {
       for(j=0; j<n; j++)
       {
	mul2[i][j]=0;
	for(t=0; t<m; t++)
	{
	 mul2[i][j]=mul2[i][j]+(A[i][t]*B[t][j]);
	}
       }
      }
      cout<<"Multiplication of two matrices (BxA) is: "<<endl;
      for(i=0; i<p; i++)
      {
       for(j=0; j<n; j++)
       {
	cout<<mul2[i][j]<<"\t";
       }
       cout<<endl;
      }
     }
     else
     {
      cout<<"Multiplication of two matrices (AxB) is possible"<<endl;
      for(i=0; i<m; i++)
      {
       for(j=0; j<q; j++)
       {
	mul1[i][j]=0;
	for(t=0; t<n;t++)
	{
	 mul1[i][j]=mul1[i][j]+(A[i][t]*B[t][j]);
	}
       }
      }
      cout<<"Multiplication of two matrices (AxB) is: "<<endl;
      for(i=0; i<m; i++)
      {
       for(j=0; j<q; j++)
       {
	cout<<mul1[i][j]<<"\t";
       }
       cout<<endl;
      }
     }
    }
    else
    {
     cout<<"Matrices cannot be multiplied! Dimensional error!"<<endl;
    }
    break;
   }
   case 'd':
   {
    float mat[5][5], tr[5][5];
    int m,n;
    cout<<"Here you are about to  make transpose of the entered matrix"<<endl;
    cout<<"Enter the no. of rows and column of the matrix(max(5x5))"<<endl;
    cin>>m>>n;
    cout<<"Enter your data into the matrix"<<endl;
    for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
     {
      cin>>mat[i][j];

     }
     cout<<endl;
    }
    cout<<"Entered values of the matrix is given as"<<endl;
    for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
     {
      cout<<mat[i][j]<<"\t";;
      tr[i][j]=mat[j][i];
     }
     cout<<endl;
    }
    cout<<"Transpose of the given matrix is"<<endl;
    for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
     {
      cout<<tr[i][j]<<"\t";;
     }
     cout<<endl;
    }
    break;
   }
   case 'e':
   {
    float mat[3][3], det=0, d=0;
    cout<<"Here you are about to find determinant of a square matrix"<<endl;
    cout<<"Enter the dimension of a square matrix (max:3)";
    cin>>d;
    if(d<=3)
    {
     cout<<"Enter your data into the square matrix"<<endl;
     for(i=0; i<3; i++)
     {
      for(j=0; j<3; j++)
      {
       mat[i][j]=0;
       cin>>mat[i][j];

      }
      cout<<endl;
     }
     det=mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])+mat[0][1]*(mat[1][2]*mat[2][0]-mat[1][0]*mat[2][2])+mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);
     cout<<"Determinant of the matrix:"<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cout<<mat[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     cout<<"is given as det(mat)="<<det<<endl;
     if(det==0)
     {
      cout<<"Entered matrix is a singular matrix"<<endl;
     }
     else
     {
      cout<<"Entered matrix is not a singular matrix"<<endl;
     }
    }
    else
    cout<<"You have crossed your restricted dimensions"<<endl;
    break;
   }
   case 'f':
   {
    float mat[5][5], res[5][5], n=0, flag[5][5], p=0, d=0;
    cout<<"Here you are about to calculate the nth power of a square matrix."<<endl;
    cout<<"Enter the dimensions of the square matrix(max:5).";
    cin>>d;
    cout<<"Enter your data into the square matrix"<<endl;
    for(i=0; i<d; i++)
    {
     for(j=0; j<d; j++)
     {
      mat[i][j]=0;
      cin>>mat[i][j];

     }
     cout<<endl;
    }
    cout<<"Entered matrix is given as:"<<endl;
    for(i=0; i<d; i++)
    {
     for(j=0; j<d; j++)
     {
      cout<<mat[i][j];
      cout<<"\t";
     }
     cout<<endl;
    }
    cout<<"Enter the value of n for which nth power is required"<<endl;
    cin>>n;
    cout<<"All the obtained matrix with power less than or equal to "<<n<<" are as follows"<<endl;
    cout<<"Enter your data into the square matrix"<<endl;
    for(i=0; i<3; i++)
    {
     for(j=0; j<3; j++)
     {
      if(i==j)
      {
       res[i][j]=1;
      }
      else
      {
       res[i][j]=0;
      }
     }
    }
    cout<<endl;
    for(p=0; p<n; p++)
    {
     cout<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       flag[i][j]=0;
       for(int t=0; t<d; t++)
       {
	flag[i][j]=flag[i][j]+(res[i][t]*mat[t][j]);
       }
      }
     }
     cout<<"The matrix obtained from entered one with power"<<p+1<<"is:"<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       res[i][j]=flag[i][j];
       cout<<res[i][j]<<"\t";
      }
      cout<<endl;
     }
    }
    break;
   }
   case 'g':
   {
    float mat[3][3], d=0;
    cout<<"Here you are about to find cofactor of a square matrix"<<endl;
    cout<<"Enter the dimensions of a square matrix(max:3): ";
    cin>>d;
    cout<<"You are about to find the cofactor of a "<<d<<"x"<<d<<" matrix."<<endl;
    if(d==1)
    {
     cout<<"Enter data into your matrix:"<<endl;
     cin>>mat[0][0];
     cout<<"Coafctor of the entered matrix is given as follows:-"<<endl;
     cout<<"Cofactor of the element at(row=1 & column=1) is: "<<mat[0][0]/mat[0][0];
    }
    else if(d==2)
    {
     cout<<"Enter data into your matrix: "<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cin>>mat[i][j];

      }
      cout<<endl;
     }
     cout<<"Cofactor(s) of the entered matrix is given as follows:- "<<endl;
     cout<<"Cofactor of the element at(row=1 & column=1) is: "<<mat[1][1]<<endl;
     cout<<"Cofactor of the element at(row=1 & column=2) is: "<<(-1)*mat[1][0]<<endl;
     cout<<"Cofactor of the element at(row=2 & column=1) is: "<<(-1)*mat[0][1]<<endl;
     cout<<"Cofactor of the element at(row=2 & column=2) is: "<<mat[0][0]<<endl;
    }
    else if(d==3)
    {
     cout<<"Enter data into your matrix"<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cin>>mat[i][j];
       cout<<"\t";
      }
      cout<<endl;
     }
     cout<<"Cofactor(s) of the given matrix is given as follows:-"<<endl;
     cout<<"Cofactor of the element at(row=1 & column=1) is: "<<(mat[1][1]*mat[2][2])-(mat[1][2]*mat[2][1])<<endl;
     cout<<"Cofactor of the element at(row=1 & column=2) is: "<<(mat[1][2]*mat[2][0])-(mat[1][0]*mat[2][2])<<endl;
     cout<<"Cofactor of the element at(row=1 & column=3) is: "<<(mat[1][0]*mat[2][1])-(mat[1][1]*mat[2][0])<<endl;
     cout<<"Cofactor of the element at(row=2 & column=1) is: "<<(mat[0][2]*mat[2][1])-(mat[1][0]*mat[2][2])<<endl;
     cout<<"Cofactor of the element at(row=2 & column=2) is: "<<(mat[0][0]*mat[2][2])-(mat[0][2]*mat[2][0])<<endl;
     cout<<"Cofactor of the element at(row=2 & column=3) is: "<<(mat[0][1]*mat[2][0])-(mat[0][0]*mat[2][1])<<endl;
     cout<<"Cofactor of the element at(row=3 & column=1) is: "<<(mat[0][1]*mat[1][2])-(mat[0][2]*mat[1][1])<<endl;
     cout<<"Cofactor of the element at(row=3 & column=2) is: "<<(mat[0][2]*mat[1][0])-(mat[0][0]*mat[1][2])<<endl;
     cout<<"Cofactor of the element at(row=3 & column=3) is: "<<(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0])<<endl;
    }
    else
    {
     cout<<"Invalid numerical entry"<<endl;
    }
    break;
   }
   case 'h':
   {
    float mat[3][3], tr[3][3], d=0;
    cout<<"Here you are about to find adjoint of a square matrix"<<endl;
    cout<<"Enter the dimension of the square matrix(max:3):";
    cin>>d;
    cout<<"You are about to find the cofactor of the transposed matrix of the entered matrix of dimension "<<d<<endl;
    if(d==1)
    {
     cout<<"Enter data into your matrix:"<<endl;
     cin>>mat[0][0];
     cout<<"Adjoint of the matrix is given as:"<<mat[0][0]<<endl;
    }
    else if(d==2)
    {
     cout<<"Enter data into your matrix:"<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cin>>mat[i][j];

      }
      cout<<endl;
     }
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       tr[j][i]=mat[i][j];
      }
     }
     mat[0][0]=tr[1][1];
     mat[0][1]=-1*tr[1][0];
     mat[1][0]=-1*tr[0][1];
     mat[1][1]=tr[0][0];
     cout<<"Adjoint of the entered matrix is: "<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cout<<mat[i][j]<<"\t";
      }
      cout<<endl;
     }
    }
    else if(d==3)
    {
     cout<<"Enter data into your marix:"<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cin>>mat[i][j];

      }
      cout<<endl;
     }
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       tr[j][i]=mat[i][j];
      }
     }
     mat[0][0]=(tr[1][1]*tr[2][2])-(tr[1][2]*tr[2][1]);
     mat[0][1]=(tr[1][2]*tr[2][0])-(tr[1][0]*tr[2][2]);
     mat[0][2]=(tr[1][0]*tr[2][1])-(tr[1][1]*tr[2][0]);
     mat[1][0]=(tr[0][2]*tr[2][1])-(tr[1][0]*tr[2][2]);
     mat[1][1]=(tr[0][0]*tr[2][2])-(tr[0][2]*tr[2][0]);
     mat[1][2]=(tr[0][1]*tr[2][0])-(tr[0][0]*tr[2][1]);
     mat[2][0]=(tr[0][1]*tr[1][2])-(tr[0][2]*tr[1][1]);
     mat[2][1]=(tr[0][2]*tr[1][0])-(tr[0][0]*tr[1][2]);
     mat[2][2]=(tr[0][0]*tr[1][1])-(tr[0][1]*tr[1][0]);
     cout<<"Adjoint of the entered marix is: "<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cout<<mat[i][j]<<"\t";
      }
      cout<<endl;
     }
    }
    else
    {
     cout<<"Invalid numerical entry"<<endl;
    }
    break;
   }
   case 'i':
   {
    float mat[3][3], tr[3][3], inv[3][3], det=0, d=0;
    cout<<"Here you are about to find the inverse of a square matrix"<<endl;
    cout<<"Enter the dimension of the square matrix(max:3):";
    cin>>d;
    if(d==1)
    {
     cout<<"Enter data into your matrix:"<<endl;
     cin>>mat[0][0];
     det=mat[0][0];
     if(det!=0)
     {
      inv[0][0]=(1/det)*1;
      cout<<"Inverse of the entered matrix is :"<<inv[0][0]<<endl;
     }
     else
     {
      cout<<"Inverse of the entered matrix doesn't exist"<<endl;
     }
    }
    else if(d==2)
    {
     cout<<"Enter data into your matrix: "<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cin>>mat[i][j];

      }
      cout<<endl;
     }
     det=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
     if(det!=0)
     {
      cout<<"Entered matrix is given as:"<<endl;
      for(i=0; i<d; i++)
      {
       for(j=0; j<d; j++)
       {
	cout<<mat[i][j]<<"\t";
	tr[j][i]=mat[i][j];
       }
       cout<<endl;
      }
      mat[0][0]=tr[1][1];
      mat[0][1]=-1*tr[1][0];
      mat[1][0]=-1*tr[0][1];
      mat[1][1]=tr[0][0];
      cout<<"Inverse of the entered matrix is"<<endl;
      for(i=0; i<d; i++)
      {
       for(j=0; j<d; j++)
       {
	inv[i][j]=mat[i][j]/det;
       }
      }
      for(i=0; i<d; i++)
      {
       for(j=0; j<d; j++)
       {
	cout<<inv[i][j]<<"\t";
       }
       cout<<endl;
      }
      cout<<"The determinant of the entered matrix is: "<<det<<endl;
     }
     else
     {
      cout<<"Inverse of the entered matrix doesn't exist."<<endl;
     }
    }
    else if(d==3)
    {
     cout<<"Enter data into your matrix:"<<endl;
     for(i=0; i<d; i++)
     {
      for(j=0; j<d; j++)
      {
       cin>>mat[i][j];

      }
      cout<<endl;
     }
     det=mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])+mat[0][1]*(mat[1][2]*mat[2][0]-mat[1][0]*mat[2][2])+mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);
     if(det!=0)
     {
      cout<<"Entered matrix is given as:"<<endl;
      for(i=0; i<d; i++)
      {
       for(j=0; j<d; j++)
       {
	cout<<mat[i][j]<<"\t";
	tr[j][i]=mat[i][j];
       }
       cout<<endl;
      }
      mat[0][0]=(tr[1][1]*tr[2][2])-(tr[1][2]*tr[2][1]);
      mat[0][1]=(tr[1][2]*tr[2][0])-(tr[1][0]*tr[2][2]);
      mat[0][2]=(tr[1][0]*tr[2][1])-(tr[1][1]*tr[2][0]);
      mat[1][0]=(tr[0][2]*tr[2][1])-(tr[1][0]*tr[2][2]);
      mat[1][1]=(tr[0][0]*tr[2][2])-(tr[0][2]*tr[2][0]);
      mat[1][2]=(tr[0][1]*tr[2][0])-(tr[0][0]*tr[2][1]);
      mat[2][0]=(tr[0][1]*tr[1][2])-(tr[0][2]*tr[1][1]);
      mat[2][1]=(tr[0][2]*tr[1][0])-(tr[0][0]*tr[1][2]);
      mat[2][2]=(tr[0][0]*tr[1][1])-(tr[0][1]*tr[1][0]);
      cout<<"Inverse of the entered matrix is:"<<endl;
      for(i=0; i<d; i++)
      {
       for(j=0; j<d; j++)
       {
	inv[i][j]=(mat[i][j])/det;
       }
      }
      for(i=0; i<d; i++)
      {
       for(j=0; j<d; j++)
       {
	cout<<inv[i][j]<<"\t";
       }
       cout<<endl;
      }
      cout<<"The determinant of the entered matrix is: "<<det<<endl;
     }
     else
     {
      cout<<"Inverse of the entered matrix doesn't exist"<<endl;
     }
    }
    else
    {
     cout<<"Invalid numerical entry"<<endl;
    }
    break;
   }
   case 'j':
   {
    float mat[5][5], m=0, n=0;
    cout<<"Here you are about to classify an entered matrix into the following category:"<<endl;
    cout<<"() Rectangular matrix\n() Square matrix\n() Row matrix\n() Column matrix\n() Main & skew diagonal matrix\n() Scalar matrix\n() Upper & lower triangular matrix\n() Identity matrix\n() Null matrix\n() Main & skew symmetric matrix\n() Nillpotent matrix\n() Involuntary matrix\n() Idempotent matrix\n() Orthogonal matrix\n() Echelon matrix"<<endl;
    cout<<"Enter the no. of rows and column of the matrix  (max(5x5))"<<endl;
    cin>>m>>n;
    cout<<"Enter data into your matrix"<<endl;
    for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
     {
      cin>>mat[i][j];

     }
     cout<<endl;
    }
    cout<<"Your entered matrix is:"<<endl;
    cout<<"Enter your data into matrix"<<endl;
    for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
     {
      cout<<mat[i][j]<<"\t";
     }
     cout<<endl;
    }
    cout<<"The entered matrix is classified as: "<<endl;
    if(m!=n)
    {
     cout<<"Rectangular matrix"<<endl;
    }
    if(m==n)
    {
     cout<<"Square matrix"<<endl;
    }
    if(m<n)
    {
     cout<<"Row matrix"<<endl;
    }
    if(m>n)
    {
     cout<<"Column matrix"<<endl;
    }


    if(m==n)
    {
     int flag=0;
     for(i=0; i<m; i++)
     {
      for(j=0; j<n; j++)
      {
       if((i!=j && mat[i][j]==0)||(i==j && mat[i][j]!=0))
       {
	flag=1;
       }
       else
       {
	flag=0;
	break;
       }
      }
      if(flag==0)
      {
       break;
      }
      if(flag==1)
      {
       cout<<"Main diagonal matrix"<<endl;
      }
      flag=0;


      for(i=0; i<m; i++)
      {
       for(j=0; j<n; j++)
       {
	if(((i+j)!=2 && mat[i][j]==0)||((i+j)==2 && mat[i][j]!=0))
	{
	 flag=1;
	}
	else
	{
	 flag=0;
	}
	break;
       }
       if(flag==0)
       {
	break;
       }
      }
      if(flag==1)
      {
       cout<<"Skew Diagonal Matrix"<<endl;
      }
      flag=0;


      for(i=0; i<m; i++)
      {
       for(j=0; j<n; j++)
       {
	if(i!=j && mat[i][j]==0)
	{
	 flag=1;
	}
	if(mat[i][i]==mat[j][j])
	{
	 flag=1;
	}
	else
	{
	 flag=0;
	}
	break;
       }
       if(flag==0)
       {
	break;
       }
      }
      if(flag==1)
      {
       cout<<"Scalar Matrix"<<endl;
      }
      flag=0;


      for(i=0; i<m; i++)
      {
       for(j=0; j<n; j++)
       {
	if((i<j) && mat[i][j]==0)
	{
	 flag=1;
	}
	else if((i>j) && mat[i][j]==0)
	{
	 flag=2;
	}
	else
	{
	 flag;
	 break;
	}
       }
       if(flag==0)
       {
	break;
       }
      }
      if(flag==1)
      {
       cout<<"Lower triangular matrix"<<endl;
      }
      else if(flag==2)
      {
       cout<<"Upper triangular matrix"<<endl;
      }
      flag=0;


      for(i=0; i<m; i++)
      {
       for(j=0; j<n; j++)
       {
	if(i!=j && mat[i][j]==0)
	{
	 flag=1;
	}
	if(mat[i][i]==mat[j][j] && mat[i][i]==1)
	{
	 flag=1;
	}
	else
	{
	 flag=0;
	 break;
	}
       }
       if(flag==0)
       {
	break;
       }
      }
      if(flag==1)
      {
       cout<<"Identity matrix"<<endl;
      }
      flag=0;


      for(i=0; i<m; i++)
      {
       for(j=0; j<n; j++)
       {
	if(mat[i][j]==0)
	{
	 flag=1;
	}
	else
	{
	 flag=0;
	 break;
	}
       }
       if(flag==0)
       {
	break;
       }
      }
      if(flag==1)
      {
       cout<<"Null matrix"<<endl;
      }
      flag=0;


      for(i=0; i<m; i++)
      {
       for(j=0; j<n; j++)
       {
	if(mat[i][j]==mat[j][i])
	{
	 flag=1;
	}
	else if(mat[i][j]==(-1)*mat[j][i])
	{
	 flag=2;
	}
	else
	{
	 flag=0;
	 break;
	}
       }
       if(flag==0)
       {
	break;
       }
      }
      if(flag==1)
      {
       cout<<"Main symmetric matrix"<<endl;
      }
      else if(flag==2)
      {
       cout<<"Skew symmetric matrix"<<endl;
      }
      flag=0;


      if(m==n)
      {
       int I[5][5], res[5][5], O[5][5], ctr[5][5], p=0, flag1=1, pt1=0, pt2=0, pt3=0, flag2=1, flag3=1;
       cout<<"For Nillpotent, Involuntary & Idempotent matrix condition is checked only upto index=10"<<endl;
       for(i=0; i<m; i++)
       {
	for(j=0; j<n; j++)
	{
	 if(i==j)
	 {
	  I[i][j]=1;
	  res[i][j]=1;
	 }
	 else
	 {
	  I[i][j]=0;
	  res[i][j]=0;
	 }
	 O[i][j]=0;
	}
       }
       for(p=0; p<10; p++)
       {
	for(i=0; i<m; i++)
	{
	 for(j=0; j<n; j++)
	 {
	  ctr[i][j]=0;
	  for(t=0; t<m; t++)
	  {
	   ctr[i][j]=ctr[i][j]+(res[i][t]*mat[t][i]);
	  }
	 }
	}
	for(i=0; i<m; i++)
	{
	 for(j=0; j<n; j++)
	 {
	  res[i][j]=ctr[i][j];
	 }
	}
	for(i=0; i<m; i++)
	{
	 for(j=0; j<n; j++)
	 {
	  if(res[i][j]==O[i][j] && flag1!=0)
	  {
	   flag1=0;
	   pt1=p+1;
	  }
	  if(res[i][j]==I[i][j] && flag2!=0)
	  {
	   flag2=0;
	   pt2=p+1;
	  }
	  if(res[i][j]==mat[i][j] && flag3!=0)
	  {
	   flag3=0;
	   pt3=p+1;
	  }
	 }
	}
       }
       if(flag1==0)
       {
	cout<<"Nillpotent matrix"<<endl;
	cout<<"Index="<<pt1<<endl;
       }
       if(flag2==0)
       {
	cout<<"Involuntary matrix"<<endl;
	cout<<"Index="<<pt2<<endl;
       }
       if(flag3==0)
       {
	cout<<"Idempotent matrix"<<endl;
	cout<<"Index="<<pt3<<endl;
       }
      }
      flag=0;


      if(m==n)
      {
       int tr[5][5], flag=0,mul[5][5];
       for(i=0; i<m; i++)
       {
	for(j=0; j<n; j++)
	{
	 tr[i][j]=mat[j][i];
	}
       }
       for(i=0; i<m; i++)
       {
	for(j=0; j<n; j++)
	{
	 mul[i][j]=0;
	 for(t=0; t<n; t++)
	 {
	  mul[i][j]=mul[i][j]+(mat[i][t]*tr[i][j]);
	 }
	}
       }
       for(i=0; i<m; i++)
       {
	for(j=0; j<n; j++)
	{
	 if(i!=j && mul[i][j]==0)
	 {
	  flag=1;
	 }
	 if(mul[i][i]==mul[j][j] && mul[i][i]==1)
	 {
	  flag=1;
	 }
	 else
	 {
	  flag=0;
	  break;
	 }
	}
	if(flag==0)
	{
	 break;
	}
       }
       if(flag==1)
       {
	cout<<"Orthogonal matrix"<<endl;
       }
      }
      flag=0;


      if(m==n)
      {
       for(i=0; i<m; i++)
       {
	for(j=0; j<n; j++)
	{
	 if(mat[i][i]==mat[j][j] && mat[j][j]==1)
	 {
	  if(i<j && mat[i][j]==0)
	  {
	   flag=1;
	  }
	  else if(i>j && mat[i][j]==0)
	  {
	   flag=2;
	  }
	  else
	  {
	   flag=0;
	   break;
	  }
	 }
	 else
	 {
	  flag=0;
	  break;
	 }
	}
	if(flag==0)
	{
	 break;
	}
       }
       if(flag==1)
       {
	cout<<"Lower echelon matrix"<<endl;
       }
       else if(flag==2)
       {
	cout<<"Upper ehlelon matrix"<<endl;
       }
      }
      else
      {
       cout<<"This matrix doesn't come under any of the above mentioned category"<<endl;
      }
      break;
     }
    }
    break;
   }
   default:
   {
    cout<<"Invalid option"<<endl;
    break;
   }
  }
  cout<<"Do you want to calculate again?(Y/N)"<<endl;
  ask=getche();
  cout<<endl;
 }while(ask=='Y'||ask=='y');
}

void calculator::Statistics()
{
 int i=0, j=0;
 char ask=' ',choice=' ';
 cout<<"You have chosen to calculate on statistics"<<endl;
 do
 {
  cout<<"Choose against the given options:"<<endl;
  cout<<"(a): Product of 'n' numbers\n(b): Sum of 'n' numbers\n(c): Average of 'n' numbers\n(d): RMS of 'n' numbers\n(e): Arranging the numbers\n(f): Finding greatest/least values"<<endl;
  choice=getche();
  delay(500);
  clrscr();
  switch(choice)
  {
   case 'a':
   {
    float prod=1, num=0;
    int n;
    cout<<"Enter the total no. of values of which you want to find the product: ";
    cin>>n;
    cout<<"Enter your values one after another."<<endl;
    for(i=0; i<n; i++)
    {
     cin>>num;
     prod=prod*num;
    }
    cout<<"Product of the "<<n<<" numbers entered is="<<prod<<endl;
    break;
   }
   case 'b':
   {
    float sum=0, num=0;
    int n;
    cout<<"Enter the total no. of values of which you want to find the sum: ";
    cin>>n;
    cout<<"Enter your values one after another: "<<endl;
    for(i=0; i<n; i++)
    {
     cin>>num;
     sum=sum+num;
    }
    cout<<"Sum of the "<<n<<" numbers entered is="<<sum<<endl;
    break;
   }
   case 'c':
   {
    float sum=0, num=0;
    int n;
    cout<<"Enter the total no. of values of which you want to find the average value: ";
    cin>>n;
    cout<<"Enter your values one after another: "<<endl;
    for(i=0; i<n; i++)
    {
     cin>>num;
     sum=sum+num;
    }
    cout<<"Average of the "<<n<<" numbers entered is="<<(sum/n)<<endl;
    break;
   }
   case 'd':
   {
    float sum=0, num=0;
    int n;
    cout<<"Enter the total no. of values of which you want to find the root-mean-squared value: ";
    cin>>n;
    cout<<"Enter your values one after another: "<<endl;
    for(i=0; i<n; i++)
    {
     cin>>num;
     sum=sum+pow(num,2);
    }
    num=sqrt(sum/n);
    cout<<"RMS value of the "<<n<<" entered numbers is="<<num<<endl;
    break;
   }
   case 'e':
   {
    long double num[1000];
    float small=0, n=0, pos=0, tmp=0;
    cout<<"Enter the total no. of values which you want to arrange in ascending as well as descending manner(max. 1000 nos.) : ";
    cin>>n;
    cout<<"Enter your values one after another(max 1000 nos.): "<<endl;
    for(i=0; i<n; i++)
    {
     cin>>num[i];

    }
    for(i=0; i<n; i++)
    {
     small=num[i];
     for(j=i+1; j<n; j++)
     {
      if(num[j]<small)
      {
       small=num[j];
       pos=j;
      }
     }
     tmp=num[i];
     num[i]=num[pos];
     num[pos]=tmp;
    }
    cout<<"The sorted array is shown as(in ascdending order)"<<endl;
    for(i=0; i<n; i++)
    {
     cout<<num[i]<<"\t";
    }
    cout<<endl;
    cout<<"The sorted array is shown as(in descending order)"<<endl;
    for(i=n-1; i>=0; i--)
    {
     cout<<num[i]<<"\t";
    }
    break;
   }
   case 'f':
   {
    float num=0, n=0, high=0, low=0;
    cout<<"Enter the total no. of values you want to enter: ";
    cin>>n;
    cout<<"Enter your values one after another: "<<endl;
    for(i=0; i<n; i++)
    {
     cin>>num;
     if(high<num)
     {
      high=num;
     }
     if(low>num)
     {
      low=num;
     }
    }
    cout<<"The greatest and least values entered in the array are as follows:"<<endl;
    cout<<"Greatest="<<high<<endl;
    cout<<"Lowest="<<low<<endl;
    break;
   }
   default:
   {
    cout<<"Invalid entry"<<endl;
    break;
   }
  }
  cout<<"Do you want to calculate again?(Y/N): ";
  ask=getche();
  cout<<endl;
 }while(ask=='Y'||ask=='y');
}

/*You have reached the end of the document
   Thanks for using*/



