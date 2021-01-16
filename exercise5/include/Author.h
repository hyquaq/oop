#ifndef AUTHOR_H
#define AUTHOR_H


class Author
{
private:
    string name;
    string email;
public:
    Author(string name, string email)
    {
        this->name = name;
        this->email = email;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getEmail()
    {
        return email;
    }

    void setEmail(string email)
    {
        this->email = email;
    }
    virtual ~Author();

};

#endif // AUTHOR_H
