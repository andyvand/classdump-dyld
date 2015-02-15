/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface ColoredRect : NSView {

	int _colorType;
	NSColor* _color;

}

@property (assign,nonatomic) int colorType;                //@synthesize colorType=_colorType - In the implementation block
@property (nonatomic,retain) NSColor * color;              //@synthesize color=_color - In the implementation block
-(void)setColorType:(int)arg1 ;
-(int)colorType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateLayer;
-(char)wantsUpdateLayer;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
@end

