#ifndef QWERTY_LANG_QWERTYSYNTAXEXCEPTION_H
#define QWERTY_LANG_QWERTYSYNTAXEXCEPTION_H

#include <exception>
#include <string>
#include <utility>

class QwertySyntaxException : public std::exception {
    const char *message{};
public:
    QwertySyntaxException() : std::exception() {}
    explicit QwertySyntaxException(const char *message) : std::exception(), message(message) {}

    const char *what() const noexcept override {
        return message;
    }
};


#endif //QWERTY_LANG_QWERTYSYNTAXEXCEPTION_H
