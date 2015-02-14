/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalPersistenceMonitor.h>

@class NSOperationQueue;

@interface CalTruthFileStore : CalPersistenceMonitor {

	NSOperationQueue* _queue;

}
+(void)initialize;
+(id)defaultMonitor;
+(void)_disableForUnitTesting;
+(void)_enableForUnitTesting;
-(void)applicationWillTerminate:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)waitUntilAllOperationsAreFinished;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(char)isInterestedInContext:(id)arg1 ;
-(void)writeFilesForObjects:(id)arg1 ;
-(void)removeFilesForObjects:(id)arg1 ;
@end

