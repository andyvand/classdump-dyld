/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/NSWindowDelegate.h>

@class IKSlideshowHandler, IKSSBackgroundWindow, CAScrollLayer, IKSSIndexSheetSelectionLayer, IKSSContentLayer, CAKeyframeAnimation, IKSSIndexView, NSString;

@interface IKSSIndexHandler : NSObject <NSWindowDelegate> {

	IKSlideshowHandler* _slideshowHandler;
	IKSSBackgroundWindow* _indexWindow;
	IKSSBackgroundWindow* _backgroundWindow;
	CAScrollLayer* _bodyLayer;
	IKSSIndexSheetSelectionLayer* _selectionLayer;
	IKSSContentLayer* _contentLayer;
	CGImageRef _missingSlide;
	CAKeyframeAnimation* _progressAnimation;
	double _thumbnailSize;
	int _columns;
	int _rows;
	char _thumbnailsFitOnScreen;
	IKSSIndexView* _view;
	id* _thumbnailLayers;
	long long _thumbnailLayersCount;
	char _switchedToIndexMode;
	long long _selectedThumbnailIndex;

}

@property (assign) double thumbnailSize;                              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign) long long selectedThumbnailIndex;                  //@synthesize selectedThumbnailIndex=_selectedThumbnailIndex - In the implementation block
@property (assign) int columns;                                       //@synthesize columns=_columns - In the implementation block
@property (assign) int rows;                                          //@synthesize rows=_rows - In the implementation block
@property (assign) char thumbnailsFitOnScreen;                        //@synthesize thumbnailsFitOnScreen=_thumbnailsFitOnScreen - In the implementation block
@property (readonly) IKSSBackgroundWindow * indexWindow;              //@synthesize indexWindow=_indexWindow - In the implementation block
@property (assign) char switchedToIndexMode;                          //@synthesize switchedToIndexMode=_switchedToIndexMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationDidChangeScreenParameters:(id)arg1 ;
-(int)rows;
-(void)setRows:(int)arg1 ;
-(void)select;
-(double)thumbnailSize;
-(IKSSBackgroundWindow *)indexWindow;
-(char)switchedToIndexMode;
-(void)thumbnailDidLoad:(id)arg1 index:(unsigned long long)arg2 currentCount:(unsigned long long)arg3 ;
-(id)initWithSlideshow:(id)arg1 ;
-(void)switchToIndexMode:(id)arg1 currentIndex:(long long)arg2 ;
-(void)thumbnailDidRotate:(id)arg1 index:(unsigned long long)arg2 ;
-(char)thumbnailsFitOnScreen;
-(int)columns;
-(void)setThumbnailSize:(double)arg1 ;
-(void)itemCountChanged:(id)arg1 ;
-(void)setupResources;
-(void)calcThumbnailSize;
-(void)setSwitchedToIndexMode:(char)arg1 ;
-(void)setupLayers;
-(void)thumbnailsDidChange;
-(void)updateThumbnails;
-(void)setSelectedThumbnailIndex:(long long)arg1 ;
-(void)updateSelection:(char)arg1 ;
-(void)setThumbnailsFitOnScreen:(char)arg1 ;
-(void)setColumns:(int)arg1 ;
-(void)moveSelection:(int)arg1 :(int)arg2 ;
-(char)layerCanBeSelected:(id)arg1 ;
-(long long)selectedThumbnailIndex;
-(void)switchToSingleMode;
-(void)nextPage:(int)arg1 ;
-(void)selectLayer:(id)arg1 ;
-(unsigned long long)selectedThumbnail;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)itemCount;
-(id)contentLayer;
-(void)cleanup;
@end

