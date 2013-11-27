/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMailComposeViewController.h>
#import <MobileSafari/BrowserPanel.h>
#import <UIKit/UINavigationControllerDelegate.h>

@interface BrowserMailComposeViewController : MFMailComposeViewController <BrowserPanel, UINavigationControllerDelegate>
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)shouldHideOnSuspend;
-(BOOL)shouldShowButtonBar;
-(id)initWithURL:(id)arg1 mailComposeDelegate:(id)arg2 ;
-(void)applicationDidResume;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end
