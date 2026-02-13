#include <iostream>
using namespace std;

int main()
{
    const int GREEN_BASE = 30;
    const int YELLOW_BASE = 5;
    const int RED_BASE = 25;

    int timeOfDay;
    int ambulanceInput;
    bool ambulance;

   
    cin >> timeOfDay;
    cin >> ambulanceInput;

    ambulance = (ambulanceInput == 1);

   
    int GREEN = GREEN_BASE;
    int YELLOW = YELLOW_BASE;
    int RED = RED_BASE;

  
    switch (timeOfDay)
    {
    case 1: 
        GREEN = 40;
        YELLOW = 5;
        RED = 20;
        break;

    case 2: 
        GREEN = 30;
        YELLOW = 5;
        RED = 25;
        break;

    case 3: 
        GREEN = 25;
        YELLOW = 5;
        RED = 30;
        break;

    default:
        cout << "Invalid Time of Day!" << endl;
        return 0;
    }

    int cycle = 1;

    while (cycle <= 10)
    {
        cout << "\n===== Signal Cycle " << cycle << " =====\n";

        for (int j = 1; j <= 4; j++)
        {
            cout << "Junction " << j << ":\n";

            if (ambulance == true)
            {
                cout << "  Emergency Detected!\n";
                cout << "  GREEN = 60 seconds (Override)\n";
                cout << "  YELLOW = 5 seconds\n";
                cout << "  RED = 10 seconds\n";
            }
            else
            {
                cout << "  GREEN = " << GREEN << " seconds\n";
                cout << "  YELLOW = " << YELLOW << " seconds\n";
                cout << "  RED = " << RED << " seconds\n";
            }

            cout << endl;
        }

        cycle++;
    }

    cout << "===== Simulation Completed =====\n";

    return 0;
}
