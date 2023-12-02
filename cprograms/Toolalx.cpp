#include <iostream>
using namespace std;
/*Program for Developing A Tool That Can Be Used 
For Mathematical operations Measurements etc....*/
int main()
{
    //Variable Declaration
    int menu,tools,mo,con,co,wg,tem,nav,measurements;
    float a,b,c,r,h;
    //introduction
    cout <<"Heyy Hello!!Welcome User!!\n\t\t\t  ~ToolAlphaX~\n";
home:
    //Home Page Where You Can Select The Options
    cout <<"1.Tools\n2.About\n3.Exit\n";
    cout <<"Select The Number=>";
    cin >>menu;
    switch (menu)
    {
        //Selection Page For Tools
        case 1: cout <<"\n1.Mathematical Operations\n2.Measurements\n3.Conversion Table\n";
                cout <<"=>";
                  cin >>tools;
                  switch (tools)
                  {
                   //Nested Switch Used For Mathematical Operations||Selection Page
                   case 1: cout <<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
                           cout <<"=>";
                             cin >>mo;
                             switch (mo)
                             {
                                //Nested Switch For Operations In Mathematical Operations||Operation Page
                                 case 1: cout <<"\nEnter Two Numbers:\n";
                                           cin >>a>>b;
                                           cout <<a<<"+"<<b<<"="<<a+b<<'\n';
                                           break;
                                 case 2: cout <<"\nEnter Two Numbers:\n";
                                           cin >>a>>b;
                                           cout <<a<<"-"<<b<<"="<<a-b<<'\n';
                                           break;
                                 case 3: cout <<"\nEnter Two Numbers:\n";
                                           cin >>a>>b;
                                           cout <<a<<"*"<<b<<"="<<a*b<<'\n';
                                           break;
                                 case 4: cout <<"\nEnter Two Numbers:\n";
                                           cin >>a>>b;
                                           cout <<a<<"/"<<b<<"="<<a/b<<'\n';
                                           break;
                                 default: cout <<"Invalid Input\n";
                                           break;
                              }
goto navigation;
                    //Selection Page In Measurements
                    case 2: cout <<"1.Area Of A Square\n2.Area Of A Rectangle\n3.Area Of A Triangle\n4.Area Of A Circle\n";
                            cout <<"5.Area Of A Semicircle\n6.Area Of A Paralellogram\n7.Area Of A Sphere\n8.Area Of A Hemisphere\n";
                            cout <<"9.Perimeter Of A Square\n10.Perimeter Of A Rectangle\n11.Perimeter Of A Triangle\n12.Perimeter Of A Circle\n";
                            cout <<"13.Perimeter Of A Paralellogram\n";
                            cout <<"14.Volume Of A Cube\n15.Volume Of A Cylinder\n16.Volume Of A Cone\n17.Volume Of A Square Pyramid\n18.Volume Sphere\n19.Volume Of A Hemisphere\n";
                            cout <<"=>";
                            cin >>measurements;
                            switch (measurements)
                            {
                                //Nested Switch For Operations In Measurements||Operation Page
                                case 1: cout <<"\nEnter Length(in cm):\n";
                                        cin >>a;
                                        cout <<"\nEnter The Breadth(in cm):\n";
                                        cin >>b;  
                                        cout <<"\nArea Of A Square=length*breadth\n"<<a<<"*"<<b<<"="<<a*b<<"cm²\n";
                                        break;
                                case 2: cout <<"\nEnter Length(in cm):\n";
                                        cin >>a;
                                        cout <<"\nEnter The Breadth(in cm):\n";
                                        cin >>b;
                                        cout <<"\nArea Of A Rectangle=length*breadth\n"<<a<<"*"<<b<<"="<<a*b<<"cm²\n";
                                        break;
                                case 3: cout <<"\nEnter The Base Length(in cm):\n";
                                        cin >>b;
                                        cout <<"\nEnter The Height(in cm):\n";
                                        cin >>h;
                                        cout <<"nArea Of A Triangle=(1/2)*base*height\n"<<b<<"*"<<h<<"/2"<<"="<<(b*h)/2<<"cm²\n";
                                        break;
                                case 4: cout <<"\nEnter The Radius(in cm):\n";
                                        cin >>r;
                                        cout <<"\nArea Of A Circle=3.14*r²\n"<<"area=3.14*"<<r<<"*"<<r<<"="<<3.14*(r*r)<<"cm²\n";
                                        break;
                                case 5: cout <<"\nEnter The Radius(in cm):\n";
                                        cin >>r;
                                        cout <<"Area Of A Semicircle=3.14*r²/2\n"<<"area=3.14*"<<r<<"*"<<r<<"/2"<<(3.14*(r*r))/2<<"cm²\n";
                                        break;
                                case 6: cout <<"\nEnter The Base(in cm):\n";
                                        cin >>b;
                                        cout <<"\nEnter The Height(in cm):\n";
                                        cin >>h;
                                        cout <<"\nArea Of A Parallelogram=base*height\n"<<"area="<<b<<"*"<<h<<"="<<b*h<<"cm²\n";
                                        break;
                                case 7: cout <<"\nEnter The Radius(in cm):\n";
                                        cin >>r;
                                        cout <<"\nArea Of A Sphere=4*3.14*r²\n"<<"Area=4*3.14*"<<r<<"*"<<r<<"="<<4*(3.14*(r*r))<<"cm²\n";
                                        break;
                                case 8: cout <<"\nEnter The Radius(in cm):\n";
                                        cin >>r;
                                        cout <<"\nArea Of A Hemisphere=(4*3.14*r²)/2\n"<<"Area=4*3.14*"<<r<<"*"<<r<<"="<<4*(3.14*(r*r))/2<<"cm²\n";
                                        break;
                                case 9: cout <<"\nEnter The Length(in cm):\n";
                                        cin >>a;
                                        cout <<"\nEnter The Breadth(in cm):\n";
                                        cin >>b;
                                        cout <<"\nPerimeter Of A Square=Length+Breadth*2\n"<<"Perimeter="<<a<<"+"<<b<<"*2"<<"="<<a+b*2<<"cm\n";
                                        break;
                                case 10: cout <<"\nEnter The Length(in cm):\n";
                                         cin >>a;
                                         cout <<"\nEnter The Breadth(in cm):\n";
                                         cin >>b;
                                         cout <<"\nPerimeter Of A Rectangle=Length+Breadth*2\n"<<"Perimeter="<<a<<"+"<<b<<"*2"<<"="<<a+b*2<<"cm\n";
                                         break;
                                case 11: cout <<"\nEnter The Length Of Three Sides(in cm):\n";
                                         cin >>a>>b>>c;
                                         cout <<"\nPerimeter Of A Triangle=a+b+c\n"<<"perimeter="<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"cm\n";
                                         break; 
                                case 12: cout <<"\nEnter The Radius(in cm):\n";
                                         cin >>r;
                                         cout <<"Perimeter Of A Circle=2*3.14*r\n"<<"Perimeter=2*3.14"<<r<<"="<<2*3.14*r<<"cm\n";
                                         break;
                                case 13: cout <<"\nEnter The Base(in cm):\n";
                                         cin >>a;
                                         cout <<"\nEnter The Height(in cm):\n";
                                         cin >>h;
                                         cout <<"\nPerimeter Of A Paralellogram=base+height*2\n"<<"Perimeter=2*"<<a<<"+"<<h<<"="<<2*(a+h)<<"cm\n";
                                         break;
                                case 14: cout <<"\nEnter The Length(in cm):\n";
                                         cin >>a;
                                         cout <<"\nVolume Of A Cube=a³\n"<<"Volume="<<a<<"³"<<"="<<a*a*a<<"cm³\n";
                                         break;
                                case 15: cout <<"\nEnter The Radius(in cm):\n";
                                         cin >>r;
                                         cout <<"\nEnter The Height(in cm):\n";
                                         cin >>h;
                                         cout <<"\nVolume Of A Cylinder=3.14*r²*h\n"<<"Volume=3.14*"<<r<<"*"<<h<<"="<<3.14*(r*r)*h<<"cm³\n";
                                         break;
                                case 16: cout <<"\nEnter The Radius(in cm):\n";
                                         cin >>r;
                                         cout <<"\nEnter The Height(in cm):\n";
                                         cin >>h;            
                                         cout <<"\nVolume Of A Cone=3.14*r²*(h/3)\n"<<"Volume=3.14*"<<r<<"*"<<h<<"/3="<<(3.14*(r*r))*(h/3)<<"cm³\n";
                                         break;
                                case 17: cout <<"\nEnter The Base Length (in cm)\n";
                                         cin >>a;
                                         cout <<"\nEnter The Height(in cm)\n";
                                         cin >>h;
                                         cout <<"\nVolume Of A Square Pyramid=1/3*base²*height\n"<<"Volume=1/3*"<<a<<"²"<<"*"<<h<<"="<<((a*a)*h)*1/3<<"cm³\n";
                                         break;
                                case 18: cout <<"\nEnter The Radius(in cm):\n";
                                         cin >>r;
                                         cout <<"\nVolume Of A Sphere=4/3*3.14*r³\n"<<"Volume=4/3*3.14*"<<r<<"³"<<"="<<(3.14*(r*r*r))*4/3<<"cm³\n";
                                         break;
                                case 19: cout <<"\nEnter The Radius(in cm):\n";
                                         cin >>r;
                                         cout <<"\nVolume Of A Hemisphere=2/3*3.14*r³\n"<<"Volume=2/3*3.14*"<<r<<"³"<<"="<<(3.14*(r*r*r))*2/3<<"cm³\n";
                                         break;
                                default: cout <<"!!Invalid Input!!";
                                         break;
                            }
goto navigation;
                    //Selection Page in Conversion Table
                    case 3: cout <<"\n1.Length\n2.Weight\n3.Temperature\n";
                            cout <<"=>";
                            cin >>con;
                            switch (con)
                            {
                                //Nested Switch For Selection In Length Conversion Table||Selection Page
                                case 1: cout <<"\n1.Centimeter-Inch\n2.Inch-Feet\n3.Meter-Kilometer\n4.Meter-Mile\n";
                                        cout <<"=>";
                                        cin >>co;
                                        switch (co)
                                        {
                                            //Nested Switch For Operations In Length Conversion Table||Operation Page
                                            case 1: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"cm="<<a/2.54<<"inches\n";
                                                    break;
                                            case 2: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"inch="<<a/12<<"feet\n";
                                                    break;
                                            case 3: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"meter="<<a/1000<<"Kilometers\n";   
                                                    break;
                                            case 4: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"meter="<<a/1609<<"Miles";
                                                    break; 
                                            default: cout <<"!!Invalid Input!!";
                                                     break;
                                        } 
goto navigation;
                                //Nested Switch For Selection In Weight Coversion Table||Selection Page
                                case 2: cout <<"\n1.Gram-Kilogram\n2.Gram-Ounce\n3.Gram-Milligram\n4.kilogram-Pound\n5.Pound-Kilogram\n6.kilogram-Ton\n";
                                        cout <<"=>";
                                        cin >>wg;
                                        switch (wg)
                                        {
                                            //Nested Switch For Operations In Weight Coversion Table||Operation Page
                                            case 1: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Grams="<<a/1000<<"Kilograms\n";
                                                    break;
                                            case 2: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Grams="<<a/28.35<<"Ounce\n";
                                                    break;
                                            case 3: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Grams="<<a*1000<<"Milligrams\n";
                                                    break;
                                            case 4: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"kilograms="<<a*2.205<<"Pounds\n";
                                                    break;
                                            case 5: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Pounds="<<a/2.205<<"Kilograms";
                                                    break;
                                            case 6: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Kilograms="<<a/1000<<"Tons";
                                                    break;
                                            default: cout <<"!!!Invalid Input!!!";
                                                     break;
                                        }
goto navigation;
                                //Nested Switch For Selection In Temperature Conversion Table||Selection Page
                                case 3: cout <<"\n1.Celcius-Fahrenheit\n2.Celcius-Kelvin\n3.Fahrenheit-Celcius\n4.Fahrenheit-Kelvin\n5.Kelvin-Fahrenheit\n";
                                        cout <<"=>";
                                        cin >>tem;
                                        switch (tem)
                                        {
                                            //Nested Switch For Operations In Temperature Conversion Table||Operation Page
                                            case 1: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Celcius="<<(a*9/5)+32<<"Fahrenheit";
                                                    break;
                                            case 2: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Celcius="<<a+273.15<<"Kelvin\n";
                                                    break;
                                            case 3: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Fahrenheit="<<(a-32)*5/9<<"Celcius\n";
                                                    break;
                                            case 4: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Fahrenheit="<<(a-32)*5/9+273.15<<"Kelvin\n";
                                                    break;
                                            case 5: cout <<"\nEnter The Value:\n";
                                                    cin >>a;
                                                    cout <<a<<"Kelvin="<<(a-273.15)*9/5+32<<"Fahrenheit\n";
                                                    break;
                                            default: cout <<"\n!!Invalid Input!!\n";
                                                     break;
                                        }
goto navigation;
                            }
                  }
       //Content For About In Home Page
       case 2: cout <<"~ToolAlphaX~\nA simple tool made with c++ programming\nU can use this tool for working out some mathematical operations,measurements,and also have a conversion table where you can convert the units of length,weight,temperature into other known units......\n!!Hope You Find This Tool Useful!!\n!!Thankyou For Coming!!....\n\n*Code Written by [𝐀𝐋𝐏𝐇𝐀𝐗𝐈𝐕𝐈𝐗]\n\tཧᜰ꙰ꦿ➢ALX༒\n";
               break;
       //To Exit The Program
       case 3: cout <<"\n!!Thankyou For Using This Tool!!\n~ToolAlphaX~\n";
               goto exit;
               break;
        }
//To Go Back To Menu After An Operation & For Exiting The Program
navigation:
        cout <<"\n1.Back To Menu\n2.Exit\n";
        cout <<"=>";
        cin >>nav;
        switch (nav)
        {
            case 1: goto home;
            case 2: goto exit;
        }
exit:
return 0;
} 