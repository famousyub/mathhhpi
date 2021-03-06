#include<iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/constants/constants.hpp>
using boost::multiprecision::cpp_dec_float_50;
using namespace std;
template<typename T>
inline T circle_area(T r) {
   // pi is predefined constant having value
   using boost::math::constants::pi;
   return pi<T>() * r * r;
}
int main() {
   float f_rad = 243.0/ 100;
   float f_area = circle_area(f_rad);
   double d_rad = 243.0 / 100;
   double d_area = circle_area(d_rad);
   cpp_dec_float_50 rad_mp = 243.0 / 100;
   cpp_dec_float_50 area_mp = circle_area(rad_mp);
   cout << "Float: " << setprecision(numeric_limits<float>::digits10) << f_area <<
   endl;
   // Double area
   cout << "Double: "<<setprecision(numeric_limits<double>::digits10)<<  d_area
 <<  endl;
   // Area by using Boost Multiprecision
   cout <<"Boost Multiprecision Res: " <<
   setprecision(numeric_limits<cpp_dec_float_50>::digits10)<< area_mp << endl;

   return  1;
}