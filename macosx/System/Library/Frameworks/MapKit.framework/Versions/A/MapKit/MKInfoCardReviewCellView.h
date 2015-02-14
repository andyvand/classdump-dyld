/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSButton, MKStarRatingView;

@interface MKInfoCardReviewCellView : NSTableCellView {

	char showSeparator;
	NSButton* linkButton;
	MKStarRatingView* starsRating;

}

@property (assign,nonatomic,__weak) NSButton * linkButton; 
@property (assign,nonatomic,__weak) MKStarRatingView * starsRating; 
@property (assign,nonatomic) char showSeparator; 
-(MKStarRatingView *)starsRating;
-(void)openReviewWithBrowser:(id)arg1 ;
-(void)setStarsRating:(MKStarRatingView *)arg1 ;
-(char)showSeparator;
-(void)setShowSeparator:(char)arg1 ;
-(void)setLinkButton:(NSButton *)arg1 ;
-(NSButton *)linkButton;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)awakeFromNib;
@end

