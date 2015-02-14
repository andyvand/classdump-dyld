/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNWrappedDictionary.h>

@class NSStackView, NSView, NSArray, NSImageView, NSButton, ABCardViewStyleProvider;

@interface ABCardCollectionRowScope : CNWrappedDictionary

@property (readonly) NSView*<ABCardCollectionRowView> rowView; 
@property (readonly) NSStackView * stackView; 
@property (readonly) NSView * labelView; 
@property (readonly) NSView * valueView; 
@property (readonly) NSArray * actionGlyphButtons; 
@property (readonly) NSImageView * accountBadgeView; 
@property (readonly) NSView * messagingServiceView; 
@property (readonly) NSView * accessoryView; 
@property (readonly) NSView * plusButton; 
@property (readonly) NSView * minusButton; 
@property (readonly) NSButton * privacyCheckbox; 
@property (readonly) ABCardViewStyleProvider * styleProvider; 
-(NSArray *)actionGlyphButtons;
-(NSView *)labelView;
-(NSView *)valueView;
-(ABCardViewStyleProvider *)styleProvider;
-(NSButton *)privacyCheckbox;
-(NSImageView *)accountBadgeView;
-(id)initWithRowView:(id)arg1 styleProvider:(id)arg2 ;
-(NSView *)messagingServiceView;
-(NSView *)minusButton;
-(NSView *)accessoryView;
-(NSView *)plusButton;
-(NSView*<ABCardCollectionRowView>)rowView;
-(NSStackView *)stackView;
@end

