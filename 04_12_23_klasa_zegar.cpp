#include <iostream>
#include <string>
using std::cout, std::endl, std::string, std::to_string;

class Clock{
    private:
        int hour = 0;
        int minute = 0;
        int second = 0;

        void validatePositive(){
            if(second / 60 != 0){
                minute += second / 60;
                second = second % 60;
            }

            if(minute / 60 != 0){
                hour += minute / 60;
                minute = minute % 60;
            }

            hour = hour % 24;
        }

        void validateNegative(){
            if(second < 0){
                if(second > -60)
                    minute -= 1;
                else
                    minute += second / 60;
                second = 60 + (second % 60);
            }

            if(minute < 0){
                if(minute > -60)
                    hour -= 1;
                else
                    hour += minute / 60;
                minute = 60 + (minute % 60);
            }

            if(hour < 0)
                hour = 24 + (hour % 24);
        }
    public:
        Clock() = default;

        Clock(int hour, int minute = 0, int second = 0){
            plusHours(hour);
            plusMinutes(minute);
            plusSeconds(second);
        };

        void tick(){
            second += 1;
            validatePositive();
        }

        void plusSeconds(int seconds){
            second += seconds;
            
            if(seconds > 0)
                validatePositive();

            else if(seconds < 0)
                validateNegative();
        }

        void plusMinutes(int minutes){
            minute += minutes;

            if(minutes > 0)
                validatePositive();
            
            else if(minutes < 0)
                validateNegative();
        }

        void plusHours(int hours){
            hour += hours % 24;
        }

        bool operator ==(Clock& clock){
            if(clock.hour == hour && clock.minute == minute && clock.second == second)
                return true;
            return false;
        }

        string toString(){
            string out = "";
            if(hour < 10)
                out += '0';
            
            out += to_string(hour);
            out += ':';

            if(minute < 10)
                out += '0';

            out += to_string(minute);
            out += ':';

            if(second < 10)
                out += '0';
            
            out += to_string(second);

            return out;
        }
};

int main() {
    Clock test(9, 0, 15);
    Clock casio(12, 42, 43);
    Clock apple(12, 42, 43);

    if(casio == test)
        cout << "EQUAL";
    else
        cout << "DIFFERENT!";

    cout << endl;

    if(apple == casio)
        cout << "EQUAL!";
    else
        cout << "DIFFERENT!";

    cout << endl;

    cout << casio.toString() << endl;

    casio.plusHours(-30);
    cout << casio.toString() << endl;

    casio.plusMinutes(-66);
    cout << casio.toString() << endl;

    casio.plusSeconds(22);
    cout << casio.toString() << endl;

    casio.plusSeconds(-10);
    cout << casio.toString() << endl;
}