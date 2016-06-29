#ifndef CEXPERTSYSTEM_H
#define CEXPERTSYSTEM_H
#include <string.h>






class CtypeEquipment
{

public:
    CtypeEquipment();

int idequipment [7];

char nameequipment;


//string Datatable;



int ready();

int info();

int get_coordinates();

int cam_ready();

int cam_on();

int cam_off();

int report();

int photo_ready();

int processing();

int datatable();

};

CtypeEquipment::CtypeEquipment()
{

   ;
}


int CtypeEquipment::ready()
{


return (0);
}

int CtypeEquipment::info()
{


return (0);
}


int CtypeEquipment::get_coordinates()
{


return (0);
}

int CtypeEquipment::cam_on()
{


return (0);
}

int CtypeEquipment::cam_off()
{


return (0);
}

int CtypeEquipment::report()
{


return (0);
}

int CtypeEquipment::photo_ready()
{


return (0);
}

int CtypeEquipment::processing()
{


return (0);
}

int CtypeEquipment::datatable()
{


return (0);
}



class Ctypedefects
{

public:
    Ctypedefects();

int idtypedefects [154];

char namedefects;

int idequipment;

int critlevel;

int ready();

int info();

int save_result();

int cam_on();

int cam_off();

int report();

int compare();

int processing();

int datatable();



};

Ctypedefects::Ctypedefects()
{

   ;
}

int Ctypedefects::ready()
{


return (0);
}

int Ctypedefects::info()
{


return (0);
}


int Ctypedefects::save_result()
{


return (0);
}

int Ctypedefects::cam_on()
{


return (0);
}

int Ctypedefects::cam_off()
{


return (0);
}

int Ctypedefects::report()
{


return (0);
}

int Ctypedefects::compare()
{


return (0);
}

int Ctypedefects::processing()
{


return (0);
}

int Ctypedefects::datatable()
{


return (0);
}




class CElements
{

public:
    CElements();

int idelement[154];

char nameelement;

int TypeElement;

int GPSCoordinates;

int photoURL;

int cipher;

int ready();

int info();

int save_result();

int cam_on();

int cam_off();

int report();

int compare();

int processing();

int datatable();



};

CElements::CElements()
{

   ;
}

int CElements::ready()
{


return (0);
}

int CElements::info()
{


return (0);
}


int CElements::save_result()
{


return (0);
}

int CElements::cam_on()
{


return (0);
}

int CElements::cam_off()
{


return (0);
}

int CElements::report()
{


return (0);
}

int CElements::compare()
{


return (0);
}

int CElements::processing()
{


return (0);
}

int CElements::datatable()
{


return (0);
}

class Cstandard
{

public:
    Cstandard();

int idstandart;

char nameestandart;

int iddefects;



//string Datatable;



int ready();

int info();

int get_coordinates();

int cam_ready();

int cam_on();

int cam_off();

int report();

int photo_ready();

int processing();

int datatable();

};

Cstandard::Cstandard()
{

   ;
}


int Cstandard::ready()
{


return (0);
}

int Cstandard::info()
{


return (0);
}


int Cstandard::get_coordinates()
{


return (0);
}

int Cstandard::cam_on()
{


return (0);
}

int Cstandard::cam_off()
{


return (0);
}

int Cstandard::report()
{


return (0);
}

int Cstandard::photo_ready()
{


return (0);
}

int Cstandard::processing()
{


return (0);
}

int Cstandard::datatable()
{


return (0);
}


class CDefect
{

public:
    CDefect();

int iddefects;

char namedefects;

int idelement;

int powerDefect;

int MaterialURL;



//string Datatable;



int ready();

int info();

int get_coordinates();

int cam_ready();

int cam_on();

int cam_off();

int report();

int photo_ready();

int processing();

int datatable();

};

CDefect::CDefect()
{

   ;
}


int CDefect::ready()
{


return (0);
}

int CDefect::info()
{


return (0);
}


int CDefect::get_coordinates()
{


return (0);
}

int CDefect::cam_on()
{


return (0);
}

int CDefect::cam_off()
{


return (0);
}

int CDefect::report()
{


return (0);
}

int CDefect::photo_ready()
{


return (0);
}

int CDefect::processing()
{


return (0);
}

int CDefect::datatable()
{


return (0);
}

class CExpertSystem
{

public:
    CExpertSystem();

};

CExpertSystem::CExpertSystem()
{

   ;
}





#endif // CEXPERTSYSTEM_H
