/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteAttachmentType : EWSBaseRequestType {

	NSArray* _AttachmentIds;

}

@property (nonatomic,copy) NSArray * AttachmentIds;              //@synthesize AttachmentIds=_AttachmentIds - In the implementation block
+(id)definition;
-(NSArray *)AttachmentIds;
-(void)dealloc;
-(void)setAttachmentIds:(NSArray *)arg1 ;
@end

