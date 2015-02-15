/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTrackingArea, NSString, NSTextView;

@interface NSDataDetectionIndicatorView : NSView {

	NSTrackingArea* _trackingArea;
	id _dataResult;
	NSString* _string;
	NSRange _range;
	NSTextView* _textView;

}
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_reset;
-(void)bindToTextView:(id)arg1 forDataResult:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_showMenu:(id)arg1 ;
@end
