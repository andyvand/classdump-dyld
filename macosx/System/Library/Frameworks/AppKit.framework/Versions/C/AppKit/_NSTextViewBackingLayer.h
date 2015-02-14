/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSViewBackingLayer.h>

@class NSTextLayer;

@interface _NSTextViewBackingLayer : _NSViewBackingLayer {

	NSTextLayer* _textLayer;
	char _wantsTextLayer;

}

@property (assign) char wantsTextLayer; 
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_NS_invalidateSuggestedContentsScale;
-(void)setWantsTextLayer:(char)arg1 ;
-(void)_updateTextLayer;
-(char)wantsTextLayer;
@end

