#include<iostream>
#include<stdlib.h>
#include<sqlite3.h>
using namespace std;
//creating singleton design pattern
static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}
class Logger{
    int ID;
    sqlite3 *db;
    int rc;
    string sql;
    string name;
    char *zErrMsg = 0;
    static Logger* instancePtr;
    Logger(){}
    public:
    static Logger* getInstance(){           
            return instancePtr;
            }
void setdata(){
    cin>>ID;
    cin>>name;
}
void writeIntoLogger(){
    rc=sqlite3_open("example.db",&db);
    if( rc ){
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      //return(0);
      } else {
      fprintf(stderr, "Opened database successfully\n");
   }

        
    
 sql = "CREATE TABLE PEOPLE ("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "NAME           TEXT    NOT NULL);";
    
    // Run the SQL (convert the string to a C-String with c_str() )
    rc = sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);
    
    // Close the SQL connection
    sqlite3_close(db);

}
void getdata(){
    cout<<ID<<endl<<name<<endl;
}
};
Logger *Logger::instancePtr=new Logger();
int main(){ 
    Logger* obj=Logger :: getInstance();

    obj->setdata();
    obj->getdata();
    obj->writeIntoLogger();
    
    return 0;
}