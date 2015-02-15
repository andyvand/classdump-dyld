/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <CloudKit/NSSecureCoding.h>

@class CKShareID, CKDiscoveredUserInfo;

@interface CKShareNotification : CKNotification <NSSecureCoding> {

	long long _shareNotificationReason;
	CKShareID* _shareID;
	CKDiscoveredUserInfo* _participantInfo;

}

@property (assign,nonatomic) long long shareNotificationReason;                 //@synthesize shareNotificationReason=_shareNotificationReason - In the implementation block
@property (nonatomic,copy) CKShareID * shareID;                                 //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy) CKDiscoveredUserInfo * participantInfo;              //@synthesize participantInfo=_participantInfo - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setShareNotificationReason:(long long)arg1 ;
-(void)setParticipantInfo:(CKDiscoveredUserInfo *)arg1 ;
-(long long)shareNotificationReason;
-(CKDiscoveredUserInfo *)participantInfo;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

