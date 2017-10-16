#include "ComissionAndSalary.h"

ComissionAndSalary::ComissionAndSalary( const string& firstname, const string& surname, double baseSalary, double comissionPerItem, int items):
    Employee{firstname, surname},
    _base_salary{baseSalary},
    _comission_per_item{comissionPerItem},
    _items{items}
{
    
}

void ComissionAndSalary::setSalary( double baseSalary){
    _base_salary = baseSalary;
}

void ComissionAndSalary::SetNumeberOfItems( int items){
    _items = items;
}

void ComissionAndSalary::setComissionPerItem( double comissionPerItem ){
    _comission_per_item = comissionPerItem;
}

double ComissionAndSalary::earnings()const{
    
    return _base_salary + _comission_per_item*_items;
}

void ComissionAndSalary::print() const{
    cout << " Comission Worker: ";
    Employee::print();
}