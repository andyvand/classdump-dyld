/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ReadingListTableViewControllerDelegate <NSObject>
@optional
-(void)tableViewController:(id)arg1 receivedRemoveActionForItem:(id)arg2;
-(void)tableViewDidMoveToWindow:(id)arg1;

@required
-(void)tableViewController:(id)arg1 receivedNavigationActionWithPolicy:(long long)arg2 forItem:(id)arg3;
-(id)tableViewController:(id)arg1 menuForEvent:(id)arg2 withExistingMenu:(id)arg3 andItem:(id)arg4;
-(void)tableViewController:(id)arg1 didActivateItem:(id)arg2;
-(id)tableViewController:(id)arg1 accessibilityDescriptionForItem:(id)arg2;
-(void)displayedItemsDidChange:(id)arg1;

@end

