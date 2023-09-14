#include <bits/stdc++.h>
using namespace std;

class registar{
public:
    string name;
    string email;
    string phone;
registar(){//constructor
name="billal";
email="billal4720@gmail.com";
phone="+8801xxxxxxx";

}
~registar(){//destructor
 cout<<"\n\n\n---------destructor data---------\n\n\n"<<endl;
    cout<<"name :"<<name<<endl;
     cout<<"email :"<<email<<endl;
     cout<<"phone :"<<phone<<endl;
}
    void inputdata(){
cout<<"\n\n\n---------general registration---------\n\n\n"<<endl;
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your email :";
    cin>>email;
    cout<<"Enter your phone :";
    cin>>phone;
    }
    void printregidata(){
    cout<<"\n\n\n---------general data print---------\n\n\n"<<endl;
    cout<<"name :"<<name<<endl;
     cout<<"email :"<<email<<endl;
     cout<<"phone :"<<phone<<endl;

    }
};

class donorregistration:public registar{   //inheritance single
public:
string address;
string bloodgroup;
int age;
string dateofbirth;
string bdb; //blood donate before


  void inputdata(){  //overridding _polymorphysm

      cout<<"\n\n\n---------Donor registration---------\n\n\n"<<endl;
    cout<<"name :";
    cin>>name;
    cout<<"email :";
    cin>>email;
    cout<<"phone :";
    cin>>phone;
    cout<<"Enter your address :";
    cin>>address;
    cout<<"Enter your bloodgroup :";
    cin>>bloodgroup;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Enter date of birth :";
    cin>>dateofbirth;
    cout<<"have ever donated blood before : ";
    cin>>bdb;
    }
void printregidata(){//over ridding _ polymorphism 
     cout<<"\n\n\n-----donor registration info---------\n\n\n";
     cout<<"name :"<<name<<endl;
     cout<<"email :"<<email<<endl;
     cout<<"phone :"<<phone<<endl;
     cout<<"address :"<<address<<endl;
     cout<<"bloodgroup"<<bloodgroup<<endl;
     cout<<"age"<<age<<endl;
     cout<<"date of birth :"<<dateofbirth<<endl;
     cout<<"have ever donated blood before"<< bdb<<endl;
    }

};
// info recipient
class donorrequest{
//encapsulation 
private:
 string ppblm; //patient problem

public:
 string reciname;
 string reciphone;
 string reciaddress;
 string hospitalname;
 string nbg; //need blood group
 string gender;
 int nth; //How many bags of blood?
 donorrequest(int n){  //parameterez constructor
 nth=n;
 }


   void inputdatarequ(){
cout<<"---------Donor request---------"<<endl;
    cout<<"Enter blood recipient name :";
    cin>>reciname;
    cout<<"Enter blood recipient phone :";
    cin>>reciphone;

    cout<<"Enter blood receving address :";
    cin>>reciaddress;
    cout<<"Enter recipient bloodgroup :";
    cin>>nbg;

   }
   //encapsulation
     void inputdata2(string p){
     ppblm=p;
     }
   string outdata(){
   return ppblm;
   }
     void inputdatarequ(string h,string g){ //overloading
     hospitalname= h;
     gender=  g;
     }

     void printrequestdata(){  //overridding
cout<<"---------Donor request information---------"<<endl;
cout<<"blood recipient name :"<<reciname<<endl;
cout<<"blood recipient phone :"<<reciphone<<endl;
cout<<"blood receving address :"<<reciaddress<<endl;
cout<<"recipient bloodgroup :"<<nbg<<endl;
cout<<"recipient problem :"<<ppblm<<endl;
cout<<"recipient hospitalname :"<<hospitalname<<endl;
cout<<"Enter recipient gender: "<<gender<<endl;
cout<<"blood donor number : "<<nth<<endl;//parameter constructor

     }

