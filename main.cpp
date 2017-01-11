#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;


void unitatiPosibile(char domeniu[])
{
    if(stricmp(domeniu,"Arie")==0)
        cout<<" 1.a    (Ari)\n 2.ac   (Acru)\n 3.m^2  (Metru patrat)\n 4.cm^2 (Centimetru patrat)\n 5.ft^2 (Feet/Picior patrat)\n 6.ha   (Hectar)\n 7.in^2 (Inch patrat)\n 8.mm^2 (Milimetru patrat)\n 9.km^2 (Kilometru patrat)\n10.yd^2 (Yard patrat)\n";
    else if(stricmp(domeniu,"Lungime")==0)
        cout<<" 1.m   (Metru)\n 2.cm  (Centimetru)\n 3.mm  (Milimetru)\n 4.km  (Kilometru)\n 4.ft  (Feet/Picior)\n 5.in  (Inch)\n 6.yd  (Yard)\n 7.mi  (Mila)\n 8.nmi (Mila Maritima)\n";
    else if(stricmp(domeniu,"Volum")==0)
        cout<<" 1.m^3  (Metru cub)\n 2.cl   (Centilitru)\n 3.cm^3 (Centimetru cub)\n 4.dl   (Decilitru)\n 5.ft^3 (Feet/Picioar cub)\n 6.gal  (Galon)\n 7.in^3 (Inch cub)\n 8.l    (Litru)\n 9.ml   (Mililitru)\n10.yd^3 (Yard cub)\n11.dm^3 (Decimetru)\n";
    else if(stricmp(domeniu,"Timp")==0)
        cout<<" 1.s   (Secunda)\n 2.ms  (Milisecunda)\n 3.min (Minut)\n 4.h   (ora)\n 5.d   (zi)\n 6.wk  (saptamana)\n";
    else if(stricmp(domeniu,"Viteza")==0)
        cout<<" 1.m/s   (Metru pe secunda)\n 2.cm/s  (Centimetru pe secunda)\n 3.ft/s  (Feet/Picior pe secunda)\n 4.in/s  (Inch pe secunda)\n 5.km/s  (Kilometru pe secunda)\n 6.km/h  (Kilometru pe ora)\n 7.mi/s  (Mila pe secunda)\n 8.mph   (Mila pe ora)\n 9.yd/s  (Yard pe secunda)\n10.m/h   (Metru pe ora)\n11.m/min (Metru pe minut)\n";
    else if(stricmp(domeniu,"Temperatura")==0)
        cout<<" 1.C (Grade Celsius)\n 2.F (Grade Fahrenheit)\n 3.K (Grade Kelvin)\n 4.R (Grade Rankine)\n";
    else if(stricmp(domeniu,"Masa")==0)
        cout<<" 1.kg (Kilogram)\n 2.g  (Grame)\n 3.lb (Funt)\n 4.mg (Miligram)\n 5.oz (uncie)\n 6.slug\n 6.t  (tona)\n";
    else if(stricmp(domeniu,"Energie")==0)
        cout<<" 1.j      (Joule)\n 2.btu    (British Thermal Units\n 3.erg\n 4.cal    (Caloria)\n 5.ft*lbf (Picior-funt forta)\n 6.in*lbf (Tol-funt forta)\n 7.kcal   (Kilocaloria)\n 8.kj     (Kilojoule)\n 9.kW*h   (KiloWatt-ora)\n10.tcc    (Tona de combustibil conventional)\n11.tep    (Tona echivalent petrol)\n12.th     (Thermie)\n13.toe    (Tona echivalent ulei)\n14.W*h    (Watt-ora)\n";
    else if(stricmp(domeniu,"Presiune")==0)
        cout<<" 1.Pa     (Pascal)\n 2.atm    (Atmosfera standard)\n 3.at     (Atmosfera tehnica)\n 4.bar\n 5.inH2O  (Tol coloana de apa)\n 6.inHg   (Tol coalana de mercur)\n 7.kp/cm^2(Kilopond pe centimetru patrat)\n 8.kPa    (Kilopascal)\n 9.mbar   (Milibar)\n10.mca    (Metru coloana de apa)\n11.mmca   (Milimetru coloana de apa)\n12.mmHg   (Milimetru coloana de mercur)\n13.MPa    (Megapascal)\n14.N/mm^2 (Newton pe milimetru patrat)\n15.PSI    (Pound square inch)\n16.torr\n";
    else if(stricmp(domeniu,"Densitate")==0)
        cout<<" 1.kg/m^3 (Kilogram pe metru cub)\n 2.g/cm^3 (Gram pe centimetru cub)\n 3.g/l    (Gram pe litru)\n 4.g/m^3  (Gram pe metru cub)\n 5.g/mm^3 (Gram pe milimetriu cub)\n 6.g/ml   (Gram pe mililitru)\n 7.kg/cm^3(Kilogram pe cm cub)\n 8.kg/l   (Kilogram pe litru)\n 9.mg/cm^3(Miligram pe centimetru cub)\n10.mg/m^3 (Miligrame pe metru cub)\n11.oz/ft^3(Uncie pe picior cub)\n12.oz/in^3(Uncie pe tol cub)\n13.t/m^3  (Tona pe metru cub)\n";
    else if(stricmp(domeniu,"Consum Combustibil")==0)
        cout<<" 1.l/100km  (Litru pe 100 de kilometrii)\n 2.km/l     (Kilometru pe listru)\n 3.mi/gal   (Mile pe galon)\n 4.gal/100mi(Mile la 100 de galoni)\n 5.mi/l     (Mile pe litru)\n 6.l/100mi  (Litru la 100 de mile)\n";
    else cout<<"\n***Ati introdus domeniul gresit***\n";
}
void citire(double &masin,char unitmasin[],char unitmasfin[],char domeniu[])
{
    cout<<"****************************************************************************************************************************************************************\n";
    cout<<"     *****  *****  *    *  *       *  *****  *****  *******  *****  *****\n";
    cout<<"     *      *   *  **   *   *     *   *      *   *     *     *   *  *   *\n";
    cout<<"     *      *   *  * *  *    *   *    ***    *****     *     *   *  *****\n";
    cout<<"     *      *   *  *  * *     * *     *      * *       *     *   *  * *  \n";
    cout<<"     *****  *****  *   **      *      *****  *   *     *     *****  *   *\n\n";
    cout<<"****************************************************************************************************************************************************************\n";
    cout<<"\nExemplu de domenii:\n 1.Lungime\n 2.Arie\n 3.Volum\n 4.Timp\n 5.Viteza\n 6.Temperatura\n 7.Masa\n 8.Energie\n 9.Presiune\n10.Densitate\n11.Consum Combustibil\n";
    cout<<"\nIntroduceti domeniul in care dorinti sa lucrati:\n";
    cin.get(domeniu,25);
    cout<<"\nExemplu de unitati de masura:\n";
    unitatiPosibile(domeniu);
    cout<<"\nIntroduceti prescurtarea unitatii de masura ce doriti sa fie transformata:\n";
    cin.get();
    cin.get(unitmasin,25);
    cout<<"\nIntroduceti valoarea unitatii de masura:\n";
    cin>>masin;
    cout<<"\nIntroduceti prescurtarea unitatii de masura in care doriti sa fie transformata:\n";
    cin.get();
    cin.get(unitmasfin,25);
}
double ArieInMetru(double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"a")==0)
        return masin*100;
    else if(stricmp(unitmasin,"ac")==0)
        return masin*4046.86;
    else if(stricmp(unitmasin,"cm^2")==0)
        return masin*0.0001;
    else if(stricmp(unitmasin,"ft^2")==0)
        return masin*0.0929;
    else if(stricmp(unitmasin,"ha")==0)
        return masin*10000;
    else if(stricmp(unitmasin,"in^2")==0)
        return masin*0.0006452;
    else if(stricmp(unitmasin,"km^2")==0)
        return masin*1000000;
    else if(stricmp(unitmasin,"m^2")==0)
        return masin;
    else if(stricmp(unitmasin,"mm^2")==0)
        return masin*0.000001;
    else if(stricmp(unitmasin,"yd^2")==0)
        return masin*0.836127816;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double metruInArie(double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"a")==0)
        return valoare*0.01;
    else if(stricmp(unitmasfin,"ac")==0)
        return valoare*0.0002471053;
    else if(stricmp(unitmasfin,"cm^2")==0)
        return valoare*10000;
    else if(stricmp(unitmasfin,"ft^2")==0)
        return valoare*10.76426264;
    else if(stricmp(unitmasfin,"ha")==0)
        return valoare*0.0001;
    else if(stricmp(unitmasfin,"in^2")==0)
        return valoare*1549.907005;
    else if(stricmp(unitmasfin,"km^2")==0)
        return valoare*0.000001;
    else if(stricmp(unitmasfin,"m^2")==0)
        return valoare;
    else if(stricmp(unitmasfin,"mm^2")==0)
        return valoare*1000000;
    else if(stricmp(unitmasfin,"yd^2")==0)
        return valoare*1.19598939404;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";

}
double LungimeInMetru (double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"cm")==0)
        return masin*0.01;
    else if(stricmp(unitmasin,"ft")==0)
        return masin*0.3048;
    else if(stricmp(unitmasin,"in")==0)
        return masin*0.0254;
    else if(stricmp(unitmasin,"km")==0)
        return masin*1000;
    else if(stricmp(unitmasin,"mi")==0)
        return masin*1609.344;
    else if(stricmp(unitmasin,"nmi")==0)
        return masin*1852;
    else if(stricmp(unitmasin,"mm")==0)
        return masin*0.001;
    else if(stricmp(unitmasin,"m")==0)
        return masin;
    else if(stricmp(unitmasin,"yd")==0)
        return masin*0.9144002494;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double metruInLungime(double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"cm")==0)
        return valoare*100;
    else if(stricmp(unitmasfin,"ft")==0)
        return valoare*3.28083;
    else if(stricmp(unitmasfin,"in")==0)
        return valoare*39.37007;
    else if(stricmp(unitmasfin,"km")==0)
        return valoare*0.001;
    else if(stricmp(unitmasfin,"mi")==0)
        return valoare*0.000621371192;
    else if(stricmp(unitmasfin,"nmi")==0)
        return valoare*0.000539957 ;
    else if(stricmp(unitmasfin,"mm")==0)
        return valoare*1000;
    else if(stricmp(unitmasfin,"m")==0)
        return valoare;
    else if(stricmp(unitmasfin,"yd")==0)
        return valoare*0.000621371192;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}
