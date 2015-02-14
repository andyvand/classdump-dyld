/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ReaderActivationDelegate.h>
#import <Safari/ReaderAvailabilityDelegate.h>
#import <Safari/WBSFluidProgressStateSource.h>

@class NSString;

@interface BrowserContentViewControllerObjCAdapter : NSObject <ReaderActivationDelegate, ReaderAvailabilityDelegate, WBSFluidProgressStateSource> {

	BrowserContentViewController* _browserContentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBrowserContentViewController:(BrowserContentViewController*)arg1 ;
-(void)startObservingNotificationsThatMightDisplayRequestedSheet;
-(void)stopObservingNotificationsThatMightDisplayRequestedSheet;
-(void)_continueHTTPSConnectionWithIdentitySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_continueHTTPSConnectionSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_pickCertificateForAuthenticationChallengeSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_sheetRequestConditionsChanged:(id)arg1 ;
-(id)installationTargetForReaderController:(const ReaderController*)arg1 ;
-(char)readerControllerShouldActivateUponDeterminingAvailability:(const ReaderController*)arg1 ;
-(void)readerControllerWillActivate:(const ReaderController*)arg1 ;
-(void)readerControllerDidActivate:(const ReaderController*)arg1 ;
-(void)readerControllerWillDeactivate:(const ReaderController*)arg1 ;
-(void)readerControllerDidDeactivate:(const ReaderController*)arg1 ;
-(void)readerController:(const ReaderController*)arg1 didUpdateAvailability:(int)arg2 ;
-(void)readerControllerDidBecomeUnavailableUnexpectedly:(const ReaderController*)arg1 ;
-(char)createFluidProgressState;
-(void)clearFluidProgressState;
-(id)progressState;
-(id)expectedOrCurrentURL;
-(double)estimatedProgress;
-(char)hasFailedURL;
-(void)dealloc;
-(void)invalidate;
@end

