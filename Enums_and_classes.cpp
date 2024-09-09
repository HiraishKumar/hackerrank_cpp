
#include <iostream>

class Log {
public:
    enum Level {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    Level m_level = LevelInfo;

public:
    void SetLevel(Level level) {
        m_level = level;
    };
    void Error(const char* Message) {
        if (m_level >=LevelError) {
            std::cout << "Error: " << Message << std::endl;
        };
    };

    void Warn(const char* Message) {
        if (m_level >= LevelWarning) {
            std::cout << "Warning: " << Message << std::endl;
        };
    };

    void Info(const char* Message) {
        if (m_level >= LevelInfo) {
            std::cout << "Info: " << Message << std::endl;
        };
    };
};

int main(){
    Log log;
    log.SetLevel(Log::LevelError);
    log.Info("This is a Info Message");
    log.Warn("this is a warn Message");
    log.Error("This is an Error Message");
    std::cout << "Hello World!\n" << std::endl;
    return 0;
}
