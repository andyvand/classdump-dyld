/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, GEOProxyClient, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject {

	NSLock* _lock;
	GEOProxyClient* _currentComposite;
	NSMutableSet* _currentSet;

}
+(id)sharedRegistry;
-(void)addClient:(id)arg1 ;
-(void)_updateComposite;
-(void)enableRegistry;
-(id)compositeClient;
-(void)dealloc;
-(void)removeClient:(id)arg1 ;
@end

