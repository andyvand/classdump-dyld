/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/ABCleanSplitViewDelegate.h>

@class ABCleanSplitView, ABCleanSplitViewConstraints, ABCleanGroupsPaneVisibility, ABCleanSplitViewState, NSString;

@interface ABCleanSplitViewController : NSObject <ABCleanSplitViewDelegate> {

	ABCleanSplitView* _splitView;
	ABCleanSplitViewConstraints* _constraints;
	ABCleanGroupsPaneVisibility* _groupsPaneVisibility;
	ABCleanSplitViewState* _state;
	BOOL _didUserUpdateSplitViewDivider;

}

@property (readonly) ABCleanSplitView * splitView;                                           //@synthesize splitView=_splitView - In the implementation block
@property (getter=isGroupsPaneHidden,nonatomic,readonly) BOOL groupsPaneHidden; 
@property (readonly) id<ABBookStateSaving> state;                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSplitView:(id)arg1 identifier:(id)arg2 ;
-(void)setGroupsPaneHidden:(BOOL)arg1 withAnimation:(BOOL)arg2 ;
-(BOOL)isGroupsPaneHidden;
-(id)ab_splitViewDividerColor:(id)arg1 ;
-(void)ab_splitView:(id)arg1 restoreStateWithCoder:(id)arg2 ;
-(void)ab_splitViewWillStartLiveResize:(id)arg1 ;
-(void)ab_splitViewDidEndLiveResize:(id)arg1 ;
-(void)updateWidthsFromSplitViewController:(id)arg1 ;
-(void)setGroupsPaneHidden:(BOOL)arg1 ;
-(void)dealloc;
-(id<ABBookStateSaving>)state;
-(ABCleanSplitView *)splitView;
-(CGRect)splitView:(id)arg1 effectiveRect:(CGRect)arg2 forDrawnRect:(CGRect)arg3 ofDividerAtIndex:(long long)arg4 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
@end

