/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSLock;

@interface GEONetworkObserver : NSObject {

	NSLock* _lock;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	char _networkNotified;
	char _networkReachable;

}
+(id)sharedNetworkObserver;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)initializeIfNecessary;
-(char)isNetworkReachable;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)_networkObserversInitialize;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(char)isCellConnection;
-(id)init;
-(void)dealloc;
@end
