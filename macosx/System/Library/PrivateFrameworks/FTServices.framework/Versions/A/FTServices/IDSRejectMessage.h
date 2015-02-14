/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <FTServices/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _peerPushToken;
	NSString* _peerID;
	NSNumber* _reason;

}

@property (copy) NSData * peerPushToken;              //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSString * peerID;                   //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)requiredKeys;
-(void)setReason:(NSNumber *)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)dealloc;
-(NSNumber *)reason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(id)bagKey;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
@end

