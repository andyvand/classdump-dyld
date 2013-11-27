/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <WebContentAnalysis/WFPINEntryViewControllerProtocol.h>

@class _UIFallbackPresentationViewController, NSArray, UIViewController, WFRemotePINEntryViewController, NSURL, NSString;

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol> {

	_UIFallbackPresentationViewController* _fallbackPresentationVC;
	NSArray* _windowsWithDisabledRotation;
	UIViewController* _rootViewControllerToUse;
	WFRemotePINEntryViewController* _remoteViewController;
	NSURL* _URL;
	NSString* _pageTitle;
	/*^block*/ id _completion;
	/*^block*/ id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
+(Class)remoteViewControllerClass;
+(id)serviceViewControllerClassName;
-(void)dealloc;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(unsigned)_supportedInterfaceOrientationsForRootViewController;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(/*^block*/ id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(/*^block*/ id)arg1 ;
-(void)userDidCancel;
-(void)insertRemoteViewController:(id)arg1 ;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)presentViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)userEnteredCorrectPIN;
-(BOOL)hasUIWebViewSubView:(id)arg1 ;
@end
