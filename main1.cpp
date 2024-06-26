#include<bits/stdc++.h>
using namespace std;
void populateFile(int count,
                  std::string const& file)
{
    std::ofstream myfile(file);
    if (!myfile )
    {
        // Deal with error.
        return;
    }
    int random_integer;
    int r2;
    for(int index=0; index<count; index++){
        // specify range here
        random_integer = rand()%30;
        r2 = rand()%40;
        if(random_integer > 20 and r2 > 20){
            myfile << random_integer << " "<<r2<< "\n";
        }
        else{
            index -= 1;
        }
    }
}
void populateFile1(int count,
                  std::string const& file)
{
    std::ofstream myfile(file);
    if (!myfile )
    {
        // Deal with error.
        return;
    }
    for(int index=0; index<count; index++){
        int NoOfRandInts = 6;
        vector<int> randoms;
        for(int i = 0;i<NoOfRandInts;){
            int r = (rand()%100);
            if(r > 40){
                randoms.push_back(r);
                i++;
            }
        }
        for(int x: randoms){
            myfile << x << " ";
        }
        myfile<< "\n";
    }

}

int main(){
    // Seed the random number generator.
    srand( time( NULL ) );

    // Populate the file
    std::string file("C:/Users/rahul/OneDrive/Desktop/projectfiles/ChargingDistances.txt");
    populateFile(6, file);
    std::string file1("C:/Users/rahul/OneDrive/Desktop/projectfiles/CustomerDistances.txt");
    populateFile1(6, file1);


}