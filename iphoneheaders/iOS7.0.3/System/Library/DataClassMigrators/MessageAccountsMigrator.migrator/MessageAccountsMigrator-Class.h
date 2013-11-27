/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:39:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MessageAccountsMigrator.migrator/MessageAccountsMigrator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore;

@interface MessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;

}
-(BOOL)_saveAccounts:(id)arg1 ;
-(BOOL)_removeAccounts:(id)arg1 ;
-(BOOL)removeSMTPAccountsThatShouldBeDynamic;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
@end
