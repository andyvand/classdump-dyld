/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/LegacyGameKit.framework/LegacyGameKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, GKContentView, UITableView, NSString, NSMutableArray, NSTimer, GKSession;

@interface GKPeerPickerViewController : UIViewController {

	id _delegate;
	NSMutableDictionary* _sessionMap;
	GKContentView* _btView;
	GKContentView* _listView;
	GKContentView* _statusView;
	GKContentView* _inviteView;
	GKContentView* _currentView;
	GKContentView* _connectTypeView;
	GKContentView* _noPeersView;
	UITableView* _peerTableView;
	unsigned _connectionTypesMask;
	NSString* _currentConnectionTypeKey;
	NSMutableArray* _menuQueue;
	BOOL _animating;
	BOOL _alertPresented;
	int _state;
	int _pendingState;
	BOOL _updating;
	NSTimer* _invitationWaitTimer;
	int _bluetoothStatus;
	NSString* _searchingForServicesString;
	NSMutableArray* _peers;
	NSString* _pendingPeer;
	BOOL _alertCancelled;

}

@property (assign) id delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,@dynamic,readonly) GKSession * currentSession; 
@property (nonatomic,retain) GKContentView * btView;                                //@synthesize btView=_btView - In the implementation block
@property (nonatomic,retain) GKContentView * listView;                              //@synthesize listView=_listView - In the implementation block
@property (nonatomic,retain) GKContentView * statusView;                            //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) GKContentView * inviteView;                            //@synthesize inviteView=_inviteView - In the implementation block
@property (nonatomic,retain) GKContentView * connectTypeView;                       //@synthesize connectTypeView=_connectTypeView - In the implementation block
@property (nonatomic,retain) GKContentView * noPeersView;                           //@synthesize noPeersView=_noPeersView - In the implementation block
@property (nonatomic,readonly) GKContentView * currentView;                         //@synthesize currentView=_currentView - In the implementation block
@property (assign) unsigned connectionTypesMask;                                    //@synthesize connectionTypesMask=_connectionTypesMask - In the implementation block
@property (assign,nonatomic) NSString * currentConnectionTypeKey;                   //@synthesize currentConnectionTypeKey=_currentConnectionTypeKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessionMap;                      //@synthesize sessionMap=_sessionMap - In the implementation block
@property (nonatomic,copy) NSString * searchingForServicesString;                   //@synthesize searchingForServicesString=_searchingForServicesString - In the implementation block
@property (nonatomic,retain) NSMutableArray * peers;                                //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) UITableView * peerTableView;                           //@synthesize peerTableView=_peerTableView - In the implementation block
@property (assign,nonatomic) int bluetoothStatus;                                   //@synthesize bluetoothStatus=_bluetoothStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * menuQueue;                            //@synthesize menuQueue=_menuQueue - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                     //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) BOOL alertPresented;                                   //@synthesize alertPresented=_alertPresented - In the implementation block
@property (assign,nonatomic) BOOL alertCancelled;                                   //@synthesize alertCancelled=_alertCancelled - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int pendingState;                                      //@synthesize pendingState=_pendingState - In the implementation block
@property (assign,nonatomic) BOOL updating;                                         //@synthesize updating=_updating - In the implementation block
@property (getter=isVisible,nonatomic,@dynamic,readonly) BOOL visible; 
@property (nonatomic,retain) NSTimer * invitationWaitTimer;                         //@synthesize invitationWaitTimer=_invitationWaitTimer - In the implementation block
-(BOOL)updating;
-(void)setUpdating:(BOOL)arg1 ;
-(void)setConnectionTypesMask:(unsigned)arg1 ;
-(unsigned)connectionTypesMask;
-(void)setSearchingForServicesString:(id)arg1 ;
-(void)setSessionMap:(id)arg1 ;
-(void)setCurrentConnectionTypeKey:(id)arg1 ;
-(void)setConnectTypeView:(id)arg1 ;
-(void)setBtView:(id)arg1 ;
-(void)setListView:(id)arg1 ;
-(void)setInviteView:(id)arg1 ;
-(void)setNoPeersView:(id)arg1 ;
-(void)setPeerTableView:(id)arg1 ;
-(void)setMenuQueue:(id)arg1 ;
-(id)invitationWaitTimer;
-(void)setInvitationWaitTimer:(id)arg1 ;
-(id)sessionMap;
-(id)currentConnectionTypeKey;
-(id)peerTableView;
-(void)_sortAndUpdateTable;
-(BOOL)_updatePicker:(int)arg1 ;
-(void)_onlineButtonPressed:(id)arg1 ;
-(void)_nearbyButtonPressed:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)_turnBluetoothOn:(id)arg1 ;
-(void)_acceptInvitation:(id)arg1 ;
-(void)_declineInvitation:(id)arg1 ;
-(void)setPendingState:(int)arg1 ;
-(void)loadInitialView;
-(id)menuQueue;
-(BOOL)_shouldShowConnectTypeView;
-(BOOL)alertPresented;
-(int)pendingState;
-(void)_showConnectTypeView:(BOOL)arg1 ;
-(void)_showRequestBluetoothView:(BOOL)arg1 ;
-(void)_showBluetoothErrorView:(BOOL)arg1 ;
-(void)_setupListView;
-(void)_showListView:(BOOL)arg1 ;
-(void)_showNoPeersView:(BOOL)arg1 ;
-(void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(BOOL)arg3 ;
-(void)_showInviteViewWithName:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)alertCancelled;
-(void)_createConnectTypeViewIfNeeded;
-(void)_setSessionAvailabilityForState:(int)arg1 ;
-(id)connectTypeView;
-(id)_createAlertFromGKContentView:(id)arg1 ;
-(void)_showView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_createBTViewIfNeeded;
-(id)btView;
-(void)_createListViewIfNeeded;
-(id)listView;
-(void)_createInviteViewIfNeeded;
-(id)inviteView;
-(void)_createStatusViewIfNeeded;
-(void)_createNoPeersViewIfNeeded;
-(id)noPeersView;
-(void)_timedOutWaitingForInvitation:(id)arg1 ;
-(void)setAlertPresented:(BOOL)arg1 ;
-(void)setAlertCancelled:(BOOL)arg1 ;
-(void)_changePanelAnimationDidEnd:(id)arg1 ;
-(void)contentView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)searchingForServicesString;
-(void)setBluetoothStatus:(int)arg1 ;
-(id)currentView;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(int)state;
-(void)show;
-(void)didReceiveMemoryWarning;
-(void)setState:(int)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)dismiss;
-(void)didPresentAlertView:(id)arg1 ;
-(int)_determineBluetoothStatus;
-(void)_btPowerStateChanged:(id)arg1 ;
-(int)bluetoothStatus;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
-(void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2 ;
-(void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3 ;
-(void)session:(id)arg1 peerDidBecomeBusy:(id)arg2 ;
-(id)peers;
-(void)setPeers:(id)arg1 ;
-(id)currentSession;
-(id)statusView;
-(void)setStatusView:(id)arg1 ;
@end
