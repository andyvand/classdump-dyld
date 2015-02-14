/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSLock;

@interface _GEOURLManifestListener : NSObject {

	NSMutableArray* _handlers;
	NSLock* _lock;
	dispatch_source_sRef _timeoutTimer;

}
+(id)sharedListener;
-(void)waitForManifestWithHandler:(/*^block*/id)arg1 ;
-(void)_finish:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end

