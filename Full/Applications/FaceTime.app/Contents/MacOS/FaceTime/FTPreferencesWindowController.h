/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:31:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSView, FTPreferencesAccountController;

@interface FTPreferencesWindowController : NSWindowController {

	NSView* _accountPlaceholderView;
	FTPreferencesAccountController* _accountViewController;

}

@property (assign,nonatomic,__weak) NSView * accountPlaceholderView;                              //@synthesize accountPlaceholderView=_accountPlaceholderView - In the implementation block
@property (nonatomic,retain) FTPreferencesAccountController * accountViewController;              //@synthesize accountViewController=_accountViewController - In the implementation block
-(NSView *)accountPlaceholderView;
-(void)setAccountPlaceholderView:(NSView *)arg1 ;
-(FTPreferencesAccountController *)accountViewController;
-(void)setAccountViewController:(FTPreferencesAccountController *)arg1 ;
-(id)init;
-(id)initWithWindow:(id)arg1 ;
-(void)windowDidLoad;
@end
