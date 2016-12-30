/*
 * main.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: tla001
 */
#include "SQLWork.h"

int main(){

	SQLWork *myWork=new SQLWork("tcp://127.0.0.1:3306", "root", "root");
	if(myWork->doConnect()){
		cout<<"connect error"<<endl;;
		exit(-1);
	}
	if(myWork->chooseDatabase("cpptest")){
		cout<<"choose error"<<endl;
		exit(-1);
	}
//	if(myWork->changeCharacter("gbk")){
//			cout<<"change error"<<endl;
//			exit(-1);
//		}
	if(myWork->doWork()){
		cout<<"do work error"<<endl;;
		exit(-1);
	}
	//cin.get();
	return 0;
}


//	sql::Driver *dirver;
//	sql::Connection *con;
//	sql::Statement *stmt;
//	sql::PreparedStatement *pstmt;
//	sql::ResultSet *res;
//	dirver = get_driver_instance();  //连接数据库
//	con = dirver->connect("tcp://127.0.0.1:3306", "root", "root");  //选择cpptest数据库
//	//con = dirver->connect("tcp://123.206.59.137:3306", "root", "root");  //选择cpptest数据库
//	con->setSchema("cpptest");
//	con->setClientOption("characterSetResults", "utf8");
//	stmt = con->createStatement();  //从student表中获取所有信息
//	res = stmt->executeQuery("SELECT * from student");  //循环遍历
//	while (res->next())  {   //输出，id，name，age字段的信息
//		cout << res->getInt("id")
//			<< " | " << res->getString(2)
//			<< " | " << res->getInt("tage")
//			<< " | " << res->getString("thome")
//			<< endl;
//	}  //清理
//	delete res;
//	delete stmt;
//	delete con;
