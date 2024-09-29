#include <iostream>
using namespace std;
void create()
{
}
void display()
{
}
void insert()
{
}
void del()
{
}
int main()
{
    int ch;
    while (1)
    {
        printf("Menu\n 1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Exit\n");
        printf("Enter your choice\n");
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid operation\n");
            break;
        }
    }

    return 0;
}