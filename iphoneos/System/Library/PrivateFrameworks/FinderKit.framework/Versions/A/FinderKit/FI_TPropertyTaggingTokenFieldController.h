/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_IPropertyScrollViewController.h>

@interface FI_TPropertyTaggingTokenFieldController : FI_IPropertyScrollViewController {

	TNSRef<NSArray *> _origTagInfos;
	TNotificationCenterObserver* _tokenFieldDidEndEditingObserver;
	TNotificationCenterObserver* _forceTokenFieldToCommitObserver;

}
-(void)initCommon;
-(void)viewLoaded;
-(void)aboutToTearDown;
-(void)setShowSuggestionsTableInMenu:(BOOL)arg1 ;
-(void)setSubview:(id)arg1 ;
-(void)updateWithNodes:(const TFENodeVector*)arg1 ;
-(int)applyValueToNodes:(id)arg1 ;
-(void)nodesWillChange;
-(void)configureMinRowCount:(double)arg1 maxRowCount:(double)arg2 resizable:(BOOL)arg3 ;
-(BOOL)adjustSize:(BOOL)arg1 ;
-(void)flush;
-(void)textDidEndEditing:(id)arg1 ;
@end

