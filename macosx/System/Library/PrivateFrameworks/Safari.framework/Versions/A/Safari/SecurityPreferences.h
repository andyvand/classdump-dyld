/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/PreferencesModule.h>

@class NSTimer, NSView, NSButton, NSTextField, NSLayoutConstraint, ManagedPlugInsEditor, ManagedWebGLPoliciesEditor;

@interface SecurityPreferences : PreferencesModule {

	char _handlingChangedDefaults;
	char _didUpdateAntiPhishingStatus;
	unique_ptr<Safari::ObjCNotifier, std::__1::default_delete<Safari::ObjCNotifier> >* _notifier;
	RefPtr<SafeBrowsingLastUpdateObserver>* _lastUpdateObserver;
	NSTimer* _statusUpdateTimer;
	NSView* _mainContentView;
	NSButton* _javaScriptEnabledCheckbox;
	NSButton* _blockPopUpsCheckbox;
	NSButton* _allowPluginsCheckbox;
	NSButton* _allowWebGLCheckbox;
	NSButton* _antiPhishingCheckbox;
	NSTextField* _antiPhishingStatusLabel;
	NSView* _antiPhishingWarningView;
	NSLayoutConstraint* _antiPhishingWarningViewLeadingAlignmentConstraint;
	NSLayoutConstraint* _antiPhishingWarningViewTrailingHorizontalSpacingConstraint;
	NSLayoutConstraint* _antiPhishingWarningViewTopVerticalSpacingConstraint;
	NSLayoutConstraint* _antiPhishingWarningViewBottomVerticalSpacingConstraint;
	ManagedPlugInsEditor* _managedPlugInsEditor;
	NSButton* _managePlugInsBlockingButton;
	ManagedWebGLPoliciesEditor* _managedWebGLPoliciesEditor;
	NSButton* _manageWebGLPoliciesButton;

}

