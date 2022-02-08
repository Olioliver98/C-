#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int nota = 0;

    cout<<"Ingrese la nota obtenida: ";
    cin>>nota;

    if (nota >= 96 && nota <= 100)  {
        cout<<"Su calificacion es A++";

    } else{
        if (nota >= 91 && nota <= 95) {
        cout<<"Su calificacion es A+";
        
        } else {
            if (nota >= 86 && nota <= 90) {

                cout<<"Su calificacion es A";

            } else{
                if (nota >= 81 && nota <= 85) {

                    cout<<"Su calificacion es A-";

                } else {
                    if (nota >= 76 && nota <= 80) {

                     cout<<"Su calificacion es B+";

                    } else{
                        if (nota >= 71 && nota <= 75) {

                         cout<<"Su calificacion es B";

                        } else {
                            if (nota >= 66 && nota <= 70) {

                             cout<<"Su calificacion es B-";

                            } else {

                                if (nota >= 61 && nota <= 65) {

                                 cout<<"Su calificacion es Neutral";

                                } else {

                                    if (nota >= 56 && nota <= 60) {

                                     cout<<"Su calificacion es C";

                                    } else {

                                        if (nota >= 51 && nota <= 55) {

                                            cout<<"Su calificacion es C-";

                                        } else{

                                            if (nota >= 46 && nota <= 50) {

                                                cout<<"Su calificacion es D+";

                                            } else {

                                                if (nota >= 41 && nota <= 45) {

                                                    cout<<"Su calificacion es D";

                                                } else {

                                                    if (nota >= 36 && nota <= 40) {

                                                        cout<<"Su calificacion es D-";

                                                    } else{

                                                        if (nota >= 31 && nota <= 35) {

                                                          cout<<"Su calificacion es E+";

                                                        } else {

                                                            if (nota >= 26 && nota <= 30) {

                                                                cout<<"Su calificacion es E";

                                                            } else {

                                                                if (nota >= 21 && nota <= 25) {

                                                                    cout<<"Su calificacion es E-";

                                                                } else{

                                                                    if (nota >= 16 && nota <= 20) {

                                                                        cout<<"Su calificacion es F+";

                                                                    } else {

                                                                        if (nota >= 11 && nota <= 15) {

                                                                            cout<<"Su calificacion es F";
                                                                                    
                                                                        } else {

                                                                            if (nota >= 6 && nota <= 10) {

                                                                                cout<<"Su calificacion es F-";

                                                                            } else{

                                                                                if (nota >= 1 && nota <= 5) {

                                                                                 cout<<"Su calificacion es F--";

                                                                                }  else{

                                                                                     if (nota == 0 ) {

                                                                                        cout<<"Su calificacion es F ---";
                                                                                             
                                                                                    }
                                                      
                                                                                }
                                                                            }   
                                                                        }
                                                                    }
                                                                }
                                                            }   
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                    }
                                }

                            }
                        }

                    }
                }
            }

        }
        
    }
    
 return 0;
}   
   

    
