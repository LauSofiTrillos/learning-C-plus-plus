#include <iostream>

using namespace std;

class Dog
{
public:

    Dog (string Name, string BarkType)
    {
        mName = Name;
        mBark = BarkType;
    }

    string GetName ()
    {
        return mName;
    }

    void SetName (string newName)
    {
        mName = newName;
    }
    void Bark ()
    {
        cout << mBark << endl;
    }
private:

    string mName;
    string mBark;
};

int main()
{
    Dog PerroUno ("Juan", "Guao");
    cout << PerroUno.GetName() << endl;
    PerroUno.Bark();
    PerroUno.SetName("Dory");
    cout << PerroUno.GetName() << endl;

    Dog PerroDos ("Boto", "Woof");
    cout << PerroDos.GetName() << endl;
    PerroDos.Bark();

}

// Por lo que mName es privado solo se puede modificar a traves de SetName 
