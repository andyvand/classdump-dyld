/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <AppKit/NSViewController.h>
#import <NotificationCenter/NSRemoteViewDelegate.h>
#import <NotificationCenter/NCRemotePlugInClient.h>

@protocol OS_dispatch_source, NCRemoteViewControllerDelegate;
@class NSString, _NCRemoteViewBackground, _NCRemoteView, NSLayoutConstraint, NSObject, NSArray, NSMutableArray, NSDate, CALayer, NCRemotePlugIn;

@interface NCRemoteViewController : NSViewController <NSRemoteViewDelegate, NCRemotePlugInClient> {

	_NCRemoteViewBackground* _backgroundView;
	_NCRemoteView* _remoteView;
	NSLayoutConstraint* _contentHeightConstraint;
	double _contentHeight;
	double _defaultHeight;
	unsigned long long _lastHeightUpdateNumber;
	NSObject*<OS_dispatch_source> _teardownTimer;
	NSArray* _temporaryBackgroundConstraints;
	NSMutableArray* _snapshot_completion_blocks;
	NSObject*<OS_dispatch_source> _snapshot_timeout;
	NSDate* _lastSnapshotDate;
	CALayer* _snapshotLayerTree;
	BOOL _usingPlugin;
	BOOL _pluginNotInBundle;
	BOOL _remoteViewHasNoContent;
	BOOL _allowSnapshots;
	BOOL _defersActive;
	BOOL _unloadWhenNotVisible;
	BOOL _active;
	BOOL _supportsEdit;
	NSString* _remotePlugInClientIdentifier;
	id<NCRemoteViewControllerDelegate> _delegate;
	NCRemotePlugIn* _remotePlugIn;

}

@property (assign,nonatomic,__weak) id<NCRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NCRemotePlugIn * remotePlugIn;                                 //@synthesize remotePlugIn=_remotePlugIn - In the implementation block
@property (assign,nonatomic) BOOL defersActive;                                               //@synthesize defersActive=_defersActive - In the implementation block
@property (assign,nonatomic) BOOL unloadWhenNotVisible;                                       //@synthesize unloadWhenNotVisible=_unloadWhenNotVisible - In the implementation block
@property (assign,nonatomic) BOOL active;                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL supportsEdit;                                             //@synthesize supportsEdit=_supportsEdit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * remotePlugInClientIdentifier;                                 //@synthesize remotePlugInClientIdentifier=_remotePlugInClientIdentifier - In the implementation block
+(id)snapshotRoot;
+(void)initialize;
-(id)initWithPlugin:(id)arg1 ;
-(void)pluginEditModeChanged:(long long)arg1 ;
-(void)pluginSnapshotData:(id)arg1 scale:(double)arg2 result:(unsigned long long)arg3 ;
-(void)pluginHasContentChanged:(char)arg1 ;
-(void)pluginRequestHeightChange:(double)arg1 updateNumber:(unsigned long long)arg2 fencePort:(id)arg3 ;
-(void)_loadSnapshot;
-(void)_takeDownRemoteView;
-(void)_updateSnapshot:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearSnapshot;
-(void)deactivateImmediately;
-(void)_setupRemoteView;
-(NCRemotePlugIn *)remotePlugIn;
-(void)_setupRemoteViewFailedDueToReason:(id)arg1 ;
-(void)_addRemoteView;
-(void)_pluginPreferredHeightRequestChange:(double)arg1 ;
-(void)remotePlugInDidActivate:(id)arg1 ;
-(void)remotePlugInDidDeActivate:(id)arg1 ;
-(double)remotePlugInDefaultWidth:(id)arg1 ;
-(NSString *)remotePlugInClientIdentifier;
-(void)deactivateAndIdleExit;
-(void)deactiveAndHideContentImmediately;
-(BOOL)defersActive;
-(void)setDefersActive:(BOOL)arg1 ;
-(BOOL)unloadWhenNotVisible;
-(void)setUnloadWhenNotVisible:(BOOL)arg1 ;
-(BOOL)supportsEdit;
-(void)setDelegate:(id<NCRemoteViewControllerDelegate>)arg1 ;
-(id<NCRemoteViewControllerDelegate>)delegate;
-(void)update;
-(void)loadView;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)viewWillInvalidate:(id)arg1 ;
-(void)viewDidInvalidate:(id)arg1 ;
-(void)viewDidAdvanceToRunPhase:(id)arg1 ;
-(void)viewDidRetreatToConfigPhase:(id)arg1 ;
-(char)view:(id)arg1 shouldResize:(CGSize)arg2 ;
@end

