/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:55:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Apply SQL.action/Contents/MacOS/Apply SQL
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSTask, NSPipe;

@interface ASASQLiteSession : NSObject {

	NSString* _databasePath;
	NSArray* _sqliteArguments;
	NSTask* _sqliteTask;
	NSPipe* _sqliteInputPipe;
	NSPipe* _sqliteOutputPipe;
	NSPipe* _sqliteErrorPipe;

}
-(id)executeSQLStatements:(id)arg1 outputFormat:(int)arg2 error:(id*)arg3 ;
-(id)initWithDatabasePath:(id)arg1 ;
-(void)dealloc;
@end

