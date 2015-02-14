/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCardDelegateProtocol;
#import <Contacts/Contacts-Structs.h>
@class ABCardWindowController;

@interface ABCard : NSObject {

	id<ABCardDelegateProtocol> _delegate;
	id _reserved1;

}

@property (assign) id<ABCardDelegateProtocol> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ABCardWindowController * windowController;              //@synthesize reserved1=_reserved1 - In the implementation block
+(id)frameAutosaveNameWithPerson:(id)arg1 ;
-(id)initWithPerson:(id)arg1 showUnified:(char)arg2 ;
-(id)_findCardAtTopLeft:(CGPoint)arg1 inCards:(id)arg2 ;
-(void)showWindowFromRect:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 forProperty:(id)arg2 identifier:(id)arg3 ;
-(char)unified;
-(id)initWithPerson:(id)arg1 ;
-(void)windowDidClose:(id)arg1 ;
-(id)retain;
-(void)setDelegate:(id<ABCardDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id)window;
-(id<ABCardDelegateProtocol>)delegate;
-(ABCardWindowController *)windowController;
-(void)close;
-(void)setWindowController:(ABCardWindowController *)arg1 ;
-(void)refresh;
-(id)person;
-(void)showWindow;
@end

