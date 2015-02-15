/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:06:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Disk Utility.app/Contents/Frameworks/DUSupport.framework/DUSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DUPluginProtocol
@required
-(char)shouldRunOnThisConfig;
-(void)resetDM;
-(id)tabOrder;
-(id)parentTabViewItem;
-(void)parentTabViewChanged:(id)arg1;
-(char)currentActiveTab;
-(void)selectionDidChange:(id)arg1;
-(void)becomeSelectedTab;
-(void)deselectTab;
-(id)diskController;
-(void)moduleDidLoad;
-(id)dm;
-(id)parentTabView;
-(id)utilityView;
-(void)setParentTabView:(id)arg1;
-(void)setParentTabViewItem:(id)arg1;
-(void)setActiveTab;
-(id)warnOnClose;
-(id)warnOnQuit;
-(id)warnOnSwitch;
-(void)printModuleSpecific:(id)arg1;
-(void)setupModule:(id)arg1;
-(char)canPrint;
-(void)registerForNotifications;
-(id)dataType;
-(id)windowController;
-(void)setWindowController:(id)arg1;
-(id)displayName;
-(void)helpButtonAction:(id)arg1;

@end
