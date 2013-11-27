/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKRemoteViewController.h>
#import <GameCenterUI/SignInServiceViewControllerDelegate.h>

@class GKGame;

@interface GKRemoteSignInViewController : GKRemoteViewController <SignInServiceViewControllerDelegate>

@property (nonatomic,retain) GKGame * game; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)remoteViewControllerIsCanceling;
-(BOOL)serviceNeedsLocalPlayer;
-(void)populateInitialStateForRemoteView:(id)arg1 ;
@end
