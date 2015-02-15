/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSColorPickerMatrixViewDelegate;
@class NSImage, NSColorList, NSTrackingArea, NSColor;

@interface NSColorPickerMatrixView : NSView {

	NSImage* _image;
	NSColorList* _colorList;
	CGSize _swatchSize;
	unsigned long long _numColumns;
	unsigned long long _numRows;
	unsigned long long _selectedIndex;
	NSTrackingArea* _trackArea;
	CGRect _trackingSwatchRect;
	id<NSColorPickerMatrixViewDelegate> _delegate;
	struct {
		unsigned _emptyEnabled : 1;
		unsigned _hasEmptyColorCell : 1;
		unsigned _reserved : 30;
	}  _flags;

}

@property (readonly) NSColor * color; 
@property (retain) NSColorList * colorList;                                   //@synthesize colorList=_colorList - In the implementation block
@property (assign) CGSize swatchSize;                                         //@synthesize swatchSize=_swatchSize - In the implementation block
@property (assign) unsigned long long numberOfColumns;                        //@synthesize numColumns=_numColumns - In the implementation block
@property (assign) id<NSColorPickerMatrixViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEmptyColorEnabled) char emptyColorEnabled; 
+(id)defaultColorList;
+(id)defaultImage;
+(char)hasEmptyColorForDefaultList;
-(void)setDelegate:(id<NSColorPickerMatrixViewDelegate>)arg1 ;
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
-(id<NSColorPickerMatrixViewDelegate>)delegate;
-(char)isFlipped;
-(char)isOpaque;
-(unsigned long long)numberOfRows;
-(void)mouseDown:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)mouseExited:(id)arg1 ;
-(NSColor *)color;
-(void)setSwatchSize:(CGSize)arg1 ;
-(NSColorList *)colorList;
-(void)updateTrackingAreas;
-(char)isEmptyColorEnabled;
-(void)_updateConfigs;
-(id)_accessibilityChildren;
-(id)colorAtIndex:(unsigned long long)arg1 ;
-(CGRect)rectForColorAtIndex:(unsigned long long)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setColorList:(NSColorList *)arg1 ;
-(void)setEmptyColorEnabled:(char)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)selectColorAtIndex:(unsigned long long)arg1 ;
-(id)_accessibilityAttributeValue:(id)arg1 forIndexedChild:(id)arg2 ;
-(CGSize)swatchSize;
-(char)_hasEmptyColorCell;
-(unsigned long long)colorIndexAtPoint:(CGPoint)arg1 ;
@end
