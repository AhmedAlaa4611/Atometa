#include <iostream>
#include <vector>
#include <string>
using namespace std;

class State
{
private:
    struct arrow
    {
        char alphabet;
        string state_goes;
    };
private:
    string state_num;
    arrow arrow_1;     // output arrow 1
    arrow arrow_2;     // output arrow 2
public:
    // Constructor.
    State()
    {
        state_num = "q0";
        arrow_1.alphabet = '0';
        arrow_1.state_goes = "q1";
        arrow_2.alphabet = '1';
        arrow_2.state_goes = "q2";
    }
    // Set.
    void set_Attributes()
    {
        cout << "Enter the state name: ";
        cin >> state_num;
        cout << "Enter the output 1 arrow's alphabet: ";
        cin >> arrow_1.alphabet;
        cout << "Enter the name of state that this arrow will go: ";
        cin >> arrow_1.state_goes;
        cout << "Enter the output 2 arrow's alphabet: ";
        cin >> arrow_2.alphabet;
        cout << "Enter the name of state that this arrow will go: ";
        cin >> arrow_2.state_goes;
        cout << endl;
    }
    // Get.
    string get_name()
    {
        return state_num;
    }
    // Functions.
    string Regular_Function(char ch)
    {
        if (ch == arrow_1.alphabet)
        {
            // cout << arrow_1.state_goes << endl;
            return arrow_1.state_goes;
        }
        else
        {
            // cout << arrow_2.state_goes << endl;
            return arrow_2.state_goes;
        }
    }
};

int main()
{
    int count_states;                                   // How many states.
    cout << "Enter the number of states: ";
    cin >> count_states;

    cout << "Make sure to give the program the start state as the first one." << endl;
    vector<State> vec;
    for (int i = 0; i < count_states; i++)
    {
        State obj;
        obj.set_Attributes();
        vec.push_back(obj);
    }

    int count_final;                                    // How many final states.
    cout << "Enter the count of the final states: ";
    cin >> count_final;
    cout << "Enter the names of them all:" << endl;
    vector<string> final_states;
    for (int i = 0; i < count_final; i++)
    {
        string temp;
        cin >> temp;
        final_states.push_back(temp);
    }

    string st;
    cout << "Enter your string: ";
    cin >> st;

    int j = 0;
    for (int i = 0; i < st.size(); i++)
    {
        string found = vec[j].Regular_Function(st[i]);     // Using phantom here.
        for (j = 0; j < vec.size(); j++)
        {
            if(vec[j].get_name() == found)
                break;
        }
    }

    bool isAccepted = false;
    for (int i = 0; i < final_states.size(); i++)
    {
        if (vec[j].get_name() == final_states[i])
        {
            isAccepted = true;
            break;
        }
    }

    if (isAccepted == true)
        cout << "accept" << endl;
    else
        cout << "reject" << endl;
    system("pause");
    return 0;
}

// M1: Ends with 01 (from slides).
/*
3
q0
1
q0
0
q1
q1
0
q1
1
q2
q2
0
q1
1
q0
1
q2
01110
*/

// M2: Ends with 1 (from book page 37).
/*
2
q0
0
q0
1
q1
q1
1
q1
0
q0
1
q1
010101011
*/

// M3: Starts and ends with the same symble (from book page 38).
/*
5
q0
a
q1
b
q3
q1
a
q1
b
q2
q2
b
q2
a
q1
q3
b
q3
a
q4
q4
a
q4
b
q3
2
q1
q3
abbbbbabab
*/