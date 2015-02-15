/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/Banner.h>

@class RolloverImageButton;

@interface PrivateBrowsingExplanationBanner : Banner {

	RolloverImageButton* _closeButton;

}

@property (assign,nonatomic,__weak) RolloverImageButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
+(int)bannerSortOrder;
-(id)bannerNibName;
-(id)initWithContentViewController:(SearchableWebContentViewController*)arg1 ;
-(void)setCloseButton:(RolloverImageButton *)arg1 ;
-(RolloverImageButton *)closeButton;
@end
