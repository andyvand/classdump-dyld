/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABRecord.h>

@class NSString;

@interface ABGroupContents : ABRecord {

	NSString* _groupUID;
	NSString* _memberUID;

}
+(id)builtInProperties;
+(long long)nts_FindMemberUID:(id)arg1 inArray:(id)arg2 ;
-(id)nts_MemberUID;
-(id)nts_InitWithGroupUID:(id)arg1 memberUID:(id)arg2 addressBook:(id)arg3 ;
-(void)nts_InsertInArray:(id)arg1 ;
-(id)nts_GroupUID;
-(id)nts_DistributionIdentifierForProperty:(id)arg1 ;
-(char)nts_SetDistributionIdentifier:(id)arg1 forProperty:(id)arg2 allowFetching:(char)arg3 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end

