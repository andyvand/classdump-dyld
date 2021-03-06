/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <AppKit/NSView.h>

@class CALayer, NSColor, NSString;

@interface NCLineView : NSView {

	CALayer* _dividerLine;
	NSColor* _lineColor;
	NSString* _colorSelectorName;
	double _opacity;

}

@property (nonatomic,copy) NSString * colorSelectorName;              //@synthesize colorSelectorName=_colorSelectorName - In the implementation block
@property (assign,nonatomic) double opacity;                          //@synthesize opacity=_opacity - In the implementation block
-(NSString *)colorSelectorName;
-(void)setColorSelectorName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
-(void)updateLayer;
-(char)wantsUpdateLayer;
-(char)allowsVibrancy;
-(void)setOpacity:(double)arg1 ;
-(double)opacity;
@end

