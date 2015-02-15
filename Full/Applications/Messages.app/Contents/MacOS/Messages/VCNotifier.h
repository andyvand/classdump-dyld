/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/Notifier.h>

@class NSDictionary, AVChatController, AVParticipantView;

@interface VCNotifier : Notifier {

	NSDictionary* _vcProperties;
	AVChatController* _avChatController;
	AVParticipantView* _bannerView;
	char _audioOnly;
	char _oneWay;
	char _ardClient;
	char _ardServer;

}
+(void)openOnIncomingVC:(id)arg1 ;
+(void)openOnIncomingARDUpgradeRequest:(id)arg1 ;
+(void)cleanUpOldNotifiersFrom:(id)arg1 ;
-(CGAffineTransform)_xformForFloaterScale:(double)arg1 ;
-(void)floaterBecomingVisible;
-(char)canShowRealWindow;
-(char)canHideRealWindow;
-(void)closeDownShop:(char)arg1 ;
-(id)menuItemFormat;
-(char)isActiveNotification;
-(void)doVCTextReplyWithChat:(id)arg1 ;
-(void)updateBanner;
-(char)_makeRealVCNotifierWindow;
-(void)_makeVCFloaterWindow;
-(id)accessibilityFormat;
-(id)initForAVChat:(id)arg1 ;
-(id)_initForARDUpgradeRequest:(id)arg1 ;
-(id)initForPersistentVCWithIMHandle:(id)arg1 isVideo:(char)arg2 isOneWay:(char)arg3 ;
-(id)avChatController;
-(void)setBannerTitle:(id)arg1 ;
-(void)showTimeStamp;
-(id)bannerView;
-(char)isStale;
-(void)disconnect;
-(void)dealloc;
-(id)callerProperties;
@end
