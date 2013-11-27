/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView {

	float _reflectionHeight;
	float _spacing;
	float _reflectionAlpha;
	BOOL _useImageSize;
	unsigned _nonSquareImage : 1;
	UIImageView* _imageView;
	SUReflectionView* _reflection;

}

@property (assign,nonatomic) float reflectionSpacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) BOOL nonSquareImage; 
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)initWithReflectionHeight:(float)arg1 spacing:(float)arg2 ;
-(BOOL)nonSquareImage;
-(void)setNonSquareImage:(BOOL)arg1 ;
-(void)setReflectionAlphaWhenVisible:(float)arg1 ;
-(void)setReflectionVisible:(BOOL)arg1 ;
-(void)setUseImageSize:(BOOL)arg1 ;
-(float)reflectionSpacing;
-(void)setReflectionSpacing:(float)arg1 ;
@end
