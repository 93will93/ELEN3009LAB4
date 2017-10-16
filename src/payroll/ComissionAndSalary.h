// Definition of a class ComissionAndSalary
#ifndef COMISSION_H
#define  COMISSION_H

#include "Employee.h"

class ComissionAndSalary: public Employee{
public:
    ComissionAndSalary( const string& firstname, const string& surname, double baseSalary, double comissionPerItem, int items);
    void setSalary( double baseSalary);
    void SetNumeberOfItems( int items);
    void setComissionPerItem( double comissionPerItem );
    
    virtual double earnings()const override;
    void print() const;
    
private:
    double _base_salary;
    double _comission_per_item;
    int _items;
};

#endif // COMISSION_H