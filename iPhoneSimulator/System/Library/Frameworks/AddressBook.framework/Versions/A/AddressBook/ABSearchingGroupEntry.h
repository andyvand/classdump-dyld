/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABGroupEntry.h>
#import <AddressBook/ABContactSearching.h>

@protocol ABSearchOperationsFactory;
@class NSString, ABAccount, ABAddressBook;

@interface ABSearchingGroupEntry : ABGroupEntry <ABContactSearching> {

	ABAccount* _account;
	id<ABSearchOperationsFactory> _operationsFactory;
	ABAddressBook* _addressBookForCreatingGroups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * displayName; 
-(char)canCreateGroup;
-(id)createHelperWithFactory:(id)arg1 ;
-(char)canSelect;
-(id)selectHelperWithFactory:(id)arg1 ;
-(char)isAvailableInTimeMachine;
-(id)iconWithStyleProvider:(id)arg1 ;
-(id)searchOperationsForString:(id)arg1 delegate:(id)arg2 ;
-(id)actionScope;
-(id)initWithName:(id)arg1 identifier:(id)arg2 operationsFactory:(id)arg3 addressBookForCreatingGroups:(id)arg4 ;
-(id)addressBookForCreatingGroups;
-(void)dealloc;
-(NSString *)description;
-(NSString *)displayName;
@end

