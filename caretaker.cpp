class Caretaker {
    public:
    int getSalary(){return m_salary;};

    int feedAnimal(){};
    bool furnishExhibit(){};
    bool healAnimal(){};

    private:
    int m_salary = 2000;
};