/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, CNContactIdentifier, NSArray;

@interface CNSaveRequest : NSObject {

	NSMutableDictionary* _addedContactsByIdentifier;
	NSMutableDictionary* _updatedContactsByIdentifier;
	NSMutableDictionary* _deletedContactsByIdentifier;
	CNContactIdentifier* _meCardIdentifier;
	NSMutableDictionary* _addedGroupsByIdentifier;
	NSMutableDictionary* _updatedGroupsByIdentifier;
	NSMutableDictionary* _deletedGroupsByIdentifier;
	char _unsafeApplyChangesOnly;

}

@property (nonatomic,copy,readonly) NSArray * addedContactsWithAccount; 
@property (nonatomic,copy,readonly) NSArray * updatedContacts; 
@property (nonatomic,copy,readonly) NSArray * deletedContacts; 
@property (nonatomic,copy,readonly) CNContactIdentifier * meCardIdentifier; 
@property (nonatomic,copy,readonly) NSArray * addedGroupsWithAccount; 
@property (nonatomic,copy,readonly) NSArray * updatedGroups; 
@property (nonatomic,copy,readonly) NSArray * deletedGroups; 
@property (assign,nonatomic) char unsafeApplyChangesOnly;                                //@synthesize unsafeApplyChangesOnly=_unsafeApplyChangesOnly - In the implementation block
+(id)saveRequest;
-(void)addMember:(id)arg1 toGroup:(id)arg2 ;
-(void)deleteContact:(id)arg1 ;
-(void)addContact:(id)arg1 toAccountWithIdentifier:(id)arg2 ;
-(void)updateContact:(id)arg1 ;
-(void)setMeCardIdentifier:(CNContactIdentifier *)arg1 ;
-(void)addGroup:(id)arg1 toAccountWithIdentifier:(id)arg2 ;
-(void)updateGroup:(id)arg1 ;
-(void)deleteGroup:(id)arg1 ;
-(void)removeMember:(id)arg1 fromGroup:(id)arg2 ;
-(void)addSubgroup:(id)arg1 toGroup:(id)arg2 ;
-(void)removeSubgroup:(id)arg1 fromGroup:(id)arg2 ;
-(NSArray *)addedContactsWithAccount;
-(NSArray *)updatedContacts;
-(NSArray *)deletedContacts;
-(CNContactIdentifier *)meCardIdentifier;
-(NSArray *)addedGroupsWithAccount;
-(NSArray *)updatedGroups;
-(NSArray *)deletedGroups;
-(char)unsafeApplyChangesOnly;
-(void)setUnsafeApplyChangesOnly:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end

