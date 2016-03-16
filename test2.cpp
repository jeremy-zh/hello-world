
class Person
{
private:
    int m_ID;
    int m_age;
    char* m_name;
    int sex;
    
public:
    Person(int id) : m_ID(id) {}
    void SetAge(int nAge)
    {
        m_age = nAge;
    }
    
}