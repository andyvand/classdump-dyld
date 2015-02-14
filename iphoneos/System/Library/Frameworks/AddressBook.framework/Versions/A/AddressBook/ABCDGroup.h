/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCDRecord.h>
#import <AddressBook/ABGroupImplProtocol.h>
#import <AddressBook/ABSortableNamedRecord.h>

@class NSString;

@interface ABCDGroup : ABCDRecord <ABGroupImplProtocol, ABSortableNamedRecord> {

	id _readWriteSharingACL;
	id _readSharingACL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_table;
+(id)nts_DistributionIdentifierForProperty:(id)arg1 person:(id)arg2 inGroup:(id)arg3 ;
+(id)abEntityName;
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(id)nts_DistributionListConfigWithProperty:(id)arg1 person:(id)arg2 inGroup:(id)arg3 ;
+(id)metadataType;
+(id)keyPathsForValuesAffectingContentCellObject;
+(void)initialize;
-(char)nts_AddMember:(id)arg1 toGroup:(id)arg2 ;
-(char)nts_RemoveMember:(id)arg1 fromGroup:(id)arg2 ;
-(char)nts_SetMembers:(id)arg1 ofGroup:(id)arg2 ;
-(id)contactMembershipPredicate;
-(id)affectedStoresInMembershipPredicate;
-(id)nts_MembersOfGroup:(id)arg1 ;
-(id)nts_SubgroupsOfGroup:(id)arg1 ;
-(char)nts_AddSubgroup:(id)arg1 toGroup:(id)arg2 ;
-(char)nts_RemoveSubgroup:(id)arg1 fromGroup:(id)arg2 ;
-(char)nts_SetDistributionIdentifier:(id)arg1 forProperty:(id)arg2 person:(id)arg3 inGroup:(id)arg4 allowFetching:(char)arg5 ;
-(id)nts_DistributionIdentifierForProperty:(id)arg1 person:(id)arg2 inGroup:(id)arg3 ;
-(char)isGroup:(id)arg1 parentOfRecord:(id)arg2 ;
-(id)stringForIndexing;
-(id)sortingFirstName;
-(id)sortingLastName;
-(id)contactMembershipRecursivePredicate;
-(id)membersIncludingMembersOfSubgroups:(char)arg1 ;
-(id)contentCellObject;
-(id)cellObject;
-(id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(NSRange*)arg2 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)icon;
-(id)displayName;
-(id)children;
@end

