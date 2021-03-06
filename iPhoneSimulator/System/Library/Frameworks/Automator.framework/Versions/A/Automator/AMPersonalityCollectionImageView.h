/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class NSCollectionViewItem, NSDictionary, NSTextView;

@interface AMPersonalityCollectionImageView : NSView {

	NSCollectionViewItem* _delegate;
	NSDictionary* _titleAttributes;
	NSDictionary* _selectedTitleAttributes;
	NSTextView* _textView;

}

@property (assign) NSCollectionViewItem * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSTextView * textView;                        //@synthesize textView=_textView - In the implementation block
-(void)activationChanged:(id)arg1 ;
-(id)_unselectedTitleAttributes;
-(id)_selectedTitleAttributes;
-(id)_getSelectionPath;
-(void)setDelegate:(NSCollectionViewItem *)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(NSCollectionViewItem *)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(char)acceptsFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(void)setTextView:(NSTextView *)arg1 ;
-(NSTextView *)textView;
-(void)mouseUp:(id)arg1 ;
@end

