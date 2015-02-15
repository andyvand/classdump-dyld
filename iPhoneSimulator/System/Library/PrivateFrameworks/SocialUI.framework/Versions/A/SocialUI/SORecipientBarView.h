/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSView.h>

@class SOFlexibleScrollView, SOTokenField, SOAdjustableLayoutView, NSView, NSLayoutConstraint;

@interface SORecipientBarView : NSView {

	SOFlexibleScrollView* _recipientScrollView;
	SOTokenField* _recipientTokenField;
	SOAdjustableLayoutView* _recipientActionsView;
	NSView* _displayedRecipientActionsView;
	NSLayoutConstraint* _recipientActionsLeadingLock;

}

@property (retain) SOFlexibleScrollView * recipientScrollView;                    //@synthesize recipientScrollView=_recipientScrollView - In the implementation block
@property (retain) SOTokenField * recipientTokenField;                            //@synthesize recipientTokenField=_recipientTokenField - In the implementation block
@property (retain) SOAdjustableLayoutView * recipientActionsView;                 //@synthesize recipientActionsView=_recipientActionsView - In the implementation block
@property (nonatomic,retain) NSView * displayedRecipientActionsView;              //@synthesize displayedRecipientActionsView=_displayedRecipientActionsView - In the implementation block
@property (retain) NSLayoutConstraint * recipientActionsLeadingLock;              //@synthesize recipientActionsLeadingLock=_recipientActionsLeadingLock - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)_preferredScrollerStyleDidChange;
-(SOAdjustableLayoutView *)recipientActionsView;
-(NSLayoutConstraint *)recipientActionsLeadingLock;
-(void)setRecipientActionsLeadingLock:(NSLayoutConstraint *)arg1 ;
-(SOTokenField *)recipientTokenField;
-(SOFlexibleScrollView *)recipientScrollView;
-(void)_textViewChangedSelection:(id)arg1 ;
-(void)setDisplayedRecipientActionsView:(NSView *)arg1 ;
-(void)setRecipientScrollView:(SOFlexibleScrollView *)arg1 ;
-(void)setRecipientTokenField:(SOTokenField *)arg1 ;
-(void)setRecipientActionsView:(SOAdjustableLayoutView *)arg1 ;
-(NSView *)displayedRecipientActionsView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)_commonInit;
@end

