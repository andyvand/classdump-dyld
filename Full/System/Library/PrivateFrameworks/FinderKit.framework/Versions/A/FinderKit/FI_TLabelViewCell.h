/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSLabelViewCell.h>

@interface FI_TLabelViewCell : NSLabelViewCell {

	unsigned long long _whichFavoriteTagsWillRemove;
	BOOL _forApplyingTags;

}

@property (assign,nonatomic) unsigned long long whichFavoriteTagsWillRemove;              //@synthesize whichFavoriteTagsWillRemove=_whichFavoriteTagsWillRemove - In the implementation block
@property (assign,nonatomic) BOOL forApplyingTags;                                        //@synthesize forApplyingTags=_forApplyingTags - In the implementation block
-(void)setSelectedFavoriteTags:(unsigned long long)arg1 ;
-(unsigned long long)selectedFavoriteTags;
-(long long)favoriteValue;
-(void)setWhichFavoriteTagsWillRemove:(unsigned long long)arg1 ;
-(unsigned long long)whichFavoriteTagsWillRemove;
-(void)setForApplyingTags:(BOOL)arg1 ;
-(BOOL)partWillRemoveATag:(long long)arg1 ;
-(void)drawBackgroundForPart:(long long)arg1 rect:(CGRect)arg2 ;
-(void)drawAnXInRect:(CGRect)arg1 ;
-(BOOL)forApplyingTags;
-(CGRect)part:(long long)arg1 boundsWithFrame:(CGRect)arg2 ;
-(id)_nameForLabelPart:(long long)arg1 ;
-(void)_drawPart:(long long)arg1 withFrame:(CGRect)arg2 ;
-(CGRect)_boundsForLabel:(id)arg1 withFrame:(CGRect)arg2 ;
-(long long)_partAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 ;
@end

