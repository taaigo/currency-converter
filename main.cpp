#include <iostream>

using namespace std;

int GBPtoJPY()
{
    float GBP;
    float JPYresult;

    cout << "GBP: ";
    cin >> GBP;

    JPYresult = GBP * 156.22;
    cout << GBP << "GBP" << " = " << JPYresult << "JPY";

    return 0;
}

int JPYtoGBP()
{
    float JPY;
    float GBPresult;

    cout << "JPY: ";
    cin >> JPY;

    GBPresult = JPY / 156.22;
    cout << JPY << "JPY" << " = " << GBPresult << "GBP";

    return 0;
}

int main()
{
    int choice;

    cout << "1.) GBP to JPY." << endl << "2.) JPY to GBP." << endl << "choose convertion direction: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            GBPtoJPY();
            break;
        }
        case 2:
        {
            JPYtoGBP();
            break;
        }
        default:
        {
            cout << "This is not a valid selection" << endl;
        }
    }
    
    return 0;
}
