/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSAttachmentResponseShapeType, NSArray;

@interface EWSGetAttachmentType : EWSBaseRequestType {

	EWSAttachmentResponseShapeType* _AttachmentShape;
	NSArray* _AttachmentIds;

}

@property (nonatomic,retain) EWSAttachmentResponseShapeType * AttachmentShape;              //@synthesize AttachmentShape=_AttachmentShape - In the implementation block
@property (nonatomic,copy) NSArray * AttachmentIds;                                         //@synthesize AttachmentIds=_AttachmentIds - In the implementation block
+(id)definition;
-(NSArray *)AttachmentIds;
-(EWSAttachmentResponseShapeType *)AttachmentShape;
-(void)setAttachmentShape:(EWSAttachmentResponseShapeType *)arg1 ;
-(void)dealloc;
-(void)setAttachmentIds:(NSArray *)arg1 ;
@end

