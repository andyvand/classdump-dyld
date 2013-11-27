/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <gamed/gamed-Structs.h>
@interface GKReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)_gkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)_gkReachabilityWithHostName:(id)arg1 ;
+(id)_gkReachabilityForLocalWiFi;
+(id)_gkReachabilityForInternetConnection;
-(void)_gkStopNotifier;
-(BOOL)_gkStartNotifier;
-(BOOL)_gkConnectionRequired;
-(int)_gkCurrentReachabilityStatus;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
@end
