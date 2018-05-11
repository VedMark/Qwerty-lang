#ifndef QWERTY_LANG_VARIABLESET_H
#define QWERTY_LANG_VARIABLESET_H

#include "QwertyParserBaseVisitorImpl.h"

namespace AntlrQwerty {


    template<class T1, class T2>
    class PairSet : public std::set<std::pair<T1, T2> > {
    public:
        PairSet() = default;

        auto findByFirst(T1 value) {
            for (auto s : *this) {
                if (s.first == value) {
                    return this->find(s);
                }
            }
            return this->end();
        }

        auto findBySecond(T2 value) {
            for (auto s : *this) {
                if (s.second == value) {
                    return this->find(s);
                }
            }
            return this->end();
        }
    };

}


#endif //QWERTY_LANG_VARIABLESET_H
