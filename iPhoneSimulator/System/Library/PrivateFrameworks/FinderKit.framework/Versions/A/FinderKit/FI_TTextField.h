/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTextField.h>

@class NSColor;

@interface FI_TTextField : NSTextField {

	CGSize _maxSize;
	CGSize _minSize;
	CGSize _idealSize;
	BOOL _suspendCalcIdealSize;
	BOOL _idealSizeIsDirty;
	TNSRef<NSColor *> _enabledTextColor;
	TNSRef<NSColor *> _disabledTextColor;
	BOOL _autoSizeToFit;
	BOOL _autoAdjustHeightToFit;
	BOOL _sizingInProgress;
	BOOL _drawGrayTextWhenDisabled;
	BOOL _disableWhenWindowIsNotKey;
	BOOL _delayWindowOrderingOnClickThrough;
	TriStateBool _isEnabledCacheWhenNotKey;
	BOOL _isInsideWindowChangedKeyState;

}

@property (assign,nonatomic) CGSize maxSize;                                      //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) CGSize minSize;                                      //@synthesize minSize=_minSize - In the implementation block
@property (nonatomic,readonly) CGSize idealSize;                                  //@synthesize idealSize=_idealSize - In the implementation block
@property (assign,nonatomic) BOOL suspendCalcIdealSize;                           //@synthesize suspendCalcIdealSize=_suspendCalcIdealSize - In the implementation block
@property (nonatomic,retain) NSColor * enabledTextColor; 
@property (nonatomic,retain) NSColor * disabledTextColor; 
@property (assign,nonatomic) NSRange truncateInRange; 
@property (assign,nonatomic) BOOL autoSizeToFit;                                  //@synthesize autoSizeToFit=_autoSizeToFit - In the implementation block
@property (assign,nonatomic) BOOL autoAdjustHeightToFit;                          //@synthesize autoAdjustHeightToFit=_autoAdjustHeightToFit - In the implementation block
@property (assign,nonatomic) BOOL drawGrayTextWhenDisabled;                       //@synthesize drawGrayTextWhenDisabled=_drawGrayTextWhenDisabled - In the implementation block
@property (assign,nonatomic) BOOL disableWhenWindowIsNotKey;                      //@synthesize disableWhenWindowIsNotKey=_disableWhenWindowIsNotKey - In the implementation block
@property (assign,nonatomic) BOOL delayWindowOrderingOnClickThrough;              //@synthesize delayWindowOrderingOnClickThrough=_delayWindowOrderingOnClickThrough - In the implementation block
+(Class)cellClass;
-(void)initCommon;
-(void)setAutoAdjustHeightToFit:(BOOL)arg1 ;
-(void)setAutoSizeToFit:(BOOL)arg1 ;
-(void)applySettingsFrom:(id)arg1 ;
-(CGSize)idealSize;
-(void)awakeCommon;
-(BOOL)drawGrayTextWhenDisabled;
-(void)setEnabledTextColor:(NSColor *)arg1 ;
-(void)setDrawGrayTextWhenDisabled:(BOOL)arg1 ;
-(void)setSubpixelAntialiasing:(BOOL)arg1 ;
-(void)setTruncateInRange:(NSRange)arg1 ;
-(NSRange)truncateInRange;
-(void)calcIdealSize;
-(BOOL)disableWhenWindowIsNotKey;
-(void)setDisableWhenWindowIsNotKey:(BOOL)arg1 ;
-(BOOL)delayWindowOrderingOnClickThrough;
-(void)setDelayWindowOrderingOnClickThrough:(BOOL)arg1 ;
-(BOOL)autoAdjustHeightToFit;
-(BOOL)autoSizeToFit;
-(void)adjustHeightToFit;
-(CGSize)calcSizeToFit;
-(double)calcHeightToFit:(CGSize)arg1 ;
-(CGSize)calcIdealSizeImpl;
-(id)copyTextField;
-(void)setSuspendCalcIdealSize:(BOOL)arg1 ;
-(BOOL)suspendCalcIdealSize;
-(NSColor *)enabledTextColor;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)sizeToFit;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)_windowChangedKeyState;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(CGSize)maxSize;
-(void)setObjectValue:(id)arg1 ;
-(void)setAttributedStringValue:(id)arg1 ;
-(void)setFormatter:(id)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(CGSize)minSize;
-(void)awakeFromNib;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(NSColor *)disabledTextColor;
-(void)setDisabledTextColor:(NSColor *)arg1 ;
-(id)textAttributes;
@end

