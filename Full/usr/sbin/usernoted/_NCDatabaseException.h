/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/usernoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <usernoted/usernoted-Structs.h>
#import <CoreFoundation/NSException.h>

@class NSString;

@interface _NCDatabaseException : NSException {

	NSString* _method;
	long long _line;
	long long _dbError;
	NSString* _dbErrorStr;

}

@property (readonly) NSString * method;                  //@synthesize method=_method - In the implementation block
@property (readonly) long long line;                     //@synthesize line=_line - In the implementation block
@property (readonly) long long dbError;                  //@synthesize dbError=_dbError - In the implementation block
@property (readonly) NSString * dbErrorStr;              //@synthesize dbErrorStr=_dbErrorStr - In the implementation block
-(id)initExceptionInMethod:(const char*)arg1 lineNumber:(long long)arg2 database:(sqlite3Ref)arg3 ret:(int)arg4 ;
-(NSString *)dbErrorStr;
-(long long)dbError;
-(NSString *)method;
-(long long)line;
-(id)description;
@end
