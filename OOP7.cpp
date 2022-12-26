 #include<iostream>
 #include<map>
 #include<string>
 using namespace std;
 int main()
 {
 typedef map<string,int> mapType;
 mapType populationMap;
 populationMap.insert(pair<string, int>("Andhra Pradesh", 49577103));
 populationMap.insert(pair<string, int>("Arunachal Pradesh", 1383727));
 populationMap.insert(pair<string, int>("Assam", 31205576));
 populationMap.insert(pair<string, int>("Bihar", 104099452));
 populationMap.insert(pair<string, int>("Chhattisgarh", 25545198));
 populationMap.insert(pair<string, int>("Goa", 1458545));
 populationMap.insert(pair<string, int>("Gujarat", 60439692));
 populationMap.insert(pair<string, int>("Haryana", 25351462));
 populationMap.insert(pair<string, int>("Himachal Pradesh", 6864602));
 populationMap.insert(pair<string, int>("Jammu and Kashmir", 12267032));
 populationMap.insert(pair<string, int>("Jharkhand", 32988134));
 populationMap.insert(pair<string, int>("Karnataka", 61095297));
 populationMap.insert(pair<string, int>("Kerala", 33406061));
 populationMap.insert(pair<string, int>("Madhya Pradesh", 72626809));
 populationMap.insert(pair<string, int>("Maharashtra", 112374333));
 populationMap.insert(pair<string, int>("Manipur", 2570390));
 populationMap.insert(pair<string, int>("Meghalaya", 2966889));
 populationMap.insert(pair<string, int>("Mizoram", 1097206));
 populationMap.insert(pair<string, int>("Nagaland", 1978502));
 populationMap.insert(pair<string, int>("Odisha", 41974219));
 populationMap.insert(pair<string, int>("Punjab", 27743338));
 populationMap.insert(pair<string, int>("Rajasthan", 68548437));
 populationMap.insert(pair<string, int>("Sikkim", 610577));
 populationMap.insert(pair<string, int>("Tamil Nadu", 72147030));
 populationMap.insert(pair<string, int>("Telangana", 35003674));
 populationMap.insert(pair<string, int>("Tripura", 3673917));
 populationMap.insert(pair<string, int>("Uttar Pradesh", 199812341));
 populationMap.insert(pair<string, int>("Uttarakhand", 10086292));
 populationMap.insert(pair<string, int>("West Bengal", 91276115));

 
 mapType::iterator iter;
 cout<<"<-------------POPULATION OF STATES IN INDIA------------->\n";
 cout<<"\n Size of populationMap"<<populationMap.size()<<"\n";
 string state_name;
 cout<<"\n ENTER THE NAME OF STATE : ";
 cin>>state_name;
 iter = populationMap.find(state_name);
 if( iter!= populationMap.end() )
 cout<<" "<<state_name<<" 's POPULATION IS : "
 <<iter->second ;
 else
 cout<<"Key is not populationMap"<<"\n";
 populationMap.clear();
}
