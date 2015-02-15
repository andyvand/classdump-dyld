/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

@interface CAStateControllerLayer : NSObject {

	CALayer* _layer;
	CAState* _currentState;
	CAStateControllerUndo* _undoStack;
	NSMutableArray* _transitions;
	NSTimer* _nextTimer;
	CAState* _nextState;
	float _nextSpeed;

}

@property (readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) CAStateControllerUndo * undoStack;              //@synthesize undoStack=_undoStack - In the implementation block
-(void)setCurrentState:(CAState *)arg1 ;
-(void)addTransition:(id)arg1 ;
-(void)removeTransition:(id)arg1 ;
-(CAStateControllerUndo *)undoStack;
-(void)dealloc;
-(CALayer *)layer;
-(void)invalidate;
-(id)initWithLayer:(id)arg1 ;
-(CAState *)currentState;
@end

