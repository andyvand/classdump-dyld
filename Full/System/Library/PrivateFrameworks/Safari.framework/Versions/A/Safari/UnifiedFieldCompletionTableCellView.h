/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/TableCellViewWithCustomHighlightedViews.h>

@class NSTextField, NSLayoutConstraint;

@interface UnifiedFieldCompletionTableCellView : TableCellViewWithCustomHighlightedViews {

	NSTextField* _textField;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;

}

@property (assign,nonatomic) double leadingSpace; 
@property (assign,nonatomic) double trailingSpace; 
@property (nonatomic,retain) NSLayoutConstraint * leadingConstraint;               //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingConstraint;              //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_configureTextFieldForUseInCompletionList:(id)arg1 ;
-(void)setLeadingSpace:(double)arg1 ;
-(void)setTrailingSpace:(double)arg1 ;
-(void)_setUpTextField;
-(double)leadingSpace;
-(double)trailingSpace;
-(NSLayoutConstraint *)leadingConstraint;
-(NSLayoutConstraint *)trailingConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
@end

