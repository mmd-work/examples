//## auto_generated
#include "E6_AAA_Example_1_Main.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <cmath>
//## package E_Test::E6_SemanticAnalysis::E6_AAA_Example_1

//## class E6_AAA_Example_1_Main
E6_AAA_Example_1_Main::E6_AAA_Example_1_Main() {
    //#[ operation E6_AAA_Example_1_Main()
    switch (rand() % 10) {
       case 0 : {
          for (int lhs = -2; lhs < 2; ++lhs) {
             for (int rhs = -2; rhs < 2; ++rhs) {
                // At some point through the loop this will be
                // called as 'divide(<anything>, 0)' - is it caught?
                std::cout << divide(lhs, rhs) << std::endl;   // VIOLATION, div-by-0
             }
          }
          break;
       }
       default : {
          std::cout << divide(0, 0) << std::endl;   // VIOLATION
          break;
       }
    }
    //#]
}

int E6_AAA_Example_1_Main::divide(int lhs, int rhs) const {
    //#[ operation divide(int,int) const
    const int result = lhs / rhs;
    
    return result;
    //#]
}
