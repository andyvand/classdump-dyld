/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSColor, NSArray, NSDictionary;

@interface QCCompositionPickerInfos : NSObject {

	float _maxAnimationFrameRate;
	char _showsCompositionNames;
	char _animateCompositions;
	char _allowsEmptySelection;
	char _allowsLayoutAnimations;
	char _allowsIdentitySelection;
	CGSize _compositionAspectRatio;
	long long _selectionMode;
	long long _selectedCompositionIndex;
	unsigned long long _borderType;
	NSColor* _backgroundColor;
	NSColor* _cellBackgroundColor;
	char _drawsBackground;
	char _showsAttributeFilter;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	char _fillsPicker;
	NSArray* _compositions;
	NSDictionary* _defaultValues;
	NSDictionary* _options;
	char _flipCellsHorizontally;

}

@property (assign) float maxAnimationFrameRate;                     //@synthesize maxAnimationFrameRate=_maxAnimationFrameRate - In the implementation block
@property (assign) char showsCompositionNames;                      //@synthesize showsCompositionNames=_showsCompositionNames - In the implementation block
@property (assign) char animateCompositions;                        //@synthesize animateCompositions=_animateCompositions - In the implementation block
@property (assign) char allowsEmptySelection;                       //@synthesize allowsEmptySelection=_allowsEmptySelection - In the implementation block
@property (assign) char allowsLayoutAnimations;                     //@synthesize allowsLayoutAnimations=_allowsLayoutAnimations - In the implementation block
@property (assign) char allowsIdentitySelection;                    //@synthesize allowsIdentitySelection=_allowsIdentitySelection - In the implementation block
@property (assign) CGSize compositionAspectRatio;                   //@synthesize compositionAspectRatio=_compositionAspectRatio - In the implementation block
@property (assign) long long selectionMode;                         //@synthesize selectionMode=_selectionMode - In the implementation block
@property (assign) long long selectedCompositionIndex;              //@synthesize selectedCompositionIndex=_selectedCompositionIndex - In the implementation block
@property (assign) unsigned long long borderType;                   //@synthesize borderType=_borderType - In the implementation block
@property (retain) NSColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (retain) NSColor * cellBackgroundColor;                   //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (assign) char drawsBackground;                            //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign) char showsAttributeFilter;                       //@synthesize showsAttributeFilter=_showsAttributeFilter - In the implementation block
@property (assign) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign) char fillsPicker;                                //@synthesize fillsPicker=_fillsPicker - In the implementation block
@property (retain) NSArray * compositions; 
@property (retain) NSDictionary * defaultValues;                    //@synthesize defaultValues=_defaultValues - In the implementation block
@property (retain) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (assign) char flipCellsHorizontally;                      //@synthesize flipCellsHorizontally=_flipCellsHorizontally - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSDictionary *)options;
-(unsigned long long)borderType;
-(void)setBorderType:(unsigned long long)arg1 ;
-(NSColor *)backgroundColor;
-(void)setAllowsEmptySelection:(char)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(unsigned long long)numberOfRows;
-(char)allowsEmptySelection;
-(char)drawsBackground;
-(unsigned long long)numberOfColumns;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setCellBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)cellBackgroundColor;
-(long long)selectionMode;
-(float)maxAnimationFrameRate;
-(char)flipCellsHorizontally;
-(char)showsCompositionNames;
-(char)animateCompositions;
-(char)useHUDStyle;
-(NSDictionary *)defaultValues;
-(long long)selectedCompositionIndex;
-(void)setSelectedCompositionIndex:(long long)arg1 ;
-(id)initWithPickerOptions:(id)arg1 ;
-(void)setCompositions:(NSArray *)arg1 ;
-(NSArray *)compositions;
-(void)setMaxAnimationFrameRate:(float)arg1 ;
-(void)setShowsCompositionNames:(char)arg1 ;
-(void)setAnimateCompositions:(char)arg1 ;
-(char)allowsLayoutAnimations;
-(void)setAllowsLayoutAnimations:(char)arg1 ;
-(char)allowsIdentitySelection;
-(void)setAllowsIdentitySelection:(char)arg1 ;
-(CGSize)compositionAspectRatio;
-(void)setCompositionAspectRatio:(CGSize)arg1 ;
-(void)setSelectionMode:(long long)arg1 ;
-(char)showsAttributeFilter;
-(void)setShowsAttributeFilter:(char)arg1 ;
-(char)fillsPicker;
-(void)setFillsPicker:(char)arg1 ;
-(void)setDefaultValues:(NSDictionary *)arg1 ;
-(void)setFlipCellsHorizontally:(char)arg1 ;
@end

