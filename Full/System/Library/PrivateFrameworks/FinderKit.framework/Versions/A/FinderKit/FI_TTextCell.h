/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSColor;

@interface FI_TTextCell : NSTextFieldCell {

	TNSRef<NSColor *> _enabledTextColor;
	TNSRef<NSColor *> _disabledTextColor;
	BOOL _drawGrayTextWhenDisabled;
	BOOL _centerVertically;

}

@property (nonatomic,retain) NSColor * enabledTextColor; 
@property (nonatomic,retain) NSColor * disabledTextColor; 
@property (assign,nonatomic) BOOL drawGrayTextWhenDisabled;              //@synthesize drawGrayTextWhenDisabled=_drawGrayTextWhenDisabled - In the implementation block
@property (assign,nonatomic) BOOL centerVertically;                      //@synthesize centerVertically=_centerVertically - In the implementation block
-(void)initCommon;
-(void)awakeCommon;
-(BOOL)centerVertically;
-(BOOL)drawGrayTextWhenDisabled;
-(void)setCenterVertically:(BOOL)arg1 ;
-(void)setEnabledTextColor:(NSColor *)arg1 ;
-(void)setDrawGrayTextWhenDisabled:(BOOL)arg1 ;
-(NSColor *)enabledTextColor;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(id)initImageCell:(id)arg1 ;
-(void)awakeFromNib;
-(NSColor *)disabledTextColor;
-(void)setDisabledTextColor:(NSColor *)arg1 ;
@end

