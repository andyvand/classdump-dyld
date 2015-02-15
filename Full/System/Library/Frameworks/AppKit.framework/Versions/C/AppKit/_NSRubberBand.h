/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSEvent;

@interface _NSRubberBand : NSObject {

	CGPoint _startingPoint;
	CGRect _currentRect;
	CGRect _lastRect;
	id _delegate;
	NSView* _view;
	id _data;
	NSEvent* _event;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)drawRubberBandWithClipRect:(CGRect)arg1 ;
-(id)initWithEvent:(id)arg1 inView:(id)arg2 ;
-(void)performRubberBandingWithEvent:(id)arg1 ;
-(id)originalEvent;
@end

