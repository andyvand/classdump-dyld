/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSArray;

@interface NSViewMultiClipDrawingHelper : NSObject {

	NSView* _drawingView;
	NSArray* _rects;
	long long _currentDrawingIndex;

}
-(void)dealloc;
-(char)isDrawingContentAtIndex:(long long)arg1 ;
-(id)initWithDrawingView:(id)arg1 rects:(id)arg2 ;
-(void)drawViewInRect:(CGRect)arg1 ;
@end

