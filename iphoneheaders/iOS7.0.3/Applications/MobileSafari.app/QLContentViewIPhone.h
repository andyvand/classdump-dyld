/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/QLContentView.h>
#import <UIKit/UIToolbarDelegate.h>

@class QLDocumentInfoView, QuickLookBannerView;

@interface QLContentViewIPhone : UIView <QLContentView, UIToolbarDelegate> {

	QLDocumentInfoView* _documentInfoView;
	QuickLookBannerView* _bannerView;

}
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(void)hideBanner;
-(id)initWithFrame:(CGRect)arg1 quickLookBannerViewDelegate:(id)arg2 ;
-(void)showBanner;
-(void)dealloc;
-(void)layoutSubviews;
-(int)positionForBar:(id)arg1 ;
@end
