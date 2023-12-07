#include <iostream>
using namespace std;

class Cat {
public:
    string nick;
    int age;
    double weight;
    int paws;
    bool angry;

    void Sound() {
        cout << "Sound meow meow meow" << "\n";
    }
    void Play() {
        cout << "Play with me!" << "\n";
    }
    void Eat() {
        cout << "I want to eat meow" << "\n";
    }
    void Walk() {
        cout << "I want to go out" << "\n";
    }
    void PetCat() {
        cout << "Caress me." << "\n";
    }
};

class Person {
public:
    string name;
    int age;
    double height;
    bool isHappy;
    bool isTired;

    void Sleep() {
        cout << "I am tired, need to sleep" << "\n";
    }
    void Eat() {
        cout << "I am hungry, time to eat" << "\n";
    }
    void Work() {
        cout << "I have to finish my work" << "\n";
    }
    void Walk() {
        cout << "I need some fresh air" << "\n";
    }
    void Relax() {
        cout << "Time to relax and unwind" << "\n";
    }
};

class Dog {
public:
    string name;
    int age;
    bool isBarking;
    bool isHungry;
    double weight;

    void Bark() {
        cout << "Woof woof woof" << "\n";
    }
    void Play() {
        cout << "Let's play fetch!" << "\n";
    }
    void Eat() {
        cout << "I'm hungry, feed me!" << "\n";
    }
    void Run() {
        cout << "I want to run and play" << "\n";
    }
    void Sleep() {
        cout << "Time for a nap" << "\n";
    }
};

class Car {
public:
    string model;
    string color;
    int year;
    bool isRunning;
    double speed;

    void Start() {
        cout << "Starting the car" << "\n";
    }
    void Stop() {
        cout << "Stopping the car" << "\n";
    }
    void Accelerate() {
        cout << "Let's speed up!" << "\n";
    }
    void Turn() {
        cout << "Making a turn" << "\n";
    }
    void Park() {
        cout << "Parking the car" << "\n";
    }
};

class House {
public:
    string address;
    int rooms;
    double area;
    bool isOccupied;
    bool isClean;

    void Clean() {
        cout << "Time to clean the house" << "\n";
    }
    void Cook() {
        cout << "Let's prepare a meal" << "\n";
    }
    void Relax() {
        cout << "Relaxing at home" << "\n";
    }
    void Decorate() {
        cout << "Adding new decorations" << "\n";
    }
    void Repair() {
        cout << "Fixing something at home" << "\n";
    }
};

int main() {
        Cat myCat;
        myCat.nick = "Другие ";
        myCat.age = 5;
        myCat.weight = 4.5;
        myCat.paws = 4;
        myCat.angry = false;

        Person person;
        person.name = "Borat";
        person.age = 30;
        person.height = 175.5;
        person.isHappy = true;
        person.isTired = false;

        Dog myDog;
        myDog.name = "Buddy";
        myDog.age = 3;
        myDog.isBarking = false;
        myDog.isHungry = true;
        myDog.weight = 12.3;

        Car myCar;
        myCar.model = "Toyota";
        myCar.color = "Red";
        myCar.year = 2020;
        myCar.isRunning = false;
        myCar.speed = 0.0;

        House myHouse;
        myHouse.address = "123 Main St";
        myHouse.rooms = 4;
        myHouse.area = 200.0;
        myHouse.isOccupied = true;
        myHouse.isClean = false;

       
        person.Sleep();
        myCat.PetCat();
        myCat.Eat();
        person.Work();
        myDog.Play();
        myHouse.Clean();
        person.Relax();
}
