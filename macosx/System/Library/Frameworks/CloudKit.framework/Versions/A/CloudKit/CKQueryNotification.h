/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <CloudKit/NSSecureCoding.h>

@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {

	char _isPublicDatabase;
	long long _queryNotificationReason;
	NSDictionary* _recordFields;
	CKRecordID* _recordID;

}

@property (assign,nonatomic) long long queryNotificationReason;              //@synthesize queryNotificationReason=_queryNotificationReason - In the implementation block
@property (nonatomic,copy) NSDictionary * recordFields;                      //@synthesize recordFields=_recordFields - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) char isPublicDatabase;                          //@synthesize isPublicDatabase=_isPublicDatabase - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setQueryNotificationReason:(long long)arg1 ;
-(void)setRecordFields:(NSDictionary *)arg1 ;
-(void)setIsPublicDatabase:(char)arg1 ;
-(long long)queryNotificationReason;
-(NSDictionary *)recordFields;
-(char)isPublicDatabase;
-(CKRecordID *)recordID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

