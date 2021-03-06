/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation {

	unsigned long long _badgeValue;
	/*^block*/id _modifyBadgeCompletionBlock;

}

@property (assign,nonatomic) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy) id modifyBadgeCompletionBlock;                //@synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(unsigned long long)badgeValue;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(id)modifyBadgeCompletionBlock;
-(void)setModifyBadgeCompletionBlock:(id)arg1 ;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
-(id)init;
@end

