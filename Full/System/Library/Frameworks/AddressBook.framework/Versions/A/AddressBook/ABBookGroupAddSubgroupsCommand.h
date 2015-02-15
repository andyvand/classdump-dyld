/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class ABRecordContext, ABLazyGroup, NSSet;

@interface ABBookGroupAddSubgroupsCommand : ABBookUndoableCommand {

	ABRecordContext* _recordContext;
	ABLazyGroup* _lazyGroup;
	NSSet* _newSubgroupUids;

}

@property (copy,readonly) NSSet * newSubgroupUids; 
-(void)execute;
-(void)executeUndo;
-(id)actionName;
-(id)initWithAddressBook:(id)arg1 group:(id)arg2 newSubgroupUids:(id)arg3 ;
-(NSSet *)newSubgroupUids;
-(id)initWithRecordContext:(id)arg1 group:(id)arg2 newSubgroupUids:(id)arg3 ;
-(void)addSubgroupsToGroup:(id)arg1 ;
-(id)newSubgroups;
-(void)removeSubgroupsFromGroup:(id)arg1 ;
-(void)dealloc;
@end

