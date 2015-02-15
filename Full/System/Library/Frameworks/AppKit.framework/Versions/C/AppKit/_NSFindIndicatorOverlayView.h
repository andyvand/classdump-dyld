/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class _NSTextFinderImpl, NSArray;

@interface _NSFindIndicatorOverlayView : NSView {

	_NSTextFinderImpl* _textFinderImpl;
	NSArray* _holes;
	char _flipped;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(void)_updateHoles;
-(id)initWithTextFinderImpl:(id)arg1 flipped:(char)arg2 ;
-(id)_holes;
@end

