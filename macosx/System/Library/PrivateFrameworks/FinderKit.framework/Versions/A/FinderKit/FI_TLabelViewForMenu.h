/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TLabelView.h>

@interface FI_TLabelViewForMenu : FI_TLabelView {

	TNSRef<FI_TTitleField *> _titleField;

}
+(id)labelViewForMenu:(id)arg1 showTitle:(BOOL)arg2 ;
+(id)labelViewForMenu:(id)arg1 ;
+(id)labelViewFromMenuItem:(id)arg1 ;
+(id)titleFieldFromMenuItem:(id)arg1 ;
-(void)setForApplyingTags:(BOOL)arg1 ;
-(void)gumdropValueChangedInMenu:(id)arg1 ;
-(void)gumdropFavoriteTagChosenInMenu:(id)arg1 ;
-(BOOL)favoriteTagWillRemove:(short)arg1 ;
@end

