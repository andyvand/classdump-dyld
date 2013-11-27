/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManager.h>

@protocol SCATElement;
@class , NSValue, NSIndexPath, HNDAccessibilityManager;

@interface HNDElementNavigationController : SCATElementManager {

	BOOL _shouldRescanAfterFetch;
	BOOL _shouldRescanFromTopAfterFetch;
	<SCATElement>* _selectedElement;
	NSValue* _keyboardKeyCenterPoint;
	NSIndexPath* _keyboardIndexPath;
	int _keyboardSelectBehavior;

}

@property (nonatomic,retain) <SCATElement> * selectedElement;                    //@synthesize selectedElement=_selectedElement - In the implementation block
@property (nonatomic,readonly) BOOL isGroupingEnabled; 
@property (nonatomic,readonly) HNDAccessibilityManager * axManager; 
@property (assign,nonatomic) BOOL shouldRescanAfterFetch;                        //@synthesize shouldRescanAfterFetch=_shouldRescanAfterFetch - In the implementation block
@property (assign,nonatomic) BOOL shouldRescanFromTopAfterFetch;                 //@synthesize shouldRescanFromTopAfterFetch=_shouldRescanFromTopAfterFetch - In the implementation block
@property (nonatomic,retain) NSValue * keyboardKeyCenterPoint;                   //@synthesize keyboardKeyCenterPoint=_keyboardKeyCenterPoint - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyboardIndexPath;                    //@synthesize keyboardIndexPath=_keyboardIndexPath - In the implementation block
@property (assign,nonatomic) int keyboardSelectBehavior;                         //@synthesize keyboardSelectBehavior=_keyboardSelectBehavior - In the implementation block
-(void)orientationDidChange:(id)arg1 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)numberOfItemsInCurrentScanCycle;
-(void)didFetchElements:(id)arg1 foundNewElements:(BOOL)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(BOOL)arg4 ;
-(void)refreshElements;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(void)scannerWillMakeManagerInactive:(id)arg1 ;
-(void)setSelectedElement:(id)arg1 ;
-(id)axManager;
-(id)selectedElement;
-(id)currentElement;
-(BOOL)shouldRescanFromTopAfterFetch;
-(BOOL)shouldRescanAfterFetch;
-(void)_resetFetchFlags;
-(void)_giveUpWaitingForFetchAfterPause;
-(void)_stopWaitingForFetchAfterTemporaryPause;
-(void)setShouldRescanAfterFetch:(BOOL)arg1 ;
-(void)_pauseScanningTemporarily;
-(void)setShouldRescanFromTopAfterFetch:(BOOL)arg1 ;
-(void)_startWaitingForFetchAfterTemporaryPause;
-(BOOL)_didFocusLastOnKeyboardElement;
-(void)_pauseScanningForLikelyScreenChange;
-(void)_trackLastFocusedKeyboardItem:(id)arg1 ;
-(void)setKeyboardIndexPath:(id)arg1 ;
-(void)setKeyboardKeyCenterPoint:(id)arg1 ;
-(unsigned)_depthForElement:(id)arg1 ;
-(id)_replacementForLastFocusedKeyboardItem;
-(BOOL)_isKeyboardContainerElement:(id)arg1 allowKeyboardContainerItself:(BOOL)arg2 ;
-(id)keyboardIndexPath;
-(id)keyboardKeyCenterPoint;
-(id)_indexPathForKeyboardElement:(id)arg1 ;
-(id)_keyboardElementForIndexPath:(id)arg1 ;
-(BOOL)_isScanningKeyboard:(id)arg1 ;
-(void)setKeyboardSelectBehavior:(int)arg1 ;
-(int)keyboardSelectBehavior;
-(id)_firstKeyboardFocusContext;
-(BOOL)hasZeroElements;
-(void)appTransitionDidOccur:(id)arg1 ;
-(void)screenDidChange:(id)arg1 ;
-(void)alertDidAppear:(id)arg1 ;
-(void)screenChangingButtonWasPressed:(id)arg1 ;
-(void)scannerManager:(id)arg1 didActivateElement:(id)arg2 ;
-(id)nextFocusContextAfterDismissingMenuForElement:(id)arg1 ;
-(id)identifier;
-(BOOL)isGroupingEnabled;
@end
