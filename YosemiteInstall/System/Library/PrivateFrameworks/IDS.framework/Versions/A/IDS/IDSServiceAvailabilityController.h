/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)_postNotificationForService:(id)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(char)_isValidServiceType:(id)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(id)arg1 create:(char)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(char)hasListenerID:(id)arg1 forService:(id)arg2 ;
-(char)addListenerID:(id)arg1 forService:(id)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
