/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSAttachmentIdType, NSString;

@interface EWSAttachmentType : NSObject {

	EWSAttachmentIdType* _AttachmentId;
	NSString* _Name;
	NSString* _ContentType;
	NSString* _ContentId;
	NSString* _ContentLocation;

}

@property (nonatomic,retain) EWSAttachmentIdType * AttachmentId;              //@synthesize AttachmentId=_AttachmentId - In the implementation block
@property (nonatomic,copy) NSString * Name;                                   //@synthesize Name=_Name - In the implementation block
@property (nonatomic,copy) NSString * ContentType;                            //@synthesize ContentType=_ContentType - In the implementation block
@property (nonatomic,copy) NSString * ContentId;                              //@synthesize ContentId=_ContentId - In the implementation block
@property (nonatomic,copy) NSString * ContentLocation;                        //@synthesize ContentLocation=_ContentLocation - In the implementation block
+(id)definition;
-(NSString *)ContentId;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)ContentLocation;
-(void)setContentType:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(void)setAttachmentId:(EWSAttachmentIdType *)arg1 ;
-(EWSAttachmentIdType *)AttachmentId;
-(NSString *)ContentType;
-(NSString *)Name;
@end

