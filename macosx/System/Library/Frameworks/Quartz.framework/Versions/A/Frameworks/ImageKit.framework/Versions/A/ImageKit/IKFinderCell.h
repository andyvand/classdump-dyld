/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKIconCell.h>

@interface IKFinderCell : IKIconCell {

	short _canDrawPlaceholder;
	short _isMoreButton;

}
+(char)supportsHeightOfInfoSpaceFactorization;
+(char)shouldWrapLabelsForIconSize:(double)arg1 gridSpacing:(double)arg2 titlesOnRight:(char)arg3 ;
+(CGSize)cellSpacingForIconSize:(double)arg1 gridSpacing:(double)arg2 titlesOnRight:(char)arg3 ;
+(CGSize)cellSizeForIconSize:(double)arg1 maxIconSize:(double)arg2 gridSpacing:(double)arg3 textAttributes:(id)arg4 titlesOnRight:(char)arg5 showInfo:(char)arg6 ;
+(CGRect)anchoredBoundsOfPart:(int)arg1 iconSize:(double)arg2 gridSpacing:(double)arg3 labelAttributes:(id)arg4 titlesOnRight:(char)arg5 options:(id)arg6 ;
+(CGRect)anchoredBoundsForSettings:(id)arg1 ;
+(CGSize)cellSizeForIconSize:(double)arg1 gridSpacing:(double)arg2 textAttributes:(id)arg3 titlesOnRight:(char)arg4 showInfo:(char)arg5 ;
+(CGPoint)anchorPointWithView:(id)arg1 ;
+(id)moreButtonUID;
+(CGSize)cellSpacingForIconSize:(double)arg1 maxIconSize:(double)arg2 gridSpacing:(double)arg3 titlesOnRight:(char)arg4 ;
+(double)selectionRadiusForIconSize:(double)arg1 maxIconSize:(double)arg2 ;
+(CGRect)anchoredIconBoundsForIconSize:(double)arg1 ;
+(CGRect)anchoredCellBoundsForIconSize:(double)arg1 maxIconSize:(double)arg2 gridSpacing:(double)arg3 textAttributes:(id)arg4 titlesOnRight:(char)arg5 showInfo:(char)arg6 ;
+(CGRect)anchoredSelectionBoundsForIconSize:(double)arg1 maxIconSize:(double)arg2 ;
+(CGRect)anchoredLabelBoundsForIconSize:(double)arg1 maxIconSize:(double)arg2 gridSpacing:(double)arg3 textAttributes:(id)arg4 titlesOnRight:(char)arg5 showInfo:(char)arg6 ;
+(id)titleAttributeKeys;
+(CGRect)anchoredIconBoundsForIconSize:(double)arg1 aspectRatio:(double)arg2 ;
-(void)drawPlaceHolder;
-(CGRect)imageFrameForImageContainerFrame:(CGRect)arg1 ;
-(int)heightOfInfoSpace;
-(id)subtitleString;
-(CGRect)imageFrameForImageContainerFrame:(CGRect)arg1 useAspectRatio:(char)arg2 ;
-(SCD_Struct_IK11)usedRectInCellFrame:(SCD_Struct_IK11)arg1 ;
-(char)wantsRollover;
-(char)disableTwoLineTitles;
-(double)selectionRadius;
-(char)isMoreButton;
-(void)_drawMoreButton;
-(char)canDrawPlaceholder;
-(char)isSelectable;
-(void)drawSelection;
@end

