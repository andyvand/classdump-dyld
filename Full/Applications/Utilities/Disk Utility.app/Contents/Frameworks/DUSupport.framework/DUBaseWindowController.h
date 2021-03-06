/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:06:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Disk Utility.app/Contents/Frameworks/DUSupport.framework/DUSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <DUSupport/DUWindowControllerProtocol.h>

@class DUDiskController, NSString;

@interface DUBaseWindowController : NSWindowController <DUWindowControllerProtocol> {

	char interfaceLock;
	unsigned powerAssertion;
	DUDiskController* diskController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)interfaceLock;
-(id)diskController;
-(id)warnOnClose;
-(id)warnOnQuit;
-(id)warnOnSwitch;
-(void)printModuleSpecific:(id)arg1 ;
-(void)setGlobalProgressBarValue:(double)arg1 ;
-(void)activateGlobalProgressBar:(char)arg1 ;
-(void)setInterfaceLock;
-(void)resetInterfaceLock;
-(void)setGlobalPersistentMessageText:(id)arg1 ;
-(id)selectedVolumes;
-(id)selectedRAIDs;
-(id)allSelectedItems;
-(id)allSelectedItems:(char)arg1 filterDuplicates:(char)arg2 ;
-(id)globalProgressBar;
-(void)setGlobalProgressText:(id)arg1 ;
-(void)setGlobalProgressBarIndeterminate:(char)arg1 ;
-(void)startGlobalProgressBarAnimation:(id)arg1 ;
-(void)stopGlobalProgressBarAnimation:(id)arg1 ;
-(void)activateGlobalProgressText:(char)arg1 ;
-(void)setGlobalPersistentAttributedMessageText:(id)arg1 ;
-(char)globalTextPersistent;
-(void)forceUpdateWindow:(id)arg1 ;
-(void)notifyWindowOfEvent:(id)arg1 diskNotification:(id)arg2 ;
-(void)notifyWindowOfCompletion:(id)arg1 ;
-(id)listController;
-(void)handleContextualMenu:(id)arg1 ;
-(id)activeDUModule;
-(void)stuffChanged:(id)arg1 ;
-(void)interfaceLockChanged:(id)arg1 ;
-(void)handleQuitWarning:(id)arg1 ;
-(void)resizeWindowForSmallDisplaysWithHeight:(double)arg1 withWidth:(double)arg2 ;
-(void)setupNotifications:(id)arg1 ;
-(void)windowIsClosing:(id)arg1 ;
-(void)dmToolDied:(id)arg1 ;
-(char)canPrint;
-(id)selectedDisks;
-(void)dealloc;
-(char)windowShouldClose:(id)arg1 ;
@end

