/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAStateController : NSObject {

	CAStateControllerData* _data;

}

@property (readonly) CALayer * layer; 
@property (__weak) NSObject*<CAStateControllerDelegate> delegate; 
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)_nextStateTimer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3 ;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2 ;
-(void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4 ;
-(id)stateOfLayer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 ;
-(id)removeAllStateChanges;
-(void)restoreStateChanges:(id)arg1 ;
-(void)cancelTimers;
-(void)_removeTransition:(id)arg1 layer:(id)arg2 ;
-(void)setDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(void)dealloc;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 ;
-(NSObject*<CAStateControllerDelegate>)delegate;
@end

