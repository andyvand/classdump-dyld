/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSResponseMessageType, EWSFreeBusyView;

@interface EWSFreeBusyResponseType : NSObject {

	EWSResponseMessageType* _ResponseMessage;
	EWSFreeBusyView* _FreeBusyView;

}

@property (nonatomic,retain) EWSResponseMessageType * ResponseMessage;              //@synthesize ResponseMessage=_ResponseMessage - In the implementation block
@property (nonatomic,retain) EWSFreeBusyView * FreeBusyView;                        //@synthesize FreeBusyView=_FreeBusyView - In the implementation block
+(id)definition;
-(void)setFreeBusyView:(EWSFreeBusyView *)arg1 ;
-(void)setResponseMessage:(EWSResponseMessageType *)arg1 ;
-(void)dealloc;
-(EWSFreeBusyView *)FreeBusyView;
-(EWSResponseMessageType *)ResponseMessage;
@end