@property (assign,nonatomic,__weak) NSView * mainContentView;                                                              //@synthesize mainContentView=_mainContentView - In the implementation block
@property (assign,nonatomic,__weak) NSButton * javaScriptEnabledCheckbox;                                                  //@synthesize javaScriptEnabledCheckbox=_javaScriptEnabledCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * blockPopUpsCheckbox;                                                        //@synthesize blockPopUpsCheckbox=_blockPopUpsCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * allowPluginsCheckbox;                                                       //@synthesize allowPluginsCheckbox=_allowPluginsCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * allowWebGLCheckbox;                                                         //@synthesize allowWebGLCheckbox=_allowWebGLCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * antiPhishingCheckbox;                                                       //@synthesize antiPhishingCheckbox=_antiPhishingCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * antiPhishingStatusLabel;                                                 //@synthesize antiPhishingStatusLabel=_antiPhishingStatusLabel - In the implementation block
@property (nonatomic,retain) NSView * antiPhishingWarningView;                                                             //@synthesize antiPhishingWarningView=_antiPhishingWarningView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * antiPhishingWarningViewLeadingAlignmentConstraint;                       //@synthesize antiPhishingWarningViewLeadingAlignmentConstraint=_antiPhishingWarningViewLeadingAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * antiPhishingWarningViewTrailingHorizontalSpacingConstraint;              //@synthesize antiPhishingWarningViewTrailingHorizontalSpacingConstraint=_antiPhishingWarningViewTrailingHorizontalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * antiPhishingWarningViewTopVerticalSpacingConstraint;                     //@synthesize antiPhishingWarningViewTopVerticalSpacingConstraint=_antiPhishingWarningViewTopVerticalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * antiPhishingWarningViewBottomVerticalSpacingConstraint;                  //@synthesize antiPhishingWarningViewBottomVerticalSpacingConstraint=_antiPhishingWarningViewBottomVerticalSpacingConstraint - In the implementation block
@property (nonatomic,retain) ManagedPlugInsEditor * managedPlugInsEditor;                                                  //@synthesize managedPlugInsEditor=_managedPlugInsEditor - In the implementation block
@property (assign,nonatomic,__weak) NSButton * managePlugInsBlockingButton;                                                //@synthesize managePlugInsBlockingButton=_managePlugInsBlockingButton - In the implementation block
@property (nonatomic,retain) ManagedWebGLPoliciesEditor * managedWebGLPoliciesEditor;                                      //@synthesize managedWebGLPoliciesEditor=_managedWebGLPoliciesEditor - In the implementation block
@property (assign,nonatomic,__weak) NSButton * manageWebGLPoliciesButton;                                                  //@synthesize manageWebGLPoliciesButton=_manageWebGLPoliciesButton - In the implementation block
-(NSView *)mainContentView;
-(void)_defaultsChanged:(id)arg1 ;
-(void)setMainContentView:(NSView *)arg1 ;
-(void)_hideAntiPhishingStatus;
-(void)_updateEverything;
-(void)_antiPhishingServiceUpdated:(id)arg1 ;
-(void)_updateAntiPhishingViews;
-(void)_updateJavaScriptViews;
-(id)_approximateTimeStringForDuration:(double)arg1 ;
-(void)_showAntiPhishingStatus;
-(void)_lastSuccessfulUpdateTimeForService:(id)arg1 lastUpdate:(double)arg2 ;
-(SafeBrowsingLastUpdateObserver*)_lastUpdateObserver;
-(id)_antiPhishingStatusConstraints;
-(void)_updatePlugInsViews;
-(void)toggleAntiPhishingEnabled:(id)arg1 ;
-(void)toggleJavaScriptEnabled:(id)arg1 ;
-(void)toggleJavaScriptCanOpenWindows:(id)arg1 ;
-(void)togglePluginsAllowed:(id)arg1 ;
-(void)showManagedPlugInsDetails:(id)arg1 ;
-(void)toggleWebGLAllowed:(id)arg1 ;
-(void)showManagedWebGLPoliciesDetails:(id)arg1 ;
-(NSButton *)javaScriptEnabledCheckbox;
-(void)setJavaScriptEnabledCheckbox:(NSButton *)arg1 ;
-(NSButton *)blockPopUpsCheckbox;
-(void)setBlockPopUpsCheckbox:(NSButton *)arg1 ;
-(NSButton *)allowPluginsCheckbox;
-(void)setAllowPluginsCheckbox:(NSButton *)arg1 ;
-(NSButton *)allowWebGLCheckbox;
-(void)setAllowWebGLCheckbox:(NSButton *)arg1 ;
-(NSButton *)antiPhishingCheckbox;
-(void)setAntiPhishingCheckbox:(NSButton *)arg1 ;
-(NSTextField *)antiPhishingStatusLabel;
-(void)setAntiPhishingStatusLabel:(NSTextField *)arg1 ;
-(NSView *)antiPhishingWarningView;
-(void)setAntiPhishingWarningView:(NSView *)arg1 ;
-(NSLayoutConstraint *)antiPhishingWarningViewLeadingAlignmentConstraint;
-(void)setAntiPhishingWarningViewLeadingAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)antiPhishingWarningViewTrailingHorizontalSpacingConstraint;
-(void)setAntiPhishingWarningViewTrailingHorizontalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)antiPhishingWarningViewTopVerticalSpacingConstraint;
-(void)setAntiPhishingWarningViewTopVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)antiPhishingWarningViewBottomVerticalSpacingConstraint;
-(void)setAntiPhishingWarningViewBottomVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(ManagedPlugInsEditor *)managedPlugInsEditor;
-(void)setManagedPlugInsEditor:(ManagedPlugInsEditor *)arg1 ;
-(NSButton *)managePlugInsBlockingButton;
-(void)setManagePlugInsBlockingButton:(NSButton *)arg1 ;
-(ManagedWebGLPoliciesEditor *)managedWebGLPoliciesEditor;
-(void)setManagedWebGLPoliciesEditor:(ManagedWebGLPoliciesEditor *)arg1 ;
-(NSButton *)manageWebGLPoliciesButton;
-(void)setManageWebGLPoliciesButton:(NSButton *)arg1 ;
-(id)helpAnchor;
-(void)awakeFromNib;
-(void)moduleWillBeRemoved;
-(void)initializeFromDefaults;
-(void)moduleWasInstalled;
@end

