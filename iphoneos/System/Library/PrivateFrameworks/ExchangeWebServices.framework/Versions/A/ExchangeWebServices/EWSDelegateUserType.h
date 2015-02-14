/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSUserIdType, EWSDelegatePermissionsType;

@interface EWSDelegateUserType : NSObject {

	EWSUserIdType* _UserId;
	EWSDelegatePermissionsType* _DelegatePermissions;
	char _ReceiveCopiesOfMeetingMessages;
	char _ViewPrivateItems;

}

@property (nonatomic,retain) EWSUserIdType * UserId;                                        //@synthesize UserId=_UserId - In the implementation block
@property (nonatomic,retain) EWSDelegatePermissionsType * DelegatePermissions;              //@synthesize DelegatePermissions=_DelegatePermissions - In the implementation block
@property (assign,nonatomic) char ReceiveCopiesOfMeetingMessages;                           //@synthesize ReceiveCopiesOfMeetingMessages=_ReceiveCopiesOfMeetingMessages - In the implementation block
@property (assign,nonatomic) char ViewPrivateItems;                                         //@synthesize ViewPrivateItems=_ViewPrivateItems - In the implementation block
+(id)definition;
-(char)ReceiveCopiesOfMeetingMessages;
-(char)ViewPrivateItems;
-(void)setViewPrivateItems:(char)arg1 ;
-(void)dealloc;
-(EWSUserIdType *)UserId;
-(void)setUserId:(EWSUserIdType *)arg1 ;
-(void)setDelegatePermissions:(EWSDelegatePermissionsType *)arg1 ;
-(EWSDelegatePermissionsType *)DelegatePermissions;
-(void)setReceiveCopiesOfMeetingMessages:(char)arg1 ;
@end

