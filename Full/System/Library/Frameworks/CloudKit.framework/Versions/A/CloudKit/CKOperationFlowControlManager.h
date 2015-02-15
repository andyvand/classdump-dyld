/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationClasses;

}

@property (readonly) NSMutableDictionary * flowControlledOperationClasses;              //@synthesize flowControlledOperationClasses=_flowControlledOperationClasses - In the implementation block
-(id)statusReport;
-(void)unlimitAllOperations;
-(NSMutableDictionary *)flowControlledOperationClasses;
-(char)isOperationLimited:(id)arg1 ;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 ;
-(id)init;
@end

