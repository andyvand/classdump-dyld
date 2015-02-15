/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/Exchange.sourcebundle/Contents/MacOS/Exchange
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Exchange/ABExchangeOperation.h>

@class NSDictionary;

@interface ABExchangeSendLocalContactChangesOperation : ABExchangeOperation {

	NSDictionary* mContactChanges;

}

@property (retain) NSDictionary * contactChanges; 
-(id)ewsItemChangesForUpdates:(id)arg1 ;
-(id)sendQueuedLocalChanges;
-(id)sendDeletes:(id)arg1 userInfo:(id)arg2 ;
-(id)sendCreates:(id)arg1 userInfo:(id)arg2 ;
-(id)sendUpdates:(id)arg1 userInfo:(id)arg2 ;
-(id)valueFromUpdate:(id)arg1 ;
-(void)setContactChanges:(NSDictionary *)arg1 ;
-(id)sendMoves:(id)arg1 ;
-(id)sendUpdates:(id)arg1 ;
-(void)moveItemsWithUniqueIds:(id)arg1 ;
-(void)doMain;
-(id)ewsItemChangeDescriptionForProperty:(id)arg1 value:(id)arg2 label:(id)arg3 usedLabels:(id)arg4 entityName:(id)arg5 propertyPath:(id)arg6 ;
-(id)ewsItemChangeDescriptionsForEntityName:(id)arg1 property:(id)arg2 value:(id)arg3 label:(id)arg4 usedLabels:(id)arg5 ;
-(id)updateOperationsByAddressBookId:(id)arg1 ;
-(id)ewsItemChangeDescriptionsForUpdates:(id)arg1 person:(id)arg2 ;
-(id)sendDeletes:(id)arg1 performDeletesLocally:(char)arg2 ;
-(id)operationsSortedByKeyPath:(id)arg1 fromArray:(id)arg2 notFoundKey:(id)arg3 ;
-(id)sendOperations:(id)arg1 bySelector:(SEL)arg2 userInfo:(id)arg3 ;
-(id)sendCreates:(id)arg1 inFolderWithItemId:(id)arg2 people:(id)arg3 ;
-(void)mergePerson:(id)arg1 intoExchangeContact:(id)arg2 ;
-(char)updateEWSContact:(id)arg1 property:(id)arg2 value:(id)arg3 label:(id)arg4 usedLabels:(id)arg5 entityName:(id)arg6 propertyPath:(id)arg7 isDelete:(char*)arg8 ;
-(id)ewsItemChangeDescriptionsForUpdate:(id)arg1 person:(id)arg2 ;
-(id)sendMove:(id)arg1 ;
-(id)sendDeletes:(id)arg1 ;
-(id)sendCreates:(id)arg1 ;
-(char)sendSetCustomPropertyString:(id)arg1 name:(id)arg2 contactMapping:(id)arg3 ;
-(NSDictionary *)contactChanges;
-(id)addressBookIdForOperation:(id)arg1 ;
-(id)initWithSource:(id)arg1 contactChanges:(id)arg2 maxSequenceNumber:(id)arg3 ;
-(void)dealloc;
-(id)name;
@end

