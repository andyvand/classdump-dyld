/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSAttachmentInfoResponseMessageType : EWSResponseMessageType {

	NSArray* _Attachments;

}

@property (nonatomic,copy) NSArray * Attachments;              //@synthesize Attachments=_Attachments - In the implementation block
+(id)definition;
-(void)dealloc;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)Attachments;
@end