double VolumInMetru (double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"cl")==0)
        return masin*0.00001;
    else if(stricmp(unitmasin,"cm^3")==0)
        return masin*0.000001;
    else if(stricmp(unitmasin,"dl")==0)
        return masin*0.0001;
    else if(stricmp(unitmasin,"dm^3")==0)
        return masin*0.001;
    else if(stricmp(unitmasin,"ft^3")==0)
        return masin*0.02832;
    else if(stricmp(unitmasin,"gal")==0)
        return masin*0.004546;
    else if(stricmp(unitmasin,"in^3")==0)
        return masin*0.000016387064;
    else if(stricmp(unitmasin,"l")==0)
        return masin*0.001;
    else if(stricmp(unitmasin,"m^3")==0)
        return masin;
    else if(stricmp(unitmasin,"ml")==0)
        return masin*0.000001;
    else if(stricmp(unitmasin,"yd^3")==0)
        return masin*0.76456;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double metruInVolum (double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"cl")==0)
        return valoare*99999.99999999999;
    else if(stricmp(unitmasfin,"cm^3")==0)
        return valoare*1000000;
    else if(stricmp(unitmasfin,"dl")==0)
        return valoare*10000;
    else if(stricmp(unitmasfin,"dm^3")==0)
        return valoare*1000;
    else if(stricmp(unitmasfin,"ft^3")==0)
        return valoare*35.31073446327684;
    else if(stricmp(unitmasfin,"gal")==0)
        return valoare*219.9736031676199;
    else if(stricmp(unitmasfin,"in^3")==0)
        return valoare*61023.74409473229;
    else if(stricmp(unitmasfin,"l")==0)
        return valoare*1000;
    else if(stricmp(unitmasfin,"m^3")==0)
        return valoare;
    else if(stricmp(unitmasfin,"ml")==0)
        return valoare*1000000;
    else if(stricmp(unitmasfin,"yd^3")==0)
        return valoare*1.3079418227477242;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}

