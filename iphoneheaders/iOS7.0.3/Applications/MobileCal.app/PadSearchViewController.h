/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/PopoverContentView.h>

@class PadSearchViewContainedController, UINavigationController, UIToolbar;

@interface PadSearchViewController : UIViewController <PopoverContentView> {

	PadSearchViewContainedController* _containedController;
	UINavigationController* _embeddedNavigationController;
	UIToolbar* _toolbar;

}

@property (nonatomic,retain) PadSearchViewContainedController * containedController;              //@synthesize containedController=_containedController - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;               //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                                 //@synthesize toolbar=_toolbar - In the implementation block
-(void)setEmbeddedNavigationController:(id)arg1 ;
-(id)embeddedNavigationController;
-(void)todayPressed;
-(void)clearSearchString;
-(id)initWithModel:(id)arg1 doneBlock:(/*^block*/ id)arg2 ;
-(id)containedController;
-(void)setContainedController:(id)arg1 ;
-(void)loadView;
-(id)toolbar;
-(void)setToolbar:(id)arg1 ;
-(BOOL)canDismiss;
-(id)_searchBar;
-(void).cxx_destruct;
@end
