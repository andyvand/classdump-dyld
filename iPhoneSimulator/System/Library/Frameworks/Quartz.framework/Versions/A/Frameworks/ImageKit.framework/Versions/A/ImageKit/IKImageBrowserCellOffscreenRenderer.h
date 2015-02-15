/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableDictionary;

@interface IKImageBrowserCellOffscreenRenderer : NSObject {

	CGContextRef _context;
	id _ikrenderer;
	NSMutableDictionary* _valuesForKeys;
	double _textSize;
	double _iconSize;
	double _gridSpacing;
	double _maxIconSize;
	char _labelsOnRight;
	void* _flavorSetup;
	unsigned long long _cellsStyleMask;
	id _cacheContext;

}

@property (assign) unsigned long long cellsStyleMask;              //@synthesize cellsStyleMask=_cellsStyleMask - In the implementation block
@property (retain) id imageBrowserContext; 
@property (assign,nonatomic) double textSize;                      //@synthesize textSize=_textSize - In the implementation block
@property (assign,nonatomic) double iconSize;                      //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double gridSpacing;                   //@synthesize gridSpacing=_gridSpacing - In the implementation block
@property (assign,nonatomic) double maxIconSize;                   //@synthesize maxIconSize=_maxIconSize - In the implementation block
@property (assign,nonatomic) char labelsOnRight;                   //@synthesize labelsOnRight=_labelsOnRight - In the implementation block
@property (assign) CGContextRef context; 
+(id)rendererWithCGContext:(CGContextRef)arg1 ;
-(double)textSize;
-(void)invalidateCellsLayoutAtIndexes:(id)arg1 ;
-(id)openGLContextCreateIfNeeded:(char)arg1 ;
-(id)cacheManager;
-(char)glRendererEnabled;
-(void)switchOffCARenderer;
-(CGRect)_boundsForCARenderer;
-(id)caRenderer;
-(void)switchOnCARenderer;
-(int)renderLevel;
-(void)cellWillDrawPlaceHolder:(id)arg1 ;
-(void)validateCellLayoutAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_IK14*)flavorAttributes;
-(char)directImportMode;
-(char)showPlayerControls;
-(char)constrainsToOriginalSize;
-(unsigned long long)cellsStyleMask;
-(int)__heightOfTitle;
-(int)__heightOfSubtitle;
-(int)appearanceStyle;
-(char)cellsHaveTitle;
-(void)cellsOutlineRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 ;
-(char)backgroundIsDark;
-(void)selectionRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 ;
-(id)backgroundIKImage;
-(id)backgroundComposition;
-(unsigned long long)editingIndex;
-(char)freeFormLayoutMode;
-(char)delegatesImageManagementToDatasource;
-(char)trackingOfRequestingViewsEnabled;
-(char)shouldBypassDrawingForCell:(id)arg1 ;
-(char)cellsHaveSubtitle;
-(id)groupAtCellIndex:(long long)arg1 ;
-(char)shadowsCells;
-(double)gridSpacing;
-(char)labelsOnRight;
-(void)setLabelsOnRight:(char)arg1 ;
-(void)setTextSize:(double)arg1 ;
-(unsigned long long)indexAtLocationOfDroppedItem;
-(char)spaceOutCellsAtDropLocation;
-(id)imageBrowserContext;
-(void)setImageBrowserContext:(id)arg1 ;
-(void)setCellsStyleMask:(unsigned long long)arg1 ;
-(void)setupWithImageBrowser:(id)arg1 ;
-(void)renderCell:(id)arg1 components:(int)arg2 ;
-(void)setClickableArea:(CGRect)arg1 target:(id)arg2 selector:(SEL)arg3 info:(id)arg4 ;
-(double)maxIconSize;
-(char)drawGrid;
-(void)setGridSpacing:(double)arg1 ;
-(void)setMaxIconSize:(double)arg1 ;
-(void)_assertContextIsInstalledAsCurrentContext;
-(id)backgroundLayer;
-(char)backgroundIsWhite;
-(char)disableTwoLineTitles;
-(void)setupTextAttributes;
-(char)layoutOfCellAtIndexIsValid;
-(void)_addClickableAreaWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(CGContextRef)context;
-(id)window;
-(id)delegate;
-(char)isAnimating;
-(id)selectionIndexes;
-(CGSize)cellSize;
-(id)backgroundColor;
-(CGRect)visibleRect;
-(id)cells;
-(id)layoutManager;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
-(id)renderer;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)hasFocus;
-(void)setNextFrameTime:(double)arg1 ;
-(void)setContext:(CGContextRef)arg1 ;
@end

