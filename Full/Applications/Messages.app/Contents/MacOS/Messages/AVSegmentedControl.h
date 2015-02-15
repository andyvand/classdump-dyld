/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSSegmentedControl.h>
#import <Messages/NSMenuDelegate.h>

@class NSMenu, Account, NSString;

@interface AVSegmentedControl : NSSegmentedControl <NSMenuDelegate> {

	id _avSegmentedControlTarget;
	NSMenu* _addBuddyMenu;
	char _menuIsValid;
	char _registered;
	Account* _account;
	char _muted;
	char _paused;
	char _muteAllowed;
	char _pauseAllowed;
	char _showingPause;
	char _shouldShowPause;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(void)setMuteAllowed:(char)arg1 ;
-(void)setPauseAllowed:(char)arg1 ;
-(void)setAddEnabled:(char)arg1 ;
-(void)setAddTooltip:(id)arg1 ;
-(char)isMuteAllowed;
-(char)isPauseAllowed;
-(void)_personSelected:(id)arg1 ;
-(void)_addItemForEmptyList;
-(long long)segmentForTag:(long long)arg1 ;
-(void)_showMuteUI;
-(void)selfAction:(id)arg1 ;
-(void)_configureButtons;
-(void)_showPauseUI;
-(void)_sendActionForSegmentType:(int)arg1 ;
-(void)invalidateAddMenu;
-(void)_addItemForAccount:(id)arg1 atIndex:(int*)arg2 ;
-(void)_addItemForIMHandle:(id)arg1 toMenu:(id)arg2 atIndex:(int)arg3 showingDetails:(char)arg4 ;
-(void)_rebuildMenuIfNecessary;
-(char)isAddEnabled;
-(void)setFullScreenEnabled:(char)arg1 ;
-(void)_registerForNotifications;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(void)_flagsChanged:(id)arg1 ;
-(void)dealloc;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)awakeFromNib;
-(void)menuWillOpen:(id)arg1 ;
-(char)isPaused;
-(void)setPaused:(char)arg1 ;
-(void)setActionTarget:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
@end
