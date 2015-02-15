/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, NSLock, NSString;

@interface GEONetworkDefaults : NSObject {

	NSMutableArray* _completionHandlers;
	char _isRegistering;
	NSDictionary* _networkDefaults;
	NSLock* _networkDefaultsLock;
	NSString* _cacheFilePath;

}
+(id)sharedNetworkDefaults;
-(void)refreshNetworkDefaults;
-(void)registerNetworkDefaults:(/*^block*/id)arg1 ;
-(void)_registrationComplete;
-(id)init;
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(char)needsUpdate;
@end

