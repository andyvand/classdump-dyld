/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class CKRecordID, NSString;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	char _isCurrentUser;
	CKRecordID* _userRecordID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _participantID;
	long long _acceptanceStatus;
	long long _itemPermission;
	long long _listPermission;
	long long _originalAcceptanceStatus;
	long long _originalItemPermission;
	long long _originalListPermission;

}

@property (nonatomic,copy) CKRecordID * userRecordID;                         //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * participantID;                          //@synthesize participantID=_participantID - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                              //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) long long acceptanceStatus;                      //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (assign,nonatomic) long long itemPermission;                        //@synthesize itemPermission=_itemPermission - In the implementation block
@property (assign,nonatomic) long long listPermission;                        //@synthesize listPermission=_listPermission - In the implementation block
@property (assign,nonatomic) long long originalAcceptanceStatus;              //@synthesize originalAcceptanceStatus=_originalAcceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalItemPermission;                //@synthesize originalItemPermission=_originalItemPermission - In the implementation block
@property (assign,nonatomic) long long originalListPermission;                //@synthesize originalListPermission=_originalListPermission - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(char)isEquivalentToParticipant:(id)arg1 ;
-(CKRecordID *)userRecordID;
-(void)setItemPermission:(long long)arg1 ;
-(long long)itemPermission;
-(void)setListPermission:(long long)arg1 ;
-(long long)listPermission;
-(long long)acceptanceStatus;
-(id)_initWithUserRecordID:(id)arg1 participantID:(id)arg2 emailAddress:(id)arg3 acceptanceStatus:(long long)arg4 itemPermission:(long long)arg5 listPermission:(long long)arg6 ;
-(void)setOriginalAcceptanceStatus:(long long)arg1 ;
-(void)setOriginalItemPermission:(long long)arg1 ;
-(void)setOriginalListPermission:(long long)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(long long)originalAcceptanceStatus;
-(long long)originalItemPermission;
-(long long)originalListPermission;
-(void)setIsCurrentUser:(char)arg1 ;
-(id)init;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)firstName;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
-(char)isCurrentUser;
@end

