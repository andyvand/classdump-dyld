/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class MKImageView, NSArray, NSView, MKUILabel;

@interface MKTableViewCell : NSTableCellView {

	MKImageView* _mkImageView;
	NSArray* _mkConstraints;
	long long _style;
	NSView* _disclosureIndicator;
	char _showDisclosureIndicator;
	MKUILabel* textLabel;

}

@property (readonly) NSView * contentView; 
@property (retain) MKUILabel * textLabel; 
@property (assign,nonatomic) char showDisclosureIndicator;              //@synthesize showDisclosureIndicator=_showDisclosureIndicator - In the implementation block
+(double)height;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextLabel:(MKUILabel *)arg1 ;
-(void)setShowDisclosureIndicator:(char)arg1 ;
-(MKUILabel *)textLabel;
-(char)showDisclosureIndicator;
-(NSView *)contentView;
-(void)viewDidMoveToSuperview;
@end

