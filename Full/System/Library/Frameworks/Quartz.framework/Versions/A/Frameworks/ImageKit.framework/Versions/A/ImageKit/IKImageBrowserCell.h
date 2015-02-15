/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKImageBrowserCell : NSObject {

	id _parent;
	void* _ibCellReserved;

}
+(char)aCellIsPlayingInView:(id)arg1 ;
+(CGPoint)anchorPointTranslationWithView:(id)arg1 ;
+(void)stopCurrentPlayerIfAny;
+(char)supportsHeightOfInfoSpaceFactorization;
+(CGPoint)anchorPointForCellFrame:(CGRect)arg1 withView:(id)arg2 ;
+(char)shouldWrapLabelsForIconSize:(double)arg1 gridSpacing:(double)arg2 titlesOnRight:(char)arg3 ;
+(void)temporaryPauseCurrentPlayingMovieIfAny:(id)arg1 ;
-(char)hidden;
-(double)baseline;
-(void)drawPlaceHolder;
-(void)setPrivateAnimationMask:(unsigned)arg1 ;
-(void)drawDragHighlight;
-(void)drawOverlays;
-(CGRect)reflectionFrame;
-(void)drawWithComponentMask:(int)arg1 ;
-(int)_heightOfFixedSizeSpace;
-(void)imageDidChange;
-(void)didImport;
-(CGRect)imageFrame;
-(id)playerView;
-(float)_computeAspectRatio;
-(int)contentMode;
-(CGSize)imageSizeForCellSize:(CGSize)arg1 withAspectRatio:(float)arg2 ;
-(char)showPlayerControls;
-(CGRect)imageFrameForImageContainerFrame:(CGRect)arg1 ;
-(CGRect)imageContainerFrame;
-(CGRect)playerFrame;
-(void)positionDidChange;
-(void)sizeDidChange;
-(int)heightOfInfoSpace;
-(void)_computeImageFrame;
-(void)setLayoutValid:(char)arg1 ;
-(CGRect)selectionFrame;
-(CGRect)imageBorderFrame;
-(CGRect)titleFrame;
-(id)imageBrowserView;
-(void)stopPlay;
-(id)representedItem;
-(char)_transform:(CATransform3D*)arg1 forLayer:(id)arg2 inFrame:(CGRect)arg3 ;
-(id)layerForType:(id)arg1 ;
-(CGRect)roundedFrame;
-(void)renderLayer:(id)arg1 inFrame:(CGRect)arg2 ;
-(CGRect)playButtonFrame;
-(char)_playerViewHasPlayControls;
-(CGRect)imageSourceRectForImage:(id)arg1 ;
-(void)drawPlayerControl;
-(CGSize)_getTitleSize;
-(id)currentTitleAttributes;
-(double)roundedWidthForCenterAlignment:(double)arg1 ;
-(void)drawTitleBackground;
-(CGRect)titleStringFrame;
-(void)drawSelectionOnTitle;
-(CGRect)subtitleFrame;
-(CGSize)_virtualImageFrameSizeForSizeToFill:(CGSize)arg1 ;
-(int)_sizeToDraw;
-(void)drawShadow;
-(void)drawImage:(id)arg1 ;
-(void)drawImageOutline;
-(void)drawTitle;
-(void)drawSubtitle;
-(void)unpauseMovie;
-(void)temporaryPauseMovie;
-(void)startPlay;
-(char)titleIsTruncated;
-(unsigned long long)indexOfRepresentedItem;
-(char)_isFirstPageOfBookletStyle;
-(char)_redisplayOnRollover;
-(void)invalidateTitleSize;
-(char)cachedTitleSizeIsValid;
-(CGRect)imageFrameForImageContainerFrame:(CGRect)arg1 useAspectRatio:(char)arg2 ;
-(CGRect)imageFrameForCellFrame:(CGRect)arg1 ;
-(void)centerToPosition:(CGPoint)arg1 ;
-(CGRect)inlinePreviewFrame;
-(char)isLayoutValid;
-(void)invalidateTitle;
-(SCD_Struct_IK11)usedRectInCellFrame:(SCD_Struct_IK11)arg1 ;
-(char)acceptsDrop;
-(char)hitTestWithPoint:(CGPoint)arg1 ;
-(char)hitTestWithRect:(CGRect)arg1 ;
-(id)typeSelectString;
-(CGRect)_iconFrameForCellFrameSize:(CGSize)arg1 ;
-(char)canBeDoubleClicked;
-(char)isBlinking;
-(void)setBlinking:(char)arg1 ;
-(void)willBeRemovedFromView;
-(void)datasourceItemDidChange;
-(void)didRecoverImageFromCache;
-(char)contentCanBePlayed;
-(int)cellState;
-(void)setImageBrowserView:(id)arg1 ;
-(char)reordering;
-(void)setReordering:(char)arg1 ;
-(unsigned)privateAnimationMask;
-(char)mouseDown:(CGPoint)arg1 inView:(id)arg2 ;
-(void)installToolTips;
-(char)wantsRollover;
-(char)isMouseOver;
-(void)drawBackground;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(CGPoint)position;
-(CGRect)frame;
-(void)setHidden:(char)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)draw;
-(void)setBrowser:(id)arg1 ;
-(id)browser;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
-(float)aspectRatio;
-(char)isSelectable;
-(float)rotation;
-(unsigned long long)imageAlignment;
-(char)isSelected;
-(void)setParent:(id)arg1 ;
-(void)setRotation:(float)arg1 ;
-(char)isPlaying;
-(void)setSelected:(char)arg1 ;
-(void)drawSelection;
-(void)invalidateLayout;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(unsigned long long)fileSize;
-(void)setGroup:(id)arg1 ;
-(void)parentWillDie:(id)arg1 ;
-(double)opacity;
@end

