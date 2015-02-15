/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABGroup, NSMutableArray, ABAddressBook;

@interface ABRemoveMembersCommandBuilder : NSObject {

	ABGroup* _group;
	NSMutableArray* _memberIdentifiers;
	ABAddressBook* _addressBook;

}

@property (readonly) unsigned long long countOfRemovedMembers; 
-(void)removeMember:(id)arg1 ;
-(id)initWithGroup:(id)arg1 addressBook:(id)arg2 ;
-(id)build;
-(unsigned long long)countOfRemovedMembers;
-(void)dealloc;
@end

