/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextAttachmentCell.h>

@interface NSTokenAttachmentCell : NSTextAttachmentCell {

	id _representedObject;
	id _textColor;
	id _view;
	struct {
		unsigned _selected : 1;
		unsigned _inSelection : 1;
		unsigned _edgeStyle : 2;
		unsigned _style : 4;
		unsigned _useTintColor : 1;
		unsigned _needsSeparator : 1;
		unsigned _reserved : 22;
	}  _tacFlags;

}

@property (assign) unsigned long long tokenStyle; 
@property (getter=isSelected,readonly) char selected; 
@property (readonly) char alwaysShowBackground; 
@property (readonly) char neverShowSeparator; 
+(void)initialize;
+(char)usesTintColor;
+(SCD_Struct_NS90*)_metricsForTokenStyle:(unsigned long long)arg1 ;
+(char)_getTypesetterBehavior:(long long*)arg1 forTokenStyle:(unsigned long long)arg2 ;
+(char)_getLineSpacing:(double*)arg1 forTokenStyle:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)menu;
-(id)initTextCell:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(CGSize)cellSize;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)textColor;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(long long)interiorBackgroundStyle;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(long long)_typesetterBehavior;
-(char)isSelected;
-(CGPoint)cellBaselineOffset;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(char)wantsToTrackMouseForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(char)arg5 ;
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)_setNeedsSeparator:(char)arg1 ;
-(char)_needsSeparator;
-(id)tokenBackgroundColor;
-(id)tokenForegroundColor;
-(SCD_Struct_NS90*)_metrics;
-(char)_isActiveInView:(id)arg1 ;
-(char)shouldDrawTokenBackground;
-(char)_hasMenu;
-(id)pullDownImage;
-(char)alwaysShowBackground;
-(id)tokenTintColor;
-(void)drawTokenInRect:(CGRect)arg1 withOptions:(id)arg2 ;
-(char)_supportsSeparators;
-(char)neverShowSeparator;
-(char)_shouldShowPullDownImage;
-(CGRect)pullDownRectForBounds:(CGRect)arg1 ;
-(char)shouldDrawSeparator;
-(void)drawPullDownImageWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawTokenWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)tokenStyle;
-(void)_resetNeedsSeparatorWithLayoutManager:(id)arg1 characterIndex:(unsigned long long)arg2 ;
-(CGRect)pullDownTrackingRectForBounds:(CGRect)arg1 ;
-(void)setTokenStyle:(unsigned long long)arg1 ;
@end

