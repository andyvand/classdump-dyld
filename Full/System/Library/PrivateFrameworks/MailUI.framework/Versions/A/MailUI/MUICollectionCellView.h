/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSView.h>

@class NSLayoutConstraint;

@interface MUICollectionCellView : NSView {

	char _emphasized;
	char _focused;
	char _selected;
	unsigned long long _cellIndex;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _midXConstraint;
	NSLayoutConstraint* _minYConstraint;

}

@property (nonatomic,readonly) id viewController; 
@property (assign,nonatomic) unsigned long long cellIndex;                       //@synthesize cellIndex=_cellIndex - In the implementation block
@property (assign,nonatomic) char emphasized;                                    //@synthesize emphasized=_emphasized - In the implementation block
@property (assign,nonatomic) char focused;                                       //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) char selected;                                      //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;               //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * midXConstraint;                //@synthesize midXConstraint=_midXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minYConstraint;                //@synthesize minYConstraint=_minYConstraint - In the implementation block
-(char)focused;
-(void)setFocused:(char)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_muiCollectionCellViewCommonInit;
-(id)_enclosingConversationView;
-(void)setCellIndex:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)midXConstraint;
-(void)setMidXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minYConstraint;
-(void)setMinYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)collectionView:(id)arg1 didBeginScrollInScrollView:(id)arg2 ;
-(void)collectionView:(id)arg1 didScrollInScrollView:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndScrollInScrollView:(id)arg2 ;
-(char)selected;
-(unsigned long long)cellIndex;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)viewController;
-(char)emphasized;
-(void)setEmphasized:(char)arg1 ;
-(void)prepareContentInRect:(CGRect)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)prepareForReuse;
@end

