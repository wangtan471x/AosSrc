// sqliteTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "../SQLite3/sqlite3.h"
int testdb(void);
int testdb2(void);
int testdb3(void);


//callback�ص����� _callback_exec�ı�д������notusedΪsqlite3_exec�еĵ��ĸ��������ڶ���������������Ŀ�����������������֣����ĸ�Ϊ��ѯ�õ���ֵ
static int _callback_exec(void * notused,int argc, char ** argv, char ** aszColName)
{
	int i;
	for ( i=0; i<argc; i++ )
	{
		printf( "%s = %s/n", aszColName[i], argv[i] == 0 ? "NUL" : argv[i] );
	}
	return 0;
}


int _tmain(int argc, _TCHAR* argv[])
{
	//�ļ�ģʽ
	testdb();
	testdb2();
	testdb3();
	return 0;
}


#include <cstdio>
#include <cstdlib>

int testdb(void)
{
	sqlite3 *db=NULL;
	char *zErrMsg = 0;
	int rc;
	//��ָ�������ݿ��ļ�,��������ڽ�����һ��ͬ�������ݿ��ļ�
	rc = sqlite3_open("test1.db", &db);
	if(rc)
	{
		fprintf(stderr, "Can��t open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return (1);
	}
	else
		printf("You have opened a sqlite3 database named test1.db successfully!\n");

	//����һ����,����ñ���ڣ��򲻴�������������ʾ��Ϣ���洢��zErrMsg ��
	char *sql = " CREATE TABLE test(ID INTEGER PRIMARY KEY,AGE INTEGER,LEVEL INTEGER,NAME VARCHAR(12),SALARY REAL);" ;
	sqlite3_exec( db , sql , 0 , 0 , &zErrMsg );

	//��������
	sql = "INSERT INTO test VALUES(NULL , 1 , 1 , '201205151206', 117.9 );" ;
	sqlite3_exec( db , sql , 0 , 0 , &zErrMsg );
	int nrow = 0, ncolumn = 0; //��ѯ�����������������
	char **azResult; //��ά�����Ž��

	//��ѯ����
	sql = "SELECT * FROM test ";
	sqlite3_get_table( db , sql , &azResult , &nrow , &ncolumn , &zErrMsg );
	int i = 0 ;
	printf( "row:%d column=%d \n" , nrow , ncolumn );
	printf( "\nThe result of querying is : \n" );
	for( i=0 ; i<( nrow + 1 ) * ncolumn ; i++ )
	{
		printf( "azResult[%d] = %s\n", i , azResult[i] );
	}

	//ɾ������
	sql = "DELETE FROM test WHERE AGE = 1 ;" ;
	sqlite3_exec( db , sql , 0 , 0 , &zErrMsg );

	//�ͷŵ�azResult ���ڴ�ռ�
	sqlite3_free_table( azResult );
	sqlite3_close(db); //�ر����ݿ�

	//int c=getchar();

	return 0;
}

int testdb2(void)
{
	const char * sSQL = "select * from t1;";
	char * pErrMsg = 0;
	int ret = 0;
	sqlite3 * db = 0;
	ret = sqlite3_open("./test2.db", &db);
	if ( ret != SQLITE_OK )
	{
		fprintf(stderr, "Could not open database: %s", sqlite3_errmsg(db));
		exit(1);
	}

	printf("Successfully connected to database/n");
	sqlite3_exec( db, sSQL, _callback_exec, 0, &pErrMsg );

	if ( ret != SQLITE_OK )
	{
		fprintf(stderr, "SQL error: %s/n", pErrMsg);
		sqlite3_free(pErrMsg);
	}

	sqlite3_close(db);
	db = 0;

	return 0;
}

int testdb3(void)
{
	const char * sSQL = "select * from t1;";
	char * pErrMsg = 0;
	int ret = 0;
	sqlite3 * db = 0;
	ret = sqlite3_open(":memory:", &db);
	if ( ret != SQLITE_OK )
	{
		fprintf(stderr, "Could not open database: %s", sqlite3_errmsg(db));
		exit(1);
	}

	printf("Successfully connected to database/n");
	char *zErrMsg = 0;
	char *sql = " CREATE TABLE test(ID INTEGER PRIMARY KEY,AGE INTEGER,LEVEL INTEGER,NAME VARCHAR(12),SALARY REAL);" ;
	sqlite3_exec( db , sql , 0 , 0 , &zErrMsg );

	//��������
	sql = "INSERT INTO test VALUES(NULL , 1 , 1 , '201205151206', 20.9 );" ;
	sqlite3_exec( db , sql , 0 , 0 , &zErrMsg );
	int nrow = 0, ncolumn = 0; //��ѯ�����������������
	char **azResult; //��ά�����Ž��

	//��ѯ����
	sql = "SELECT * FROM test ";
	sqlite3_get_table( db , sql , &azResult , &nrow , &ncolumn , &zErrMsg );
	int i = 0 ;
	printf( "row:%d column=%d \n" , nrow , ncolumn );
	printf( "\nThe result of querying is : \n" );

	for( i=0 ; i<( nrow + 1 ) * ncolumn ; i++ )
	{
		printf( "azResult[%d] = %s\n", i , azResult[i] );
	}

	//�ͷŵ�azResult ���ڴ�ռ�
	sqlite3_free_table( azResult );
	sqlite3_close(db); //�ر����ݿ�

	return 0;
}


