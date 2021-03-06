/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@interface CUTReachability : NSObject {

	char localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(char)connectionRequired;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(long long)currentReachabilityStatus;
-(void)dealloc;
@end

