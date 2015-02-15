/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSImage, NSURL;

@interface NSPathComponentCell : NSTextFieldCell {

	NSImage* _image;
	double _fullWidth;
	double _resizedWidth;
	double _currentWidth;
	NSURL* _url;
	NSMouseTrackerDelegateRespondTo _flags;
	id _aux;

}

@property (copy) NSImage * image; 
@property (copy) NSURL * URL; 
+(CGSize)_iconSizeForControlSize:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)imageNamed:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(long long)interiorBackgroundStyle;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)initImageCell:(id)arg1 ;
-(id)_textAttributes;
-(char)_textDimsWhenDisabled;
-(void)setURL:(NSURL *)arg1 ;
-(double)_fullWidth;
-(double)_minWidth;
-(CGSize)_iconSize;
-(void)_setShouldDrawArrow:(char)arg1 ;
-(void)_setDrawsAsNavigationBar:(char)arg1 ;
-(void)_setIsFirstItem:(char)arg1 ;
-(void)_setIsLastItem:(char)arg1 ;
-(void)_setResizedWidth:(double)arg1 ;
-(long long)_compareToCell:(id)arg1 ;
-(double)_resizedWidth;
-(double)_currentWidth;
-(void)_setCurrentWidth:(double)arg1 ;
-(void)_setIsDropTarget:(char)arg1 ;
-(char)_shouldDrawArrow;
-(double)_overlapAmount;
-(void)_drawNavigationBarBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)_isDropTarget;
-(char)_shouldHighlightDropTarget;
-(char)_drawsAsNavigationBar;
-(char)_isFirstItem;
-(char)_isLastItem;
-(void)_setShouldDrawArrowYes;
@end
