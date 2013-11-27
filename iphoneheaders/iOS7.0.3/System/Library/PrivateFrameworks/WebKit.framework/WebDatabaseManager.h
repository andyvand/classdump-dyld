/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface WebDatabaseManager : NSObject
+(void)removeEmptyDatabaseFiles;
+(void)scheduleEmptyDatabaseRemoval;
+(void)startBackgroundTask;
+(void)endBackgroundTask;
+(void)willBeginFirstTransaction;
+(void)didFinishLastTransaction;
+(id)sharedWebDatabaseManager;
-(id)init;
-(id)origins;
-(id)databasesWithOrigin:(id)arg1 ;
-(void)deleteAllDatabases;
-(BOOL)deleteOrigin:(id)arg1 ;
-(BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2 ;
@end
