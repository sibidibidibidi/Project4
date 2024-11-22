#include<iostream>
using namespace std;

class DynamicArray
{
public:
    static int count;
    DynamicArray(int length) : data{ new int[length] {} }, length{ length }
    {
        count++;
    }
    ~DynamicArray()
    {
        delete[] data;
    }
    DynamicArray() : DynamicArray(80) {}
    DynamicArray(const DynamicArray& other) : data{ new int[other.length] }, length{ other.length }
    {
        copy(other.data, other.data + length, data);
        count++;
    }

    void showCount()
    {
        cout << count;
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << char(data[i]);
        }
        cout << endl;
    }

    void inputValues()
    {
        for (int i = 0; i < length; i++)
        {
            cin >> character;
            data[i] = character;
        }
    }

private:
    int length;
    int* data;
    char character;
};

int DynamicArray::count = 0;

int main()
{
    DynamicArray array1(5);
    array1.inputValues();
    DynamicArray array2{ array1 };
    array2.display();
    array1.showCount();
}
