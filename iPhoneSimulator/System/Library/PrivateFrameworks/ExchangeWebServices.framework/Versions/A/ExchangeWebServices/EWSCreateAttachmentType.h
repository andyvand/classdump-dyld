/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemIdType, NSArray;

@interface EWSCreateAttachmentType : EWSBaseRequestType {

	EWSItemIdType* _ParentItemId;
	NSArray* _Attachments;

}

@property (nonatomic,retain) EWSItemIdType * ParentItemId;              //@synthesize ParentItemId=_ParentItemId - In the implementation block
@property (nonatomic,copy) NSArray * Attachments;                       //@synthesize Attachments=_Attachments - In the implementation block
+(id)definition;
-(EWSItemIdType *)ParentItemId;
-(void)dealloc;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)Attachments;
-(void)setParentItemId:(EWSItemIdType *)arg1 ;
@end