double TimpInSecunda(double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"wk")==0)
        return masin*604800;
    else if(stricmp(unitmasin,"d")==0)
        return masin*86400;
    else if(stricmp(unitmasin,"h")==0)
        return masin*3600;
    else if(stricmp(unitmasin,"min")==0)
        return masin*60;
    else if(stricmp(unitmasin,"s")==0)
        return masin;
    else if(stricmp(unitmasin,"ms")==0)
        return masin*0.001;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double secundaInTimp(double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"wk")==0)
        return valoare*0.0000016534391534391535;
    else if(stricmp(unitmasfin,"d")==0)
        return valoare*0.000011574074074074073;
    else if(stricmp(unitmasfin,"h")==0)
        return valoare*0.0002777777777777778;
    else if(stricmp(unitmasfin,"min")==0)
        return valoare*0.016666666666666666 ;
    else if(stricmp(unitmasfin,"s")==0)
        return valoare;
    else if(stricmp(unitmasfin,"ms")==0)
        return valoare*1000;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}
double VitezaInMetruPeSecunda(double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"cm/s")==0)
        return masin*0.01;
    else if(stricmp(unitmasin,"ft/s")==0)
        return masin*0.3048;
    else if(stricmp(unitmasin,"in/s")==0)
        return masin*0.0254;
    else if(stricmp(unitmasin,"km/s")==0)
        return masin*1000;
    else if(stricmp(unitmasin,"km/h")==0)
        return masin*0.27777778;
    else if(stricmp(unitmasin,"mi/s")==0)
        return masin*1609.344;
    else if(stricmp(unitmasin,"mph")==0)
        return masin*0.44704;
    else if(stricmp(unitmasin,"m/s")==0)
        return masin;
    else if(stricmp(unitmasin,"m/h")==0)
        return masin*0.000277778;
    else if(stricmp(unitmasin,"m/min")==0)
        return masin*26.8224;
    else if(stricmp(unitmasin,"yd/s")==0)
        return masin*0.9144002494;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double metruPesecundaInViteza(double valoare,char unitmasfin[])
{if(stricmp(unitmasfin,"cm/s")==0)
        return valoare*100;
    else if(stricmp(unitmasfin,"ft/s")==0)
        return valoare*3.28083;
    else if(stricmp(unitmasfin,"in/s")==0)
        return valoare*39.37007;
    else if(stricmp(unitmasfin,"km/s")==0)
        return valoare*0.001;
    else if(stricmp(unitmasfin,"km/h")==0)
        return valoare*3.5999999712000004;
    else if(stricmp(unitmasfin,"mi/s")==0)
        return valoare*0.000621371192;
    else if(stricmp(unitmasfin,"mph")==0)
        return valoare*2.2369362920544025;
    else if(stricmp(unitmasfin,"m/s")==0)
        return valoare;
    else if(stricmp(unitmasfin,"m/min")==0)
        return valoare*59.99999880000003;
    else if(stricmp(unitmasfin,"m/h")==0)
        return valoare*3599.9971200023037;
    else if(stricmp(unitmasfin,"yd/s")==0)
        return valoare*0.000621371192;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}
