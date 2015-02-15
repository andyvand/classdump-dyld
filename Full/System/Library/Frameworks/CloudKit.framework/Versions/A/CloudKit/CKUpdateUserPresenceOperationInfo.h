/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class CKShareID, NSString;

@interface CKUpdateUserPresenceOperationInfo : CKOperationInfo {

	char _isLurk;
	long long _status;
	unsigned long long _customStatusFlags;
	double _ttl;
	CKShareID* _shareID;
	NSString* _lastETag;

}

@property (assign,nonatomic) long long status;                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long customStatusFlags;              //@synthesize customStatusFlags=_customStatusFlags - In the implementation block
@property (assign,nonatomic) double ttl;                                        //@synthesize ttl=_ttl - In the implementation block
@property (assign,nonatomic) char isLurk;                                       //@synthesize isLurk=_isLurk - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                               //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSString * lastETag;                               //@synthesize lastETag=_lastETag - In the implementation block
+(char)supportsSecureCoding;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(void)setIsLurk:(char)arg1 ;
-(unsigned long long)customStatusFlags;
-(void)setCustomStatusFlags:(unsigned long long)arg1 ;
-(NSString *)lastETag;
-(void)setLastETag:(NSString *)arg1 ;
-(char)isLurk;
-(double)ttl;
-(void)setTtl:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
@end
