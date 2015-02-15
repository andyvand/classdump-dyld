/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCMonitoredOperation.h>

@class NSString, NSArray, NSDictionary, MFEWSStore;

@interface MFEWSLibraryUpdateOperation : MCMonitoredOperation {

	NSString* _syncState;
	NSArray* _deletedItemIdStrings;
	NSDictionary* _readFlagChanges;
	NSArray* _getItemsOperations;
	MFEWSStore* _store;

}

@property (nonatomic,copy,readonly) NSString * syncState;                        //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedItemIdStrings;              //@synthesize deletedItemIdStrings=_deletedItemIdStrings - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readFlagChanges;              //@synthesize readFlagChanges=_readFlagChanges - In the implementation block
@property (nonatomic,copy,readonly) NSArray * getItemsOperations;                //@synthesize getItemsOperations=_getItemsOperations - In the implementation block
@property (nonatomic,readonly) MFEWSStore * store;                               //@synthesize store=_store - In the implementation block
-(MFEWSStore *)store;
-(void)executeOperation;
-(id)initWithSyncState:(id)arg1 changes:(id)arg2 gateway:(id)arg3 store:(id)arg4 ;
-(id)_queueGetItemOperationForItemIds:(id)arg1 itemClass:(Class)arg2 onGateway:(id)arg3 ;
-(NSDictionary *)readFlagChanges;
-(NSArray *)getItemsOperations;
-(char)_headersNeedUpdateForLibraryMessage:(id)arg1 withEWSItemType:(id)arg2 ;
-(NSArray *)deletedItemIdStrings;
-(id)_propertiesForItemClass:(Class)arg1 ;
-(id)init;
-(NSString *)syncState;
@end

