/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCardViewDelegate <NSObject>
@property (readonly) char shouldShowLinkedPeople; 
@required
-(void)cardViewWillEndEditing:(id)arg1;
-(void)cardViewDidBeginEditing:(id)arg1;
-(void)cardViewDidEndEditing:(id)arg1;
-(char)shouldShowLinkedPeople;
-(void)cardViewPhotoDidChange:(id)arg1;
-(void)cardViewNoteDidChange:(id)arg1;

@end

