/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalAbstractCDChangeTracker.h>

@class NSString, NSArray;

@interface CalFileCDChangeTracker : CalAbstractCDChangeTracker {

	NSString* basePath;
	NSArray* fileNamesBeingProcessed;

}
-(id)init;
-(void)dealloc;
-(void)insureDirectoryAtPath:(id)arg1 ;
-(void)setBasePath:(id)arg1 ;
-(id)getFileNames;
-(void)mergeChangesFrom:(id)arg1 to:(id)arg2 ;
-(id)tempFile;
-(void)deleteFiles:(id)arg1 ;
-(id)dictionaryFromFile:(id)arg1 ;
-(char)getAllChanges;
-(void)storeChanges:(id)arg1 ;
-(void)clearAllStoredChanges;
-(void)clearProcessedChanges;
@end
