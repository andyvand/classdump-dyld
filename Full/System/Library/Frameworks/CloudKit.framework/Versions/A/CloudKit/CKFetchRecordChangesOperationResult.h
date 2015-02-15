/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationResult.h>
#import <CloudKit/NSSecureCoding.h>

@class CKServerChangeToken, NSData, NSNumber;

@interface CKFetchRecordChangesOperationResult : CKOperationResult <NSSecureCoding> {

	CKServerChangeToken* _serverChangeToken;
	NSData* _clientChangeTokenData;
	NSNumber* _status;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                       //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) NSNumber * status;                                    //@synthesize status=_status - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(NSData *)clientChangeTokenData;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
@end