     void donordatail(string bg){

     cout<<"donor name: sabbir ! BG : '"<<bg<<"' ! phone :01xxxxxxxx ! address:kawla ! \n ";
                        cout<<"donor name: billal ! BG : '"<<bg<<"' ! phone :01xxxxxxxx ! address:uttata ! \n ";
                                    cout<<"donor name: rahomat ! BG : '"<<bg<<"'  ! phone :01xxxxxxxx ! address: thakurgaon ! \n ";
                                                cout<<"donor name: kiyam ! BG : '"<<bg<<"'  ! phone :01xxxxxxxx ! address: dhanmondi ! \n ";
                                                            cout<<"donor name: mubin ! BG :  '"<<bg<<"'  ! phone :01xxxxxxxx ! address: jatrabari ! \n ";
                                                                        cout<<"donor name: sahib ! BG : '"<<bg<<"'  ! phone :01xxxxxxxx ! address: rongpur ! \n ";
                                                                                    cout<<"donor name: kabir ! BG :'"<<bg<<"'  ! phone :01xxxxxxxx ! address:dhaka ! \n ";


     }





     void finddonor1(){
       //  string tolow=tolower(nbg);
  cout<<"\n\n\n\n<--------------our application have available '"<<nbg<<"' blood donor---------->\n\n"<<endl;
       if(nbg== "a+"){
         donordatail(nbg);
        }

       if(nbg== "a-"){
              donordatail(nbg);
        }

         if(nbg== "b+"){
              donordatail(nbg);
        }
          if(nbg== "b-"){
   donordatail(nbg);
        }
        if(nbg== "o+"){
              donordatail(nbg);
        }

         if(nbg== "o-"){
             donordatail(nbg);
        }

         if(nbg== "ab"){
             donordatail(nbg);
        }
         if(nbg== "ab-"){
              donordatail(nbg);
        }
        else{
            cout<<"sir ! please make blood donor request .";
        }
     }
};

class BMICalculator {
public:
    // Pure virtual function
    virtual double calculateBMI(double weight, double height) = 0;

};

class SimpleBMICalculator : public BMICalculator {
public:
double calculateBMI(double weight, double height) {
        return weight / (height * height);
    }




};

//Separation of Interface and Implementation
class devinfo{
public:
	virtual void dev ()=0;//interface
	virtual void boss()=0;
};
class detail:public devinfo{
	public:
		void dev(){
			cout<<"<-----------developer---------->\n----- md sabbir hossen-----\n----cse dept----\n-----northern university bangladesh-----\n"<<endl;
		}
		void boss(){
			cout << "<-----------instructor--------->\n -----md mahadi hasan ------\n----cse dept---- \n -----northern university bangladesh-----" <<endl;
		}
};

//health talk
// Abstract class
class Talk {
public:
    // Pure virtual function
    virtual void dis() = 0;

    // Non-pure virtual function with implementation
    void printType() {
        cout << "<------- stay alert carefully ----->" <<endl;
    }
};

// Derived class
class Dengue : public Talk {
public:
    void dis(){
        cout << "Dengue fever also spelled dengue is a tropical disease caused by dengue virus, carried by the Aedes mosquito. Symptoms of dengue fever usually appear within three to fifteen days of transmission of the virus through the bite of an Aedes mosquito. Symptoms include fever, headache, vomiting, muscle and joint pain, and skin rash." <<endl;
    }
};

// Derived class
class AIDS : public Talk {
public:
    void dis(){
        cout << "Acquired immunodeficiency syndrome (AIDS) is a chronic, potentially life-threatening condition caused by the human immunodeficiency virus (HIV). By damaging your immune system, HIV interferes with your body's ability to fight infection and disease.\n< more info>" << endl;
    }
};



//multiple inheritance
class dhaka{
public:
     void doctorlistd(){

     cout<<"doctor name: sabbir ! phone :01xxxxxxxx ! address:dhaka ! \n ";
                        cout<<"doctor name: billal ! phone :01xxxxxxxx ! address: dhaka ! \n ";
                                    cout<<"doctor name: rahomat ! phone :01xxxxxxxx ! address: dhaka! \n ";
                                                cout<<"doctor name: kiyam ! phone :01xxxxxxxx ! address: dhaka! \n ";
                                                            cout<<"doctor name: mubin ! phone :01xxxxxxxx ! address:dhaka! \n ";
                                                                        cout<<"doctor name: sahib ! phone :01xxxxxxxx ! address:dhaka ! \n ";
                                                                                    cout<<"doctor name: kabir phone :01xxxxxxxx ! address:dhaka! \n ";


     }


};
class thakurgaon{
public:
    void doctorlisttha(){

     cout<<"doctor name: sabbir ! phone :01xxxxxxxx ! address:thakurgaon ! \n ";
                        cout<<"doctor name: billal ! phone :01xxxxxxxx ! address: thakurgaon ! \n ";
                                    cout<<"doctor name: rahomat ! phone :01xxxxxxxx ! address: thakurgaon! \n ";
                                                cout<<"doctor name: kiyam ! phone :01xxxxxxxx ! address: thakurgaon! \n ";
                                                            cout<<"doctor name: mubin ! phone :01xxxxxxxx ! address:thakurgaon! \n ";
                                                                        cout<<"doctor name: sahib ! phone :01xxxxxxxx ! address:thakurgaon ! \n ";
                                                                                    cout<<"doctor name: kabir phone :01xxxxxxxx ! address:thakurgaon! \n ";


     }



};
class doclist:public dhaka,public thakurgaon{//multiple inheritance 
public:
    void dc(){
    cout<<"<--------medicine doctor list------->"<<endl;
    }

};



