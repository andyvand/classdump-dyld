/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSButton.h>

@interface ABOnBlueButton : NSButton {

	id _privateTarget;
	SEL _privateAction;

}

@property (retain) id privateTarget;               //@synthesize privateTarget=_privateTarget - In the implementation block
@property (assign) SEL privateAction;              //@synthesize privateAction=_privateAction - In the implementation block
-(void)buttonWasClicked:(id)arg1 ;
-(void)setPrivateTarget:(id)arg1 ;
-(void)setPrivateAction:(SEL)arg1 ;
-(void)performPrivateAction;
-(id)privateTarget;
-(SEL)privateAction;
-(void)resetButtonStateAfterMouseUp;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(CGSize)intrinsicContentSize;
@end

