/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/NSMachPortDelegate.h>

@class NSMutableDictionary, NSArray, RDMutex, NSMutableArray, NSString;

@interface PerformSelectorOnThreadManager : NSObject <NSMachPortDelegate> {

	NSMutableDictionary* _threadToPortMap;
	NSArray* _modes;
	RDMutex* _lock;
	NSMutableArray* _commandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)makeKeyForThread:(id)arg1 ;
-(void)registerCurrentThread;
-(void)unregisterCurrentThread;
-(void)threadWrapper:(id)arg1 ;
-(void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThread:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
-(void)handlePortMessage:(id)arg1 ;
@end

