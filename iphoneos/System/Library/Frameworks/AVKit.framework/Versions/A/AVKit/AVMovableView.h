/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray;

@interface AVMovableView : NSView {

	NSMutableArray* _autoresizingMaskLayoutConstraints;
	unsigned long long _autoresizingMask;
	CGRect _initialViewFrame;
	CGRect _initialSuperviewBounds;
	char _movable;

}

@property (getter=isMovable) char movable;              //@synthesize movable=_movable - In the implementation block
-(void)setAutoresizingMask:(unsigned long long)arg1 viewFrame:(CGRect)arg2 superviewBounds:(CGRect)arg3 ;
-(void)removeAutoresizingMaskLayoutConstraints;
-(void)addAutoresizingMaskLayoutConstraints;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(char)isMovable;
-(void)setMovable:(char)arg1 ;
@end