double TempInCelsius (double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"C")==0)
        return masin;
    else if(stricmp(unitmasin,"F")==0)
        return (masin-32)/1.8;
    else if(stricmp(unitmasin,"K")==0)
        return masin-273.15;
    else if(stricmp(unitmasin,"R")==0)
        return (masin-459.67-32)*5/9;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double CelsiusInTemp (double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"C")==0)
        return valoare;
    else if(stricmp(unitmasfin,"F")==0)
        return valoare*1.8+32;
    else if(stricmp(unitmasfin,"K")==0)
        return valoare+273.15;
    else if(stricmp(unitmasfin,"R")==0)
        return valoare*9/5+32+459.67;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}
double MasaInGrame(double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"g")==0)
        return masin;
    else if(stricmp(unitmasin,"kg")==0)
        return masin*1000;
    else if(stricmp(unitmasin,"lb")==0)
        return masin*453.592;
    else if(stricmp(unitmasin,"mg")==0)
        return masin*0.001;
    else if(stricmp(unitmasin,"oz")==0)
        return masin*28.3495;
    else if(stricmp(unitmasin,"slug")==0)
        return masin*14593.902999999998;
    else if(stricmp(unitmasin,"t")==0)
        return masin*1000000;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double GrameInMasa(double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"g")==0)
        return valoare;
    else if(stricmp(unitmasfin,"kg")==0)
        return valoare*0.001;
    else if(stricmp(unitmasfin,"lb")==0)
        return valoare*0.0022046244201837776;
    else if(stricmp(unitmasfin,"mg")==0)
        return valoare*1000.0000000000001;
    else if(stricmp(unitmasfin,"oz")==0)
        return valoare*0.03527399072294044;
    else if(stricmp(unitmasfin,"slug")==0)
        return valoare*0.00006852176556196105;
    else if(stricmp(unitmasfin,"t")==0)
        return valoare*0.000001;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}
