/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString;

@interface __NSHostExtraIvars : NSObject {

	NSString* thingToResolve;
	int resolveType;
	dispatch_queue_sRef resolveQueue;
	dispatch_queue_sRef cacheAccessQueue;
	dispatch_queue_sRef callbackQueue;
	char startedResolving;

}

@property (nonatomic,retain) NSString * thingToResolve; 
@property (assign,nonatomic) int resolveType; 
@property (readonly) dispatch_queue_sRef resolveQueue; 
@property (readonly) dispatch_queue_sRef cacheAccessQueue; 
@property (readonly) dispatch_queue_sRef callbackQueue; 
@property (assign) char startedResolving; 
-(dispatch_queue_sRef)callbackQueue;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(int)resolveType;
-(void)setResolveType:(int)arg1 ;
-(NSString *)thingToResolve;
-(void)setThingToResolve:(NSString *)arg1 ;
-(dispatch_queue_sRef)resolveQueue;
-(dispatch_queue_sRef)cacheAccessQueue;
-(char)startedResolving;
-(void)setStartedResolving:(char)arg1 ;
-(void)cleanup;
@end

