/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSSelfDestructingRemoteViewDelegate.h>
#import <ViewBridge/NSRendezvousWindowDelegate.h>

@interface NSRendezvousChildWindowDelegate : NSSelfDestructingRemoteViewDelegate <NSRendezvousWindowDelegate> {

	unsigned _isSettingValue : 1;

}

@property (readonly) char isSettingValue; 
-(char)isSettingValue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(id)arg4 ;
@end

