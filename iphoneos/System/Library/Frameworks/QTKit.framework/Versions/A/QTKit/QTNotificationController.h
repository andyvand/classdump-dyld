/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface QTNotificationController : NSObject {

	unsigned long long _sharedAddr;
	unsigned long long _sharedSize;
	unsigned _sharedName;
	unsigned _messagePort;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;
	long long _reserved4;

}
+(id)sharedNotificationController;
+(void)initialize;
-(void)setMessagePort:(unsigned)arg1 ;
-(void)setSharedAddress:(unsigned long long)arg1 ;
-(void)setSharedSize:(unsigned long long)arg1 ;
-(void)handleNotification;
-(void)setSharedName:(unsigned)arg1 ;
-(void)postNotification:(id)arg1 ;
@end

