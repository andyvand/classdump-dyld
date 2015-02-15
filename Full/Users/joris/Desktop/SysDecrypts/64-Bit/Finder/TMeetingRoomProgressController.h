/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Finder/Finder-Structs.h>
@class TBrowserViewController;

@interface TMeetingRoomProgressController : NSObject {

	TRecursiveMutex _lock;
	TFENode* _targetNode;
	TNSRef<TQueuedPopoverController *> _popoverController;
	TNSRef<TAirDropPerson *> _airDropPerson;
	double _percentComplete;
	TBrowserViewController* _browserViewController;
	TNSRef<NSArrayController *> _allViewArrayController;
	TNotificationCenterObserver* _viewWillMoveToWindowObserver;
	TNotificationCenterObserver* _airDropLayoutChangedObserver;
	TNotificationCenterObserver* _popoverWillCloseObserver;
	TKeyValueObserver* _currentNWOperationEventObserver;
	TKeyValueObserver* _bytesToCopyObserver;
	TKeyValueObserver* _bytesCopiedObserver;
	TKeyValueBinder* _percentCompleteBinder;

}

@property (assign,nonatomic) TBrowserViewController * browserViewController; 
@property (readonly) double percentComplete;                                              //@synthesize percentComplete=_percentComplete - In the implementation block
+(BOOL)isProgressForNode:(const TFENode*)arg1 ;
+(void)showPopoverTransientForNode:(const TFENode*)arg1 ;
+(void)tearDownControllers;
+(BOOL)isPopoverShown;
+(void)startSendingNodes:(const TFENodeVector*)arg1 toReceiverNode:(const TFENode*)arg2 ;
+(void)startReceivingWithOperation:(SFOperationRef)arg1 ;
+(BOOL)isPopoverShownForNode:(const TFENode*)arg1 ;
+(TString*)stateTextForNode:(const TFENode*)arg1 ;
+(void)registerProgressViewController:(id)arg1 forNode:(const TFENode*)arg2 ;
+(void)unregisterProgressViewController:(id)arg1 forNode:(const TFENode*)arg2 ;
-(id)initWithTargetNode:(const TFENode*)arg1 ;
-(BOOL)isPopoverShown;
-(void)showPopoverTransient;
-(void)addProgressViewController:(id)arg1 ;
-(void)removeProgressViewController:(id)arg1 ;
-(void)closeInlineProgress;
-(void)showInlineProgress;
-(BOOL)shouldShowPopover:(BOOL*)arg1 ;
-(BOOL)shouldShowInlineProgress;
-(void)showPopoverLocked:(BOOL)arg1 ;
-(id)getOrOpenBrowserViewController;
-(void)browserViewLayoutChanged;
-(void)browserViewWillMoveToWindow:(id)arg1 ;
-(void)showPopover;
-(void)popoverWillClose;
-(void)closePopover;
-(void)aboutToTearDown;
-(TBrowserViewController *)browserViewController;
-(TString*)stateText;
-(TFENode*)targetNode;
-(void)setTargetNode:(const TFENode*)arg1 ;
-(void)aboutToTearDownPopover;
-(void)setBrowserViewController:(TBrowserViewController *)arg1 ;
-(id)init;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(double)percentComplete;
@end
