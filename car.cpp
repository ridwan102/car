#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
        int horsepower;
        int weight;
        //pointer towards memory address
        char *brand;
        
    // TODO: Declare getter and setter for brand
    public:
        //Mutator/Setter function 
        void setHorsepower(int horsepower);
        void setWeight (int weight);
        void setBrand (std::string brand_name);
    
        //getter/accessor function
        int getHorsepower() const;
        int getWeight() const;
        std::string getBrand() const;
        
};

// Define setters
void Car::setHorsepower(int horsepower){
    Car::horsepower = horsepower;
}

void Car::setWeight(int weight){
    Car::weight = weight;
}

void Car::setBrand (std::string brand_name){
    
    // Initialization of char array
    Car::brand = new char[brand_name.length() + 1];
    // copying every character from string to char array;
    strcpy(Car::brand, brand_name.c_str());
}


// Define getters
int Car::getHorsepower() const{
    return Car::horsepower;
}

int Car::getWeight() const{
    return Car::weight;
}

std::string Car::getBrand() const{
    return Car::brand;
}


// Test in main()
int main() 
{
    Car car;
    car.setHorsepower(10);
    car.setWeight(1000);
    car.setBrand("Peugeot");
    std::cout << "Your " << car.getBrand() << " has ";
    std::cout << car.getHorsepower() << " HP and weighs ";
    std::cout << car.getWeight() << " pounds" << std::endl;
}