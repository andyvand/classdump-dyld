/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCardCollectionRowView.h>

@class NSPopUpButton, NSTextField;

@interface ABCardCollectionMessagingRowView : ABCardCollectionRowView {

	NSPopUpButton* _messagingServiceChooserPopup;
	NSTextField* _messagingServiceLabel;

}

@property (retain) NSTextField * messagingServiceLabel;                       //@synthesize messagingServiceLabel=_messagingServiceLabel - In the implementation block
@property (retain) NSPopUpButton * messagingServiceChooserPopup;              //@synthesize messagingServiceChooserPopup=_messagingServiceChooserPopup - In the implementation block
-(void)setMessagingServiceChooserPopup:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)messagingServiceChooserPopup;
-(NSTextField *)messagingServiceLabel;
-(void)updateValueFontWithFont:(id)arg1 ;
-(void)setMessagingServiceLabel:(NSTextField *)arg1 ;
-(void)updateTextColors;
-(void)setServiceMenu:(id)arg1 ;
-(void)setService:(id)arg1 ;
-(void)setServicePopUpEnabled:(char)arg1 ;
-(void)dealloc;
@end
