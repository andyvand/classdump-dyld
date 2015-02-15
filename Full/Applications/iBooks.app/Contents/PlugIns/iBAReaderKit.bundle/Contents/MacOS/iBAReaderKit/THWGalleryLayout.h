/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THWContainerLayout.h>
#import <iBAReaderKit/THWGalleryCaptionLayoutDelegate.h>
#import <iBAReaderKit/TSDLayoutGeometryProvider.h>
#import <iBAReaderKit/THWWidgetLayout.h>
#import <iBAReaderKit/THWControlContainerLayoutDelegate.h>
#import <iBAReaderKit/THWPagedCanvasControlLayoutDelegate.h>

@protocol THWWidgetLayoutDelegate;
@class THWPageControlLayout, THWPagedCanvasControlLayout, NSArray, THWGalleryCaptionLayout, NSString;

@interface THWGalleryLayout : THWContainerLayout <THWGalleryCaptionLayoutDelegate, TSDLayoutGeometryProvider, THWWidgetLayout, THWControlContainerLayoutDelegate, THWPagedCanvasControlLayoutDelegate> {

	id<THWWidgetLayoutDelegate> _delegate;
	double _stageCornerRadius;
	THWPageControlLayout* _pageControl;
	THWPageControlLayout* _thumbnailPageControl;
	THWPagedCanvasControlLayout* _thumbnailTrackCanvasLayout;
	NSArray* _stageInfos;
	NSArray* _imageInfos;
	NSArray* _thumbnailControlPages;
	NSArray* _thumbnailButtons;
	THWPagedCanvasControlLayout* _stageCanvasLayout;
	NSArray* _zoomableCanvasPages;
	NSArray* _zoomableCanvasControls;
	THWGalleryCaptionLayout* _captionLayout;
	CGRect _stageFrame;
	CGRect _thumbnailTrackFrame;
	CGRect _pageControlFrame;

}

