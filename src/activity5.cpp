#include <iostream>
#include <vector>
#include "date.h"
#include "file.h"
#include "activity5.h"
#include "../include/boost/date_time/gregorian/greg_date.hpp"


using namespace std;

  
int activity5Solution()
{
    vector <File> files;
    File selectedFile;
    string ds("2002/1/25");

 boost::gregorian::date selectedDate(3000, 12, 18);
    //boost::gregorian::date date2(2014, 12, 19);
   fillFileVector(files);
   for ( File i: files)
   {  
       
       if(i.getOwner() == "admin" && (i.getName().substr((i.getName().size()) - 4,4))==".exe")
       {
            
            if(i.getDate() < selectedDate){
                selectedFile = i;
                selectedDate = i.getDate();
            }
        }
   }
   if(selectedDate.year() == 3000){
       cout << "NO FILES";
   }
   else
   {
       
        cout << selectedFile.getName();
   }
    
    return 0;
}

void fillFileVector(vector<File>& newMyFile){
    cout << "HOLA CARACOLA"<<endl;
 boost::gregorian::date date1 (2003, 6, 23);
cout << date1.year() << '\n';
cout << date1.month() << '\n';
cout << date1.day() << '\n';
 boost::gregorian::date date2 (2003, 6, 23);
 cout << date2.year() << '\n';
cout << date2.month() << '\n';
cout << date2.day() << '\n';
 boost::gregorian::date date3 (1997, 7, 2);
 cout << date3.year() << '\n';
cout << date3.month() << '\n';
cout << date3.day() << '\n';
 boost::gregorian::date date4 (1971, 2, 15);
 cout << date4.year() << '\n';
cout << date4.month() << '\n';
cout << date4.day() << '\n';
 boost::gregorian::date date5 (1979, 5, 15);
  cout << date5.year() << '\n';
cout << date5.month() << '\n';
cout << date5.day() << '\n';
 boost::gregorian::date date6 (2010, 12, 4);
  cout << date6.year() << '\n';
cout << date6.month() << '\n';
cout << date6.day() << '\n';
 boost::gregorian::date date7 (1982, 2, 8);
  cout << date7.year() << '\n';
cout << date7.month() << '\n';
cout << date7.day() << '\n';
 boost::gregorian::date date8 (1952, 12, 29);
    cout << date8.year() << '\n';
cout << date8.month() << '\n';
cout << date8.day() << '\n';
    File fich1( date1, "admin", '-', 'w', 'x', 833, "source.exe");
    File fich2( date2, "admin", 'r', '-', 'x', 854016, "blockbuster.mpeg");
    File fich3( date3, "admin", '-', '-', 'x', 821, "delete-this.py");
    File fich4( date4, "admin", '-', 'w', '-', 23552, "library.dll");
  File fich5( date5, "admin", '-', '-', 'x', 645922816, "logs.zip");
    File fich6( date6, "jane", '-', '-', 'x', 93184, "old-photos.rar");
    File fich7( date7, "jane", '-', 'w', '-', 681574400, "important.java");
    File fich8( date8, "admin", 'r', 'w', 'x', 14680064, "to-do-list.txt");

    newMyFile.push_back(fich1);
    newMyFile.push_back(fich2);
    newMyFile.push_back(fich3);
   newMyFile.push_back(fich4);
   newMyFile.push_back(fich5);
    newMyFile.push_back(fich6);
    newMyFile.push_back(fich7);
    newMyFile.push_back(fich8);
cout << "insertados";
}
