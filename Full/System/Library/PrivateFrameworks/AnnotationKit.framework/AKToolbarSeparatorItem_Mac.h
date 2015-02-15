/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface AKToolbarSeparatorItem_Mac : NSView {

	unsigned long long _displayMode;
	NSColor* _color;

}

@property (assign,nonatomic) unsigned long long displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
@property (retain) NSColor * color;                                       //@synthesize color=_color - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(unsigned long long)displayMode;
-(NSColor *)color;
@end
