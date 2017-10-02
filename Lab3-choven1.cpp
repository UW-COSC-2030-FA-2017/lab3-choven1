#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Press Enter to Begin...";
    //Short INT Implementation
    {
        cin.get();
        cout << "\nOverflow Implementation of short integers:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        int NMax1=0;
        short ISum1=0;
        short i1=1;

        //Q2: Since an overflow can be detected by a sign change during addition, we test that the Sum is >= 0.
        while (ISum1 >= 0) //was used to find the minimum value of NMax
        {
            NMax1 += 1; //increments NMax at each attempt

            while (i1 <= NMax1) //loops until i > n
            {
                ISum1 += i1; //adds the current integer value of 'i' to the running total
                i1 ++; //increments 'i' to the next integer
            }

        }
        cout<<"Short Nmax: "<< setw(6) << NMax1<<endl;
        cout<<"Short Sum : "<< setw(6) << ISum1<<endl;
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');

    }

    //Long INT Implementation
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\nOverflow Implementation of long integers:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        int NMax2=0;
        long ISum2=0;
        long i2=1;

        //Q3: again as we can detect an overflow by a change of sign, we watch for the sum to fall below 0.
        while (ISum2 >= 0) //was used to find the minimum value of NMax
        {

            NMax2 +=1; //increments NMax at each attempt

            while (i2 <= NMax2) //loops until i > n
            {
                ISum2 += i2; //adds the current integer value of 'i' to the running total
                i2 ++; //increments 'i' to the next integer
            }

        }
        cout<<"Long Nmax: " << setw(11) << NMax2<<endl;
        cout<<"Long Sum : " << setw(11) << ISum2<<endl;
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    //Float Implementation
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\nOverflow Implementation of floats:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        int NMax3=0;
        long i3=1;
        float IProd3=1;
        float IProd3Temp=1;

        //Q4 floats overflow differently, they instead output a value 'inf' to the console
        {
            NMax3 = 35; //sets the n value, the overflow occurs at n=35
            //cout << "NMax: "<< NMax3 <<endl;


            while (i3 <=NMax3) //loops till i > n
            {
                IProd3 *= i3; //computes the 'n'th factorial
                //cout << i3 << ": " << IProd3 << endl;
                i3 ++;
            }
            //cout << "Product: " << IProd3 << endl;
        }
        cout<<"Float Nmax: "<<NMax3<<endl;
        cout<<"Float Prod: "<<IProd3<<endl;
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    //Double Implementation
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\nOverflow Implementation of doubles:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        int NMax4=0;
        long i4=1;
        double IProd4=1;

        //Q5 Double overflow similar to Floats, displaying a value of inf to the console
        {
            NMax4 = 171; //sets the n value, the overflow occurs at n=171
            //cout << "NMax: "<< NMax3 <<endl;


            while (i4 <=NMax4) //loops till i > n
            {
                IProd4 *= i4; //computes the 'n'th factorial
                //cout << i4 << ": " << IProd4 << endl;
                i4 ++;
            }
            //cout << "Product: " << IProd3 << endl;
        }
        cout<<"Double Nmax: "<<NMax4<<endl;
        cout<<"Double Prod: "<<IProd4<<endl;
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    //1/n Float implmentation
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\n1/n with floats implementation:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        int NMax5=0;
        float i5=1;
        float ISum5=0;
        float ISum5Temp=0;

        //Q6(1): I actually have no idea what to expect for a value
        {
            NMax5 = 10000000; //sets the n value,


            while (i5 <=NMax5) //loops till i > n
            {
                ISum5Temp = 1/i5; //computes the 'n'th factorial
                ISum5 += ISum5Temp;
                //cout << i5 << ": " << ISum5 << endl;
                i5 += 1;
            }
            ISum5 -= 1;
        }
        cout<<"1/n float Nmax: "<<NMax5<<endl;
        cout<<"1/n float Sum : "<<ISum5<<endl;
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    //1/n Double implmentation
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\n1/n with doubles implementation:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        int NMax6=0;
        double i6=1;
        double ISum6=0;
        double ISum6Temp=0;

        //Q6(2): changing the max value of n creates variance in the sum of the fractions, likely due to the rounding in a float vs a double
        {
            NMax6 = 10000000; //sets the n value,


            while (i6 <=NMax6) //loops till i > n
            {
                ISum6Temp = 1/i6;
                ISum6 += ISum6Temp; //computes the 'n'th factorial
                //cout << i6 << ": " << ISum6 << endl;
                i6 += 1;
            }
            ISum6 -= 1;
        }
        cout<<"1/n double Nmax: "<<NMax6<<endl;
        cout<<"1/n double Sum : "<<ISum6<<endl;
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    //puzzle float
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\nPuzzle question with floats:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        //using a float causes the loop to trigger again after 4.4 is reached, i don't understand know why this occurs
        for (float i = 3.4; i < 4.4; i += 0.2)
        {
            cout << "i = " << i << endl;
        }
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    //puzzle double
    {
        cout << "Press Enter to Continue...";
        cin.get();
        cout << "\nPuzzle question with doubles:\n";
        cout << setfill('-') << setw(30) << '\n' << setfill(' ');
        //changing the variable to a double causes the loop to correctly stop at 4.4 and not output it.
        for (double i = 3.4; i < 4.4; i += 0.2)
        {
            cout << "i = " << i << endl;
        }
        cout << setfill('-') << setw(30) << '\n' << '\n' << setfill(' ');
    }

    return 0;
}
