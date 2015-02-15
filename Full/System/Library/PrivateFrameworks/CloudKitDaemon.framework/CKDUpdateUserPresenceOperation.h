/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareID, NSString;

@interface CKDUpdateUserPresenceOperation : CKDOperation {

	char _isLurk;
	/*^block*/id _updateCompletionBlock;
	CKShareID* _shareID;
	long long _status;
	long long _customStatusFlags;
	NSString* _lastETag;
	double _ttl;

}

@property (nonatomic,copy) id updateCompletionBlock;                   //@synthesize updateCompletionBlock=_updateCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                      //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long customStatusFlags;              //@synthesize customStatusFlags=_customStatusFlags - In the implementation block
@property (nonatomic,retain) NSString * lastETag;                      //@synthesize lastETag=_lastETag - In the implementation block
@property (assign,nonatomic) char isLurk;                              //@synthesize isLurk=_isLurk - In the implementation block
@property (assign,nonatomic) double ttl;                               //@synthesize ttl=_ttl - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setUpdateCompletionBlock:(id)arg1 ;
-(id)updateCompletionBlock;
-(void)_handleUserPresences:(id)arg1 etag:(id)arg2 response:(id)arg3 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(void)setIsLurk:(char)arg1 ;
-(long long)customStatusFlags;
-(void)setCustomStatusFlags:(long long)arg1 ;
-(NSString *)lastETag;
-(void)setLastETag:(NSString *)arg1 ;
-(char)isLurk;
-(double)ttl;
-(void)setTtl:(double)arg1 ;
-(long long)status;
-(void)main;
-(void)setStatus:(long long)arg1 ;
@end