int main(){
    cout<<"     <--------------Wellcome health management system(HMS)----------> "<<endl;

registar gregi;

donorregistration dnr;

donorrequest drequ(5);//parameter constructor
SimpleBMICalculator cal;

//devclass interface
devinfo *dev1 = new detail();

//health talk abstruct class
Dengue dengue;
AIDS aids;

//multiple inh
doclist doctor;


int a,b,c,d,e,f,g,h,bmi,bmo,nth2;
string hospitalname,gender;
string pb;
//bmi
double weight, height,BMI;
//user input
int number;
//loop iteration
int i=1;

while(i!=0){
//all
cout <<"\n-----------Read cerefuly-------------\n";
cout<<"\n\nentry our application press ->1  :"<<endl;
cout<<"\nshowing registration data press ->2 "<<endl;
cout<<"\nDonor registration press ->3 "<<endl;
cout<<"\nshow Donor registration data press ->4"<<endl;
cout<<"\nmake Donor request press ->5"<<endl;
cout<<"\nshow Donor request data press->6 "<<endl;
// find donor
cout<<"\nshow available blood donor press->7 "<<endl;
cout<<"\ncalculate your BMI  press ->8"<<endl;
cout<<"\nshow your BMI value press ->9"<<endl;
cout<<"\n HEALTH-TALK press ->10"<<endl;
cout<<"\n Doctor list press ->11"<<endl;
cout<<"\nDeveloper info press ->12";
// all end
cout<<"\nEnter your choice : ";
cin>>number ;

switch(number){
case 1:
	//abstraction 
gregi.inputdata();
    break;

        case 2:
  gregi.printregidata();
            break;

        case 3:
 dnr.inputdata();
            break;

        case 4:
dnr.printregidata();
            break;

        case 5:
 drequ.inputdatarequ();
     cout<<"Enter recipient problem :";
    cin>>pb;
    drequ.inputdata2(pb);
     cout<<"Enter recipient hospitalname :";
    cin>>hospitalname;
    cout<<"Enter recipient gender: ";
    cin>>gender;
     drequ.inputdatarequ(hospitalname,gender);
            break;

        case 6:
 drequ.printrequestdata();
            break;

        case 7:
drequ.finddonor1();
            break;

             case 8:
//bmi data input
          cout << "Welcome to BMI Calculator" << endl;

    cout << "Enter your weight (in kilograms): ";
    cin >> weight;
    cout << "Enter your height (in meters): ";
    cin >> height;
   cal.calculateBMI(weight,height);
            break;

    case 9:
        //INTERFACE
     BMI=cal.calculateBMI(weight,height);
cout<<"your BMI is :"<<BMI<<endl;
            break;

            case 10:
                 //abstruc class
    dengue.dis();
    dengue.printType();

    aids.dis();
    aids.printType();
     break;
      case 11:
          int call;
          //doctor list
          cout<<"Naw we have available doctor list at dhaka(press 1) and thakurgaon (press 2) :";
          cin>>call;
          if(call==1){
                doctor.dc();
            doctor.doctorlistd();
          }
          if(call==2){
              doctor.dc();
            doctor.doctorlisttha();
          }

            break;


             case 12:
                 //Separation of Interface and Implementation
  dev1->dev();
  dev1->boss();
            break;

        default:
            cout<< "Error! your is not correct";
            break;

}

cout<<"\n\nshow menu ( press ->1<-):";
cin>>i;

}

return 0;
}
