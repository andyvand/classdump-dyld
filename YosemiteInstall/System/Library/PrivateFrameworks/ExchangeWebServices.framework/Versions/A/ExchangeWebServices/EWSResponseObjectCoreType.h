/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSMessageType.h>

@class EWSItemIdType;

@interface EWSResponseObjectCoreType : EWSMessageType {

	EWSItemIdType* _ReferenceItemId;

}

@property (nonatomic,retain) EWSItemIdType * ReferenceItemId;              //@synthesize ReferenceItemId=_ReferenceItemId - In the implementation block
+(id)definition;
-(EWSItemIdType *)ReferenceItemId;
-(void)dealloc;
-(void)setReferenceItemId:(EWSItemIdType *)arg1 ;
@end

