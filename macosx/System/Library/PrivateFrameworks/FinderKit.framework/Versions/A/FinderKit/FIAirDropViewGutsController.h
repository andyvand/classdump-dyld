/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>
#import <FinderKit/TNWOperationDelegateProtocol.h>

@protocol FIAirDropViewDelegate;
@class FIAirDropListViewController, FI_TImageView, FI_TTextField, FI_TButton, FI_TUpdateLayerView, NSArray, NSImage, FIAirDropView, NSString;

@interface FIAirDropViewGutsController : FI_TViewController <TNWOperationDelegateProtocol> {

	id<FIAirDropViewDelegate> _delegate;
	TNSRef<NSArray *> _urlsToSend;
	TNSRef<NSImage *> _largeThumbnail;
	TNSRef<NSImage *> _smallThumbnail;
	FIAirDropListViewController* _listViewController;
	FI_TImageView* _airDropLogoImageView;
	FI_TTextField* _explanationTextFld;
	FI_TButton* _doneButton;
	FI_TUpdateLayerView* _fileImagePlaceholderView;
	TNSRef<id<FI_TAirDropNotAvailableDelegateProtocol> > _airDropNotAvailableDelegate;
	TNSRef<FI_TAirDropDiscoveryController *> _discoveryController;
	TNotificationCenterObserver* _availableStateChangedObserver;
	TKeyValueObserver* _isLegacyMachineObserver;
	TKeyValueObserver* _isLegacyModeEnabledObserver;
	TKeyValueObserver* _arrangedObjectsCountObserver;
	TRecursiveMutex _senderOpControllersLock;
	vector<std::__1::unique_ptr<TAirDropSenderOperationController, std::__1::default_delete<TAirDropSenderOperationController> >, std::__1::allocator<std::__1::unique_ptr<TAirDropSenderOperationController, std::__1::default_delete<TAirDropSenderOperationController> > > >* _senderOpControllers;
	BOOL _atLeastOneTransferStarted;
	int _delegateRespondsToMask;

}

@property (assign,nonatomic) id<FIAirDropViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * urlsToSend; 
@property (nonatomic,copy) NSImage * largeThumbnail; 
@property (nonatomic,copy) NSImage * smallThumbnail; 
@property (nonatomic,retain,readonly) FIAirDropView * airDropView; 
@property (nonatomic,readonly) CGRect fileImageFrame; 
@property (nonatomic,readonly) BOOL hideExplanationTextFld; 
@property (nonatomic,readonly) BOOL isTransferInProgress; 
@property (nonatomic,readonly) BOOL atLeastOneTransferStarted;                  //@synthesize atLeastOneTransferStarted=_atLeastOneTransferStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initCommon;
-(void)viewLoaded;
-(void)nwOperationEventAskUser:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventWaitForAnswer:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventCanceled:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventStarted:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventPreprocess:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventProgress:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventPostprocess:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventFinished:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventErrorOccurred:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventConnecting:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventConflict:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)nwOperationEventBlocked:(id)arg1 opController:(INWOperationController*)arg2 ;
-(void)cancelOperations;
-(void)configureForAirDropAvailability;
-(void)updateExplanationText;
-(BOOL)isAirDropAvailable;
-(NSImage *)largeThumbnail;
-(NSImage *)smallThumbnail;
-(void)setLargeThumbnail:(NSImage *)arg1 ;
-(void)setSmallThumbnail:(NSImage *)arg1 ;
-(void)updateDataSource:(id)arg1 senderOpController:(TAirDropSenderOperationController*)arg2 ;
-(void)tellDelegateDoneButtonPressed;
-(void)tellDelegateCancelButtonPressed;
-(void)sendToNode:(const TFENode*)arg1 ;
-(void)cancelNode:(const TFENode*)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(FIAirDropView *)airDropView;
-(void)resumeOperation:(TAirDropSenderOperationController*)arg1 ;
-(NSArray *)urlsToSend;
-(void)setUrlsToSend:(NSArray *)arg1 ;
-(CGRect)fileImageFrame;
-(BOOL)hideExplanationTextFld;
-(BOOL)isTransferInProgress;
-(void)airDropAvailabilityChanged;
-(void)personClicked:(const TFENode*)arg1 ;
-(BOOL)atLeastOneTransferStarted;
-(void)setDelegate:(id<FIAirDropViewDelegate>)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<FIAirDropViewDelegate>)delegate;
-(void)keyDown:(id)arg1 ;
-(void)cancelOperation:(TAirDropSenderOperationController*)arg1 ;
-(id)nibName;
-(void)cancelButtonPressed:(id)arg1 ;
@end

