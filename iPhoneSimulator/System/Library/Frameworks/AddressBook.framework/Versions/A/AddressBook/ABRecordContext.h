/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABRecordContext.h>

@protocol ABRecordContext <NSObject>
@required
-(char)removeRecords:(id)arg1 error:(id*)arg2;
-(id)lazyGroupForGroup:(id)arg1;
-(id)lazyGroupsForGroups:(id)arg1;
-(id)addPerson;
-(id)addPersonWithUniqueId:(id)arg1;
-(id)addPersonWithDictionaryRepresentation:(id)arg1;
-(id)addGroup;
-(id)addGroupWithUniqueId:(id)arg1;
-(char)recordExistsForUniqueId:(id)arg1;
-(char)save;
-(id)recordForUniqueId:(id)arg1;
-(id)recordsForUniqueIDs:(id)arg1;

@end


@class ABAccount, ABAddressBook, NSString;

@interface ABRecordContext : NSObject <ABRecordContext> {

	ABAccount* _account;
	ABAddressBook* _addressBook;

}

@property (retain,readonly) ABAccount * account;                      //@synthesize account=_account - In the implementation block
@property (retain,readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordContextWithAddresBook:(id)arg1 account:(id)arg2 ;
+(id)recordContextWithAddresBook:(id)arg1 ;
-(ABAddressBook *)addressBook;
-(char)removeRecord:(id)arg1 error:(id*)arg2 ;
-(char)removeRecords:(id)arg1 error:(id*)arg2 ;
-(id)initWithAddressBook:(id)arg1 account:(id)arg2 ;
-(id)personForUniqueId:(id)arg1 ;
-(id)groupForUniqueId:(id)arg1 ;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 ;
-(id)addRecordWithClass:(Class)arg1 uniqueId:(id)arg2 ;
-(id)lazyGroupsForGroupUids:(id)arg1 ;
-(id)lazyGroupForGroup:(id)arg1 ;
-(id)lazyGroupsForGroups:(id)arg1 ;
-(id)lazyGroupForGroupUniqueId:(id)arg1 ;
-(id)addPerson;
-(id)addPersonWithUniqueId:(id)arg1 ;
-(id)addPersonWithDictionaryRepresentation:(id)arg1 ;
-(id)addGroup;
-(id)addGroupWithUniqueId:(id)arg1 ;
-(char)recordExistsForUniqueId:(id)arg1 ;
-(id)allMembersOfGroupOrPeople:(id)arg1 ;
-(id)groups;
-(void)dealloc;
-(NSString *)description;
-(ABAccount *)account;
-(char)save;
-(id)recordForUniqueId:(id)arg1 ;
-(id)recordsForUniqueIDs:(id)arg1 ;
-(id)people;
@end

