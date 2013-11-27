/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Maps/SettingsTopBarDelegate.h>

@protocol SettingsViewControllerPhoneDelegate;
@class , UIView, SettingsTopBar, UITableView, BlurView;

@interface SettingsViewControllerPhone : UIViewController <SettingsTopBarDelegate> {

	<SettingsViewControllerPhoneDelegate>* _delegate;
	UIView* _dimmingView;
	SettingsTopBar* _settingsTopBar;
	UITableView* _tableView;
	BlurView* _blurView;

}

@property (assign,nonatomic) <SettingsViewControllerPhoneDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) <MapsChromeTopBarContent> * topBar; 
-(void)_dismissSettings:(id)arg1 ;
-(void)settingsTopBarDidRequestDismissSettings:(id)arg1 ;
-(void)dismissSettingsAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)presentSettings;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)_dimmingView;
-(id)initWithTableViewController:(id)arg1 ;
-(id)topBar;
@end
