/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <AppKit/NSView.h>

@class NSGradient, ABPersonView, ABCardWindowLayout, NSTrackingArea;

@interface ABCardWindowContentView : NSView {

	NSGradient* _cardBackgroundGradient;
	ABPersonView* _personView;
	ABCardWindowLayout* _windowLayout;
	NSTrackingArea* _contentTrackingArea;

}

@property (nonatomic,retain) ABCardWindowLayout * windowLayout;              //@synthesize windowLayout=_windowLayout - In the implementation block
@property (assign) ABPersonView * personView; 
-(void)ABCardWindowContentView_commonInit;
-(void)setWindowLayout:(ABCardWindowLayout *)arg1 ;
-(void)refreshLayout;
-(void)removeContentTrackingArea;
-(void)addContentTrackingArea;
-(void)refreshConstraints;
-(ABCardWindowLayout *)windowLayout;
-(ABPersonView *)personView;
-(void)setPersonView:(ABPersonView *)arg1 ;
-(char)isMouseLocationInsideVisibleRect:(CGPoint)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isFlipped;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)awakeFromNib;
-(void)updateTrackingAreas;
@end
