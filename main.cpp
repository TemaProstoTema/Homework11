#include <iostream>

/*я без понятия что реализовывать в этих классах
поэтому просто реализовал наследование
*/

class animals{};
class cat: protected animals{};
class parrot: protected animals{};
class dog: protected animals{};

class figure{};
class quadrilateral:protected figure{};
class squar:protected quadrilateral{};
class diamond: protected quadrilateral{};

class vehicle{};
class car: protected vehicle{};
class bus:protected vehicle{};
class bike:protected vehicle{};

class screen{};
class keyboard{};
class laptop:protected screen,protected keyboard{};
class phone:protected screen{};
class pc: protected screen,protected keyboard{};

int main(){

}