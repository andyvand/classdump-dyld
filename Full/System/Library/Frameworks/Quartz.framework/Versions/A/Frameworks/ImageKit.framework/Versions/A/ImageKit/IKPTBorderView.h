/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface IKPTBorderView : NSView {

	NSColor* _borderColor;
	NSColor* _backgroundColor;
	unsigned long long _borders;

}

@property (assign) unsigned long long borders;              //@synthesize borders=_borders - In the implementation block
@property (retain) NSColor * borderColor;                   //@synthesize borderColor=_borderColor - In the implementation block
@property (retain) NSColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setBorders:(unsigned long long)arg1 ;
-(unsigned long long)borders;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSColor *)borderColor;
-(void)setBorderColor:(NSColor *)arg1 ;
-(char)isOpaque;
-(NSColor *)backgroundColor;
@end

