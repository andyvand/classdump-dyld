/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class CKRecordID, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _userRecordID;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) CKRecordID * userRecordID;              //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)initWithUserRecordID:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(CKRecordID *)userRecordID;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)firstName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
@end

