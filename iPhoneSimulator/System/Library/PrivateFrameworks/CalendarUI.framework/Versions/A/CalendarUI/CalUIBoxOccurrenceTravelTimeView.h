/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalUILayerBackedView.h>

@class NSImageView, CalUIFontSmoothedTextField, CalUILayerBackedView, NSColor, NSDictionary, NSLayoutConstraint;

@interface CalUIBoxOccurrenceTravelTimeView : CalUILayerBackedView {

	NSImageView* _icon;
	CalUIFontSmoothedTextField* _text;
	CalUILayerBackedView* _divider;
	NSColor* _fontSmoothingColor;
	NSDictionary* _attributes;
	NSLayoutConstraint* _iconTextAlignmentConstraint;
	CalUILayerBackedView* _colorBar;

}

@property (retain) NSImageView * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (retain) CalUIFontSmoothedTextField * text;                             //@synthesize text=_text - In the implementation block
@property (retain) CalUILayerBackedView * divider;                                //@synthesize divider=_divider - In the implementation block
@property (retain) NSColor * fontSmoothingColor;                                  //@synthesize fontSmoothingColor=_fontSmoothingColor - In the implementation block
@property (retain) NSDictionary * attributes;                                     //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSLayoutConstraint * iconTextAlignmentConstraint;              //@synthesize iconTextAlignmentConstraint=_iconTextAlignmentConstraint - In the implementation block
@property (retain) CalUILayerBackedView * colorBar;                               //@synthesize colorBar=_colorBar - In the implementation block
-(void)setText:(CalUIFontSmoothedTextField *)arg1 ;
-(void)setStringAttributes:(id)arg1 ;
-(void)setTravelTypeIsWalking:(char)arg1 ;
-(void)setDividerColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 ;
-(void)setColorBar:(CalUILayerBackedView *)arg1 ;
-(void)setBackgroundColorForFontSmoothing:(id)arg1 ;
-(void)setDivider:(CalUILayerBackedView *)arg1 ;
-(CalUILayerBackedView *)divider;
-(CalUILayerBackedView *)colorBar;
-(void)setIconTextAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconTextAlignmentConstraint;
-(void)updateText;
-(NSColor *)fontSmoothingColor;
-(void)setFontSmoothingColor:(NSColor *)arg1 ;
-(id)init;
-(void)setFont:(id)arg1 ;
-(void)layout;
-(void)setIcon:(NSImageView *)arg1 ;
-(NSImageView *)icon;
-(CalUIFontSmoothedTextField *)text;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setTravelDuration:(double)arg1 ;
@end

