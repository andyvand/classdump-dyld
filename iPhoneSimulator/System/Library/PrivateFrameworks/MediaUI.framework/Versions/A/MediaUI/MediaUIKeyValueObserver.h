/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <MediaUI/NSCopying.h>

@class NSCountedSet;

@interface MediaUIKeyValueObserver : NSObject <NSCopying> {

	dispatch_queue_sRef _queue;
	id _target;
	SEL _action;
	NSCountedSet* _observances;
	NSCountedSet* _internalObservances;

}

@property (assign) id target; 
@property (assign) SEL action; 
-(void)beginObservingKeyPath:(id)arg1 ofObject:(id)arg2 ;
-(void)stopObservingKeyPath:(id)arg1 ofObject:(id)arg2 ;
-(void)enumerateChanges:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)target;
-(SEL)action;
@end

