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
//	dirver = get_driver_instance();  //�������ݿ�
//	con = dirver->connect("tcp://127.0.0.1:3306", "root", "root");  //ѡ��cpptest���ݿ�
//	//con = dirver->connect("tcp://123.206.59.137:3306", "root", "root");  //ѡ��cpptest���ݿ�
//	con->setSchema("cpptest");
//	con->setClientOption("characterSetResults", "utf8");
//	stmt = con->createStatement();  //��student���л�ȡ������Ϣ
//	res = stmt->executeQuery("SELECT * from student");  //ѭ������
//	while (res->next())  {   //�����id��name��age�ֶε���Ϣ
//		cout << res->getInt("id")
//			<< " | " << res->getString(2)
//			<< " | " << res->getInt("tage")
//			<< " | " << res->getString("thome")
//			<< endl;
//	}  //����
//	delete res;
//	delete stmt;
//	delete con;