@property (nonatomic,readonly) CGRect stageFrame;                                                            //@synthesize stageFrame=_stageFrame - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailTrackFrame;                                                   //@synthesize thumbnailTrackFrame=_thumbnailTrackFrame - In the implementation block
@property (nonatomic,readonly) double thumbnailTrackVerticalPadding; 
@property (nonatomic,readonly) CGRect pageControlFrame;                                                      //@synthesize pageControlFrame=_pageControlFrame - In the implementation block
@property (nonatomic,readonly) double stageCornerRadius;                                                     //@synthesize stageCornerRadius=_stageCornerRadius - In the implementation block
@property (nonatomic,retain,readonly) THWPageControlLayout * pageControl;                                    //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain,readonly) THWPageControlLayout * thumbnailPageControl;                           //@synthesize thumbnailPageControl=_thumbnailPageControl - In the implementation block
@property (nonatomic,readonly) char thumbnailsVisibleOnMainCanvas; 
@property (nonatomic,readonly) char thumbnailsVisibleInPanel; 
@property (nonatomic,readonly) char stageVisible; 
@property (nonatomic,readonly) char useZoom; 
@property (nonatomic,retain,readonly) THWPagedCanvasControlLayout * thumbnailTrackCanvasLayout;              //@synthesize thumbnailTrackCanvasLayout=_thumbnailTrackCanvasLayout - In the implementation block
@property (nonatomic,readonly) char individualCaptions; 
@property (nonatomic,retain) NSArray * stageInfos;                                                           //@synthesize stageInfos=_stageInfos - In the implementation block
@property (nonatomic,retain,readonly) NSArray * imageInfos;                                                  //@synthesize imageInfos=_imageInfos - In the implementation block
@property (nonatomic,retain,readonly) NSArray * thumbnailControlPages;                                       //@synthesize thumbnailControlPages=_thumbnailControlPages - In the implementation block
@property (nonatomic,retain,readonly) NSArray * thumbnailButtons;                                            //@synthesize thumbnailButtons=_thumbnailButtons - In the implementation block
@property (nonatomic,retain,readonly) THWPagedCanvasControlLayout * stageCanvasLayout;                       //@synthesize stageCanvasLayout=_stageCanvasLayout - In the implementation block
@property (nonatomic,retain,readonly) NSArray * zoomableCanvasPages;                                         //@synthesize zoomableCanvasPages=_zoomableCanvasPages - In the implementation block
@property (nonatomic,retain,readonly) NSArray * zoomableCanvasControls;                                      //@synthesize zoomableCanvasControls=_zoomableCanvasControls - In the implementation block
@property (nonatomic,retain,readonly) THWGalleryCaptionLayout * captionLayout;                               //@synthesize captionLayout=_captionLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isExpanded; 
@property (assign,nonatomic) id<THWWidgetLayoutDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)p_thumbnailPageIndexForItemIndex:(unsigned long long)arg1 ;
-(CGRect)pageControlFrame;
-(id)captionStorageForItemIndex:(unsigned long long)arg1 ;
-(id)colorFromTitle;
-(unsigned long long)p_thumbnailCountForThumbnailPageIndex:(unsigned long long)arg1 ;
-(NSArray *)zoomableCanvasControls;
-(char)thumbnailsVisibleOnMainCanvas;
-(THWPagedCanvasControlLayout *)thumbnailTrackCanvasLayout;
-(NSArray *)stageInfos;
-(NSArray *)thumbnailControlPages;
-(THWPagedCanvasControlLayout *)stageCanvasLayout;
-(NSArray *)zoomableCanvasPages;
-(THWGalleryCaptionLayout *)captionLayout;
-(NSArray *)thumbnailButtons;
-(void)updateChildrenFromInfo;
-(id)layoutGeometryForLayout:(id)arg1 ;
-(char)p_thumbnailsVisible;
-(unsigned long long)p_maxNumberOfThumbnailsPerPage;
-(unsigned long long)p_numberOfThumbnailPagesAndThumbnailsPerPage:(unsigned long long*)arg1 ;
-(id)p_sharedCaptionStorage;
-(id)p_captionStorageForItemIndex:(unsigned long long)arg1 ;
-(char)individualCaptions;
-(id)sharedCaptionStorage;
-(char)thumbnailsVisibleInPanel;
-(void)p_updatePagesAndThumbnailLayouts;
-(id)layoutGeometryFromProvider;
-(id)computeLayoutGeometry;
-(char)p_thumbnailsVisibleOnMainCanvas;
-(unsigned long long)numberOfThumbnailTrackPages;
-(id)p_itemFromChildLayout:(id)arg1 ;
-(double)thumbnailTrackVerticalPadding;
-(id)p_nonEmptyCaptionStorage;
-(char)p_thumbnailsVisibleInPanel;
-(id)currentCaptionStorage;
-(id)childInfosForLayout;
-(id)additionalLayouts;
-(id)controlContainerAdditionalChildLayouts:(id)arg1 ;
-(double)stageCornerRadius;
-(void)updateCurrentItemIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfStagePages;
-(id)infosForStagePages:(NSRange)arg1 ;
-(id)infosForThumbnailTrackPages:(NSRange)arg1 ;
-(unsigned long long)thumbnailPageIndexForItemIndex:(unsigned long long)arg1 ;
-(THWPageControlLayout *)thumbnailPageControl;
-(CGRect)thumbnailTrackFrame;
-(id)pageIndexesFromStageReps:(id)arg1 ;
-(double)zoomableItemMinimumViewScaleForItem:(id)arg1 ;
-(char)expandedHasContentForPanel:(int)arg1 ;
-(CGSize)thumbnailTrackSizeWithPanelWidth:(double)arg1 ;
-(id)thumbnailTrackAdditionalLayoutsInExpandedPanel:(int)arg1 ;
-(double)expandedLeftRightInsetForCaption;
-(CTFontRef)createFontFromCaption;
-(id)colorFromCaption;
-(id)thumbnailBorderColor;
-(CGSize)zoomableCanvasSizeForItem:(id)arg1 ;
-(id)zoomableCanvasControlLayoutForItemIndex:(unsigned long long)arg1 ;
-(void)pagedCanvasControlLayoutDidValidate:(id)arg1 ;
-(CGPoint)galleryCaptionPosition;
-(double)galleryCaptionMargin;
-(double)galleryCaptionWidth;
-(id)galleryCaptionStorage;
-(id)dependentLayouts;
-(id)p_itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_indexForItem:(id)arg1 ;
-(double)p_margin;
-(double)p_widgetWidth;
-(void)p_updateCaption;
-(void)setStageInfos:(NSArray *)arg1 ;
-(CGSize)p_thumbnailSize;
-(char)useZoom;
-(CGRect)stageFrame;
-(THWPageControlLayout *)pageControl;
-(char)stageVisible;
-(NSArray *)imageInfos;
-(void)setDelegate:(id<THWWidgetLayoutDelegate>)arg1 ;
-(void)dealloc;
-(id<THWWidgetLayoutDelegate>)delegate;
-(char)isExpanded;
@end
