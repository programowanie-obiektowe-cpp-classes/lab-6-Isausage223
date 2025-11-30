#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::transform(people.begin(), people.end(), retval.rbegin(),
                   [](Human& h) {
                       h.birthday();                      // zwiększamy wiek
                       return h.isMonster() ? 'n' : 'y';   // 'n' jeśli potwór, 'y' w przeciwnym razie
                   });

    return retval;
}
