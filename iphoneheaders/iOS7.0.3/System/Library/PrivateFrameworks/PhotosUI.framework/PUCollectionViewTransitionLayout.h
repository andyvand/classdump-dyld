/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UICollectionViewLayout, NSDictionary;

@interface PUCollectionViewTransitionLayout : UICollectionViewLayout {

	UICollectionViewLayout* __fromLayout;
	UICollectionViewLayout* __toLayout;
	NSDictionary* __indexPathsToAttributes;

}

@property (setter=_setFromLayout:,nonatomic,retain) UICollectionViewLayout * _fromLayout;                            //@synthesize _fromLayout=__fromLayout - In the implementation block
@property (setter=_setToLayout:,nonatomic,retain) UICollectionViewLayout * _toLayout;                                //@synthesize _toLayout=__toLayout - In the implementation block
@property (setter=_setIndexPathsToAttributes:,nonatomic,retain) NSDictionary * _indexPathsToAttributes;              //@synthesize _indexPathsToAttributes=__indexPathsToAttributes - In the implementation block
+(Class)layoutAttributesClass;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)_fromLayout;
-(id)_toLayout;
-(id)initWithFromLayout:(id)arg1 toLayout:(id)arg2 indexPathsToAttributes:(id)arg3 ;
-(id)initWithFromLayout:(id)arg1 indexPathsToAttributes:(id)arg2 ;
-(void)_setFromLayout:(id)arg1 ;
-(void)_setToLayout:(id)arg1 ;
-(id)_indexPathsToAttributes;
-(void)_setIndexPathsToAttributes:(id)arg1 ;
-(void).cxx_destruct;
@end
