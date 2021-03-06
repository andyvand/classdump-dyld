/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/Banner.h>

@class ButtonWithFontSmoothing, RolloverImageButton;

@interface DefaultBrowserBanner : Banner {

	ButtonWithFontSmoothing* _useSafariAsDefaultButton;
	RolloverImageButton* _closeButton;

}

@property (assign,nonatomic,__weak) ButtonWithFontSmoothing * useSafariAsDefaultButton;              //@synthesize useSafariAsDefaultButton=_useSafariAsDefaultButton - In the implementation block
@property (assign,nonatomic,__weak) RolloverImageButton * closeButton;                               //@synthesize closeButton=_closeButton - In the implementation block
+(int)bannerSortOrder;
-(id)bannerNibName;
-(id)initWithContentViewController:(SearchableWebContentViewControllerRef)arg1 ;
-(void)_setSafariAsDefaultBrowser:(id)arg1 ;
-(ButtonWithFontSmoothing *)useSafariAsDefaultButton;
-(void)setUseSafariAsDefaultButton:(ButtonWithFontSmoothing *)arg1 ;
-(void)setCloseButton:(RolloverImageButton *)arg1 ;
-(RolloverImageButton *)closeButton;
@end