double EnergieInJoule(double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"j")==0)
        return masin;
    else if(stricmp(unitmasin,"btu")==0)
        return masin*1055.06;
    else if(stricmp(unitmasin,"cal")==0)
        return masin*4.1868;
    else if(stricmp(unitmasin,"erg")==0)
        return masin*0.0000001;
    else if(stricmp(unitmasin,"ft*lbf")==0)
        return masin*1.3558179483314;
    else if(stricmp(unitmasin,"in*lbf")==0)
        return masin*0.11298482902;
    else if(stricmp(unitmasin,"kcal")==0)
        return masin*4186.8;
    else if(stricmp(unitmasin,"kj")==0)
        return masin*1000;
    else if(stricmp(unitmasin,"kW*h")==0)
        return masin*3600000;
    else if(stricmp(unitmasin,"tcc")==0)
        return masin*29307600000;
    else if(stricmp(unitmasin,"tep")==0)
        return masin*41868000000;
    else if(stricmp(unitmasin,"th")==0)
        return masin*4186800;
    else if(stricmp(unitmasin,"toe")==0)
        return masin*41868000000;
    else if(stricmp(unitmasin,"W*h")==0)
        return masin*3600;
    else cout<<"\n***Ati introdus gresit unitatea de masura din care doriti sa transformati***\n";
}
double JouleInEnergie(double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"j")==0)
        return valoare;
    else if(stricmp(unitmasfin,"btu")==0)
        return valoare*0.0009478133944988911;
    else if(stricmp(unitmasfin,"cal")==0)
        return valoare*0.23884589662749595;
    else if(stricmp(unitmasfin,"erg")==0)
        return valoare*10000000;
    else if(stricmp(unitmasfin,"ft*lbf")==0)
        return valoare*0.7375621492772656;
    else if(stricmp(unitmasfin,"in*lbf")==0)
        return valoare*8.850745791923844;
    else if(stricmp(unitmasfin,"kcal")==0)
        return valoare*0.00023884589662749592;
    else if(stricmp(unitmasfin,"kj")==0)
        return valoare*0.001;
    else if(stricmp(unitmasfin,"kW*h")==0)
        return valoare*2.7777777777777776;
    else if(stricmp(unitmasfin,"tcc")==0)
        return valoare*3.412084237535656;
    else if(stricmp(unitmasfin,"tep")==0)
        return valoare*2.388458966275E-11 ;
    else if(stricmp(unitmasfin,"th")==0)
        return valoare*2.389029576186153e-7;
    else if(stricmp(unitmasfin,"toe")==0)
        return valoare*2.388458966275E-11 ;
    else if(stricmp(unitmasfin,"W*h")==0)
        return valoare*0.0002777777777777778;
    else cout<<"\n***Ati introdus gresit unitatea de masura in care doriti sa fie transformarea***\n";
}
double PresiuneInPascal(double masin,char unitmasin[])
{
    if(stricmp(unitmasin,"Pa")==0)
        return masin;
    else if(stricmp(unitmasin,"atm")==0)
        return masin*101325.2738;
    else if(stricmp(unitmasin,"at")==0)
        return masin*98066.5;
    else if(stricmp(unitmasin,"bar")==0)
        return masin*98000;
    else if(stricmp(unitmasin,"inH2O")==0)
        return masin*248.84;
    else if(stricmp(unitmasin,"inHg")==0)
        return masin*3386.38815789;
    else if(stricmp(unitmasin,"kp/cm^2")==0)
        return masin*98000;
    else if(stricmp(unitmasin,"kPa")==0)
        return masin*1000;
    else if(stricmp(unitmasin,"mbar")==0)
        return masin*98;
    else if(stricmp(unitmasin,"mca")==0)
        return masin*9800;
    else if(stricmp(unitmasin,"mmca")==0)
        return masin*9.8;
    else if(stricmp(unitmasin,"mmHg")==0)
        return masin*133.322368421;
    else if(stricmp(unitmasin,"MPa")==0)
        return masin*1000000;
    else if(stricmp(unitmasin,"N/mm^2")==0)
        return masin*1000000;
    else if(stricmp(unitmasin,"PSI")==0)
        return masin*6894.75729317;
    else if(stricmp(unitmasin,"torr")==0)
        return masin*133.322368421;

}
double PascalInPresiune(double valoare,char unitmasfin[])
{
    if(stricmp(unitmasfin,"Pa")==0)
        return valoare;
    else if(stricmp(unitmasfin,"atm")==0)
        return valoare*0.000009869205998632101;
    else if(stricmp(unitmasfin,"at")==0)
        return valoare*0.000010197162129779282;
    else if(stricmp(unitmasfin,"bar")==0)
        return valoare*0.000010204081632653061;
    else if(stricmp(unitmasfin,"inH2O")==0)
        return valoare*0.0040186465198521135;
    else if(stricmp(unitmasfin,"inHg")==0)
        return valoare*0.00029529987508079483;
    else if(stricmp(unitmasfin,"kp/cm^2")==0)
        return valoare*0.000010204081632653061;
    else if(stricmp(unitmasfin,"kPa")==0)
        return valoare*0.001;
    else if(stricmp(unitmasfin,"mbar")==0)
        return valoare*0.01020408163265306;
    else if(stricmp(unitmasfin,"mca")==0)
        return valoare*0.00010204081632653062;
    else if(stricmp(unitmasfin,"mmca")==0)
        return valoare*0.1020408163265306;
    else if(stricmp(unitmasfin,"mmHg")==0)
        return valoare*0.007500616827044659;
    else if(stricmp(unitmasfin,"MPa")==0)
        return valoare*0.000001;
    else if(stricmp(unitmasfin,"N/mm^2")==0)
        return valoare*0.000001;
    else if(stricmp(unitmasfin,"PSI")==0)
        return valoare*0.00014503773773017476;
    else if(stricmp(unitmasfin,"torr")==0)
        return valoare*0.007500616827044659;

}
void transformare(double &masin,double &masfin,char unitmasin[], char unitmasfin[],char domeniu[])
{
    double valoare;
    if(stricmp(domeniu,"Arie")==0)
    {valoare=ArieInMetru(masin,unitmasin);
    masfin=metruInArie(valoare,unitmasfin);}
    else if(stricmp(domeniu,"Lungime")==0)
    {
        valoare=LungimeInMetru(masin,unitmasin);
        masfin=metruInLungime(valoare,unitmasfin);
    }
    else if(stricmp(domeniu,"Timp")==0)
    {
        valoare=TimpInSecunda(masin,unitmasin);
        masfin=secundaInTimp(valoare,unitmasfin);
    }
    else if(stricmp(domeniu,"Volum")==0)
    {
        valoare=VolumInMetru(masin,unitmasin);
        masfin=metruInVolum(valoare,unitmasfin);
    }
    else if(stricmp(domeniu,"Viteza")==0)
    {
        valoare=VitezaInMetruPeSecunda(masin,unitmasin);
        masfin=metruPesecundaInViteza(valoare,unitmasfin);
    }
    else if(stricmp(domeniu,"Temperatura")==0)
    {
        valoare=TempInCelsius(masin,unitmasin);
        masfin=CelsiusInTemp(valoare,unitmasfin);
    }
    else if(stricmp(domeniu,"Masa")==0)
    {
        valoare=MasaInGrame(masin,unitmasin);
        //cout<<endl<<std::setprecision(15)<<valoare<<endl;
        masfin=GrameInMasa(valoare,unitmasfin);
        //cout<<endl<<std::setprecision(15)<<masfin<<endl;
    }
    else if(stricmp(domeniu,"Energie")==0)
    {
        valoare=EnergieInJoule(masin,unitmasin);
        masfin=JouleInEnergie(valoare,unitmasfin);
    }
    else if(stricmp(domeniu,"Presiune")==0)
    {
        valoare=PresiuneInPascal(masin,unitmasin);
        masfin=PascalInPresiune(valoare,unitmasfin);
    }
}
void afisare(double masin,double &masfin,char unitmasin[],char unitmasfin[])
{
    cout<<endl;
    cout.precision(15);
    cout<<masin<<" "<<unitmasin<<"=";
    if(masfin>=0.0001)
     cout<<masfin<<" "<<unitmasfin;
    else
     cout<<fixed<<masfin<<" "<<unitmasfin;
}

int main()
{
    double masin,masfin;
    char unitmasin[25],unitmasfin[25], domeniu[25];
    citire(masin,unitmasin,unitmasfin,domeniu);
    transformare(masin,masfin,unitmasin,unitmasfin,domeniu);
    afisare(masin,masfin,unitmasin,unitmasfin);


    return 0;
}
