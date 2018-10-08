typedef  struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} eEmployee;


int findEmpty(eEmployee list[],int lenght);
void viewEmployee(eEmployee list);
void viewEmployees(eEmployee list[], int len);
int initEmployees(eEmployee list[], int lenght);
int addEmployee(eEmployee list[], int lenght);
int modifyEmployee(eEmployee list[], int len);
int findEmployeeById(eEmployee list[], int lenght, int id);
int removeEmployee(eEmployee list[], int len);
int sortEmployees(eEmployee list[], int len);
