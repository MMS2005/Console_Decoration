#include <iostream>
#include <Windows.h>
#include <string>

#include <ctime>
namespace CDec
{
    namespace ConsoleForeground
    {
        enum {
            BLACK = 0,
            DARKBLUE = FOREGROUND_BLUE,
            DARKGREEN = FOREGROUND_GREEN,
            DARKCYAN = FOREGROUND_GREEN | FOREGROUND_BLUE,
            DARKRED = FOREGROUND_RED,
            DARKMAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
            DARKYELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
            DARKGRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
            GRAY = FOREGROUND_INTENSITY,
            BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
            GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
            CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
            RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
            MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
            YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
            WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
        };
    }
	class ERROR_MSG
	{
        
	public:
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        std::time_t t = std::time(0);

        std::tm* now = std::localtime(&t);
        
        CONSOLE_FONT_INFOEX font_info;

        void ErrorMessage(std::string& message)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::RED);

            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void ErrorMessage(std::string& message, wchar_t fontfamily)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::RED);
            font_info.FontFamily = fontfamily;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void ErrorMessage(std::string& message, wchar_t fontfamily, int32_t fontwidth, int32_t fontheight)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::RED);
            font_info.FontFamily = fontfamily;
            font_info.dwFontSize.X = fontwidth;
            font_info.dwFontSize.Y = fontheight;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void ErrorMessage(std::string& message, wchar_t fontfamily, int32_t fontwidth, int32_t fontheight, int32_t fontweight)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::RED);
            font_info.FontFamily = fontfamily;
            font_info.dwFontSize.X = fontwidth;
            font_info.dwFontSize.Y = fontheight;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
            
        }
        


	};
    class SUCESS_MSG
    {
       
    public:
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        std::time_t t = std::time(0);

        std::tm* now = std::localtime(&t);

        CONSOLE_FONT_INFOEX font_info;
        void SucessMessage(std::string& message)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::GREEN);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void SucessMessage(std::string& message, wchar_t fontfamily)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::GREEN);
            font_info.FontFamily = fontfamily;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
	 
        void SucessMessage(std::string& message, wchar_t fontfamily, int32_t fontwith, int32_t fontheight)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::GREEN);
            font_info.FontFamily = fontfamily;
            font_info.dwFontSize.X = fontwidth;
            font_info.dwFontSize.Y = fontheight;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void SucessMessage(std::string& message, wchar_t fontfamily, int32_t fontwidth, int32_t fontheight, int32_t fontweight)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::GREEN);
            font_info.FontFamily = fontfamily;
            font_info.dwFontSize.X = fontwidth;
            font_info.dwFontSize.Y = fontheight;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;

        }
        
    };
    class WARN_MSG
    {
    public:
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        std::time_t t = std::time(0);

        std::tm* now = std::localtime(&t);

        CONSOLE_FONT_INFOEX font_info;
        void WarnMessage(std::string& message)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::YELLOW);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void WarnMessage(std::string& message, wchar_t fontfamily)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::YELLOW);
            font_info.FontFamily = fontfamily;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
        void WarnMessage(std::string& message, wchar_t fontfamily, int32_t fontwidth, int32_t fontheight)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::YELLOW);
            font_info.FontFamily = fontfamily;
            font_info.dwFontSize.X = fontwidth;
            font_info.dwFontSize.Y = fontyheight;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;
        }
	    //Font X Coords Param stats the X Coordinate Or the Witdh of the Font, Y States the Height of the Coords
        void WarnMessage(std::string& message, wchar_t fontfamily, int32_t fontwidth, int32_t fontheight, int32_t fontweight)
        {
            SetConsoleTextAttribute(handle, ConsoleForeground::GREEN);
            font_info.FontFamily = fontfamily;
            font_info.dwFontSize.X = fontwidth
            font_info.dwFontSize.Y = fontheight;
            SetCurrentConsoleFontEx(handle, FALSE, &font_info);
            std::cout << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "]";
            std::cout << message;

        }

    };


}




