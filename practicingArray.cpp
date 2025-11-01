#include <iostream>
using namespace std;
void displayValues(int pop[], int);
void accept(int pop[], int);
int calculateSum(int pop[], int n);
void displaySum(int);

int main()
{

    int n;

    cout << "enter the number of values you want to enter in your list: ";

    cin >> n;
    int *pop = new int[n];
    accept(pop, n);
    displayValues(pop, n);
    int calculateSum(int pop[], int n);
    int sum = calculateSum(pop, n);
    displaySum(sum);
    delete[] pop;
    return 0;
}

void accept(int pop[], int n)
{
    cout << "enter values for the list: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Value Number " << i << " :";
        cin >> pop[i];
    }
}
int calculateSum(int pop[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pop[i];
    }
    return sum;
}
void displayValues(int pop[], int n)
{
    cout << "The list values are: ";
    for (int i = 0; i < n; i++)
    {

        cout << pop[i] << ", ";
    }
    cout << endl;
}

void displaySum(int sum)
{
    cout << "the sum of the values in the list is: " << sum << endl;
}