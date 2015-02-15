/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSColorPickerGridViewDelegate;
@class NSColor, NSColorList, NSIndexPath, NSTrackingArea, NSImage;

@interface NSColorPickerGridView : NSView {

	id<NSColorPickerGridViewDelegate> _delegate;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	NSColor* _selectedColor;
	NSColorList* _colorList;
	NSIndexPath* _hoveredIndexPath;
	NSTrackingArea* _trackArea;
	NSImage* _image;
	struct {
		unsigned _emptyEnabled : 1;
		unsigned _reserved : 30;
	}  _flags;

}

@property (assign) id<NSColorPickerGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSColor * selectedColor;                                   //@synthesize selectedColor=_selectedColor - In the implementation block
@property (readonly) NSColorList * colorList;                               //@synthesize colorList=_colorList - In the implementation block
@property (assign) unsigned long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign) unsigned long long numberOfRows;                         //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (getter=isEmptyColorEnabled) char emptyColorEnabled; 
+(id)defaultColorList;
-(void)setDelegate:(id<NSColorPickerGridViewDelegate>)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)image;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id<NSColorPickerGridViewDelegate>)delegate;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)isOpaque;
-(unsigned long long)numberOfRows;
-(void)mouseDown:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setSwatchSize:(CGSize)arg1 ;
-(NSColorList *)colorList;
-(void)updateTrackingAreas;
-(char)isEmptyColorEnabled;
-(void)_updateConfigs;
-(NSColor *)selectedColor;
-(id)_indexPathForColor:(id)arg1 ;
-(id)_bezierPathForColorAtIndexPath:(id)arg1 ;
-(CGRect)_rectForColorAtIndexPath:(id)arg1 expanded:(double)arg2 ;
-(CGRect)_rectForColorAtIndexPath:(id)arg1 ;
-(CGRect)_rectForColorAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 expanded:(double)arg3 ;
-(id)_colorIndexPathAtPoint:(CGPoint)arg1 ;
-(id)_colorAtIndexPath:(id)arg1 ;
-(void)_selectColor:(id)arg1 withIndexPath:(id)arg2 ;
-(void)setSelectedColor:(NSColor *)arg1 ;
-(void)selectColorAtIndexPath:(id)arg1 ;
-(id)_indexPathForAccessibilityIndex:(unsigned long long)arg1 ;
-(id)_accessibilityChildren;
-(id)colorAtIndex:(unsigned long long)arg1 ;
-(CGRect)rectForColorAtIndex:(unsigned long long)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setColorList:(NSColorList *)arg1 ;
-(void)setEmptyColorEnabled:(char)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)selectColorAtIndex:(unsigned long long)arg1 ;
-(id)_accessibilityAttributeValue:(id)arg1 forIndexedChild:(id)arg2 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
@end

