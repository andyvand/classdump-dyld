/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sparkle/SUWindowController.h>

@class SUAppcastItem, SUHost;

@interface SUAutomaticUpdateAlert : SUWindowController {

	SUAppcastItem* updateItem;
	id delegate;
	SUHost* host;

}
-(void)doNotInstall:(id)arg1 ;
-(void)installLater:(id)arg1 ;
-(void)installNow:(id)arg1 ;
-(id)initWithAppcastItem:(id)arg1 host:(id)arg2 delegate:(id)arg3 ;
-(id)descriptionText;
-(void)dealloc;
-(id)description;
-(id)applicationIcon;
-(id)titleText;
@end
