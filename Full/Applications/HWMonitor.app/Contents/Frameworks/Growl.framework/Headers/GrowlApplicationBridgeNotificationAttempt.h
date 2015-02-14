/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Growl/GrowlCommunicationAttempt.h>

@protocol GrowlNotificationProtocol;
@class NSConnection, NSProxy;

@interface GrowlApplicationBridgeNotificationAttempt : GrowlCommunicationAttempt {

	NSConnection* growlConnection;
	NSProxy*<GrowlNotificationProtocol> growlProxy;

}
+(unsigned long long)attemptType;
-(id)growlProxy;
-(void)connectionDidDie:(id)arg1 ;
-(void)dealloc;
-(void)begin;
@end

