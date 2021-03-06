/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSPopUpButton.h>

@class NSDictionary, NSTextFieldCell, NSColor, NSMenuItem, NSPopUpButtonCell;

@interface ABLabelPopUpButton : NSPopUpButton {

	NSDictionary* mLabelAttributes;
	double mFontLineHeight;
	double mFontBaselineOffset;
	NSTextFieldCell* mTextFieldCellForDrawing;
	NSColor* mTextColor;
	NSMenuItem* mSpacerItem;
	NSMenuItem* mCustomItem;
	NSPopUpButtonCell* mPopupButtonImageFactoryCell;

}

@property (retain) NSColor * textColor; 
@property (nonatomic,retain) NSMenuItem * spacerItem; 
@property (nonatomic,retain) NSMenuItem * customItem; 
+(double)rightOutset;
-(void)ABLabelPopUpButton_commonInit;
-(CGRect)calcTextRectAndDraw:(char)arg1 ;
-(void)includeCustomLabelItem:(char)arg1 ;
-(void)setMenuItems:(id)arg1 ;
-(NSMenuItem *)spacerItem;
-(void)setSpacerItem:(NSMenuItem *)arg1 ;
-(NSMenuItem *)customItem;
-(void)setCustomItem:(NSMenuItem *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)sizeToFit;
-(void)setTextColor:(NSColor *)arg1 ;
-(NSColor *)textColor;
-(void)awakeFromNib;
@end

