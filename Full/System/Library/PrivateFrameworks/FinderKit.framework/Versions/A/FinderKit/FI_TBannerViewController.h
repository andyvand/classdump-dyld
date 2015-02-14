/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>
#import <FinderKit/TCoalescingNodeObserverProtocol.h>

@class NSString;

@interface FI_TBannerViewController : FI_TViewController <TCoalescingNodeObserverProtocol> {

	int _type;
	TString* _text;
	TString* _buttonTitle;
	BOOL _isButtonEnabled;
	TCoalescingNodeObserverCocoaBridge* _nodeObserver;
	TFENode* _observedNode;
	TNotificationCenterObserver* _finderPrefsChangedObserver;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (getter=isButtonEnabled) BOOL buttonEnabled;              //@synthesize isButtonEnabled=_isButtonEnabled - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)emptyTrash;
-(void)setText:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(void)viewLoaded;
-(BOOL)isButtonEnabled;
-(void)nodesAdded:(const TFENodeVector*)arg1 toObservedNode:(const TFENode*)arg2 ;
-(void)nodesChanged:(const vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > >*)arg1 inObservedNode:(const TFENode*)arg2 ;
-(void)nodesDeleted:(const TFENodeVector*)arg1 fromObservedNode:(const TFENode*)arg2 ;
-(void)openSyncCompleted:(const TFENode*)arg1 ;
-(id)initWithBannerType:(int)arg1 ;
-(void)deallocCommon;
-(void)stopObservingTargetNode;
-(void)updateBannerState;
-(void)startObservingTargetNode;
-(void)upgradeToICloudDrive;
-(BOOL)buttonEnabledStateForTrashFolder;
-(TString*)buttonTitleForTrashFolder;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(TFENode*)representedNode;
-(void)populationChangedInContainerNode:(const TFENode*)arg1 ;
-(void)emptyTrashSecurelyPrefChanged;
-(void)finalize;
-(void)dealloc;
-(void)buttonPressed:(id)arg1 ;
-(int)type;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)text;
@end

