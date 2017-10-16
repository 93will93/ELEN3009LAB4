#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "ComissionAndSalary.h"
#include "Employee.h"
#include "Fixed.h"
#include "Hourly.h"
#include <memory>

using std::make_shared;
using std::shared_ptr;

TEST_CASE(" Worker on comission returns the right earnings "){
    auto comisionWorker_ptr = make_shared<ComissionAndSalary>("William", "Becerrra", 1000 ,75.95, 13);
    CHECK(1987.35 == comisionWorker_ptr->earnings());
}

TEST_CASE("Commission Workers salary can be set"){
    auto comisionWorker_ptr = make_shared<ComissionAndSalary>("Sailen", "Nair", 1000, 75.95, 13);
    comisionWorker_ptr->setSalary(1500);
        CHECK(2487.35 == comisionWorker_ptr->earnings());
}

TEST_CASE("Commission Workers set a new comission rate"){
    auto comisionWorker_ptr = make_shared<ComissionAndSalary>("William", "Becerrra", 1000, 75.95, 13);
    comisionWorker_ptr->setComissionPerItem(99.90);
 
    CHECK(2298.70 == comisionWorker_ptr->earnings());
}

TEST_CASE("Commission Workers to set new number of items"){
    auto comisionWorker_ptr = make_shared<ComissionAndSalary>("Sailen", "Nair", 1000, 75.95, 13);
    comisionWorker_ptr->SetNumeberOfItems(20);

    CHECK(2519 == comisionWorker_ptr->earnings());
}