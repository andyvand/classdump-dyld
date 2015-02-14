/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCardCollectionViewDelegate <NSObject>
@optional
-(void)itemDidEndEditing:(id)arg1;
-(void)itemWasRemoved:(id)arg1;
-(void)itemDidRequestNewItem:(id)arg1;
-(void)itemWasClicked:(id)arg1;
-(void)item:(id)arg1 executeAction:(id)arg2;
-(void)itemValueDidBecomeNonEmpty:(id)arg1;
-(void)itemValueDidBecomeEmpty:(id)arg1;
-(char)item:(id)arg1 shouldEnableAction:(id)arg2;
-(id)item:(id)arg1 titleForAction:(id)arg2;
-(char)isEditable;
-(char)isEditing;

@end

