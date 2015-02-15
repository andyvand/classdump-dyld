/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DOCKGestureHandler;
@class NSMutableArray, NSString;

@interface DOCKGestures : NSObject {

	NSMutableArray* _swipeDownGestures;
	NSMutableArray* _swipeUpGestures;
	NSMutableArray* _swipeLeftGestures;
	NSMutableArray* _swipeRightGestures;
	NSMutableArray* _expandGestures;
	NSMutableArray* _collapseGestures;
	NSMutableArray* _doubleTapGestures;
	NSMutableArray* _windowSwitchGestures;
	id<DOCKGestureHandler> _currentHandler;
	BOOL _phaseBeganReceived;
	NSString* _startingDisplayUUID;

}

@property (nonatomic,readonly) BOOL isGesturing; 
@property (nonatomic,readonly) BOOL isFluidGesturing; 
-(BOOL)isFluidGesturing;
-(id)_handlerForEvent:(int)arg1 ;
-(void)addHandler:(id)arg1 forGesture:(int)arg2 ;
-(void)removeHandler:(id)arg1 forGesture:(int)arg2 ;
-(void)_handleEvent:(id)arg1 ;
-(BOOL)isGesturing;
-(id)init;
@end
