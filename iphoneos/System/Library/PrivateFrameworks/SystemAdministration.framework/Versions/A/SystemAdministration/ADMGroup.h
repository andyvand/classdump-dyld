/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SystemAdministration/SystemAdministration-Structs.h>
#import <SystemAdministration/ADMDSRecord.h>

@class NSNumber, NSMutableArray, NSString;

@interface ADMGroup : ADMDSRecord {

	NSNumber* mGUIDNumber;
	NSMutableArray* mUsers;
	NSMutableArray* mUserGUIDs;
	NSMutableArray* mNestedGUIDs;
	char mGUIDChecked;
	char mHasGUID;
	NSString* mUUIDString;
	NSString* mRealNameString;

}
+(id)findGroupByID:(long long)arg1 ;
+(id)adminGroup;
+(id)findGroupByName:(id)arg1 ;
+(id)createGroupWithName:(id)arg1 realName:(id)arg2 gid:(long long)arg3 inNode:(id)arg4 ;
+(id)findGroupByName:(id)arg1 node:(id)arg2 ;
+(long long)nextFreeGroupIDInRange:(NSRange)arg1 ;
+(id)allLocalGroups;
+(id)createGroupWithName:(id)arg1 gid:(long long)arg2 inNode:(id)arg3 ;
+(id)findGroupByGUID:(CFUUIDRef)arg1 ;
+(long long)nextFreeGroupID;
+(id)wcCreateGroupWithName:(id)arg1 realName:(id)arg2 ;
-(long long)gid;
-(id)initWithRecordName:(const char*)arg1 type:(const char*)arg2 node:(id)arg3 ;
-(void)_postDistributedNotification:(id)arg1 ;
-(id)generatedUID;
-(char)hasMember:(id)arg1 ;
-(id)arrayOfMemberNames;
-(char)deleteGroup;
-(long long)setRecordNameTo:(id)arg1 ;
-(char)setGeneratedUID:(id)arg1 ;
-(id)_initWithInfo:(id)arg1 node:(id)arg2 ;
-(char)hasMemberUUID:(id)arg1 ;
-(char)addMemberUUID:(id)arg1 name:(id)arg2 ;
-(char)removeMemberUUID:(id)arg1 name:(id)arg2 ;
-(id)arrayOfMemberGUIDs;
-(char)hasNestedGroup:(id)arg1 ;
-(id)arrayOfNestedGUIDs;
-(char)setgid:(long long)arg1 ;
-(id)realName;
-(char)setRealName:(id)arg1 ;
-(char)addNestedGroup:(id)arg1 ;
-(char)removeNestedGroup:(id)arg1 ;
-(char)wcRemoveMember:(id)arg1 ;
-(char)wcSetGroupName:(id)arg1 ;
-(char)wcAddNestedGroupWithName:(id)arg1 ;
-(char)wcAddNestedGroup:(id)arg1 ;
-(char)wcRemoveNestedGroupWithName:(id)arg1 ;
-(char)wcAddAccountWithName:(id)arg1 ;
-(char)wcRemoveAccountWithName:(id)arg1 ;
-(char)wcRemoveGroupMemberWithUUID:(id)arg1 ;
-(char)addMember:(id)arg1 ;
-(char)removeMember:(id)arg1 ;
-(void)dealloc;
-(void)refresh;
@end

