/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTextField.h>

@class NSDictionary;

@interface CalUIResizingTextField : NSTextField {

	char _resizingEnabled;
	char _automaticLinkDetection;
	char _alwaysTreatAsLink;
	char _hasEverLayedOutWithContent;
	long long _maxLines;
	NSDictionary* _textAttributes;
	double _lineHeight;

}

@property (assign,nonatomic) long long maxLines;                       //@synthesize maxLines=_maxLines - In the implementation block
@property (assign) char resizingEnabled;                               //@synthesize resizingEnabled=_resizingEnabled - In the implementation block
@property (retain) NSDictionary * textAttributes;                      //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign) double lineHeight;                                  //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) char automaticLinkDetection;              //@synthesize automaticLinkDetection=_automaticLinkDetection - In the implementation block
@property (assign,nonatomic) char alwaysTreatAsLink;                   //@synthesize alwaysTreatAsLink=_alwaysTreatAsLink - In the implementation block
@property (assign) char hasEverLayedOutWithContent;                    //@synthesize hasEverLayedOutWithContent=_hasEverLayedOutWithContent - In the implementation block
-(void)updatePreferredMaxLayoutWidth:(id)arg1 ;
-(double)lineHeight;
-(void)setLineHeight:(double)arg1 ;
-(void)enableEntireFieldTreatedAsLink;
-(id)initWithResizeEnabled:(char)arg1 ;
-(void)setResizingEnabled:(char)arg1 ;
-(void)configureText;
-(void)setHasEverLayedOutWithContent:(char)arg1 ;
-(char)alwaysTreatAsLink;
-(void)setAutomaticLinkDetection:(char)arg1 ;
-(void)_configureForLinks;
-(char)automaticLinkDetection;
-(void)setAlwaysTreatAsLink:(char)arg1 ;
-(char)resizingEnabled;
-(char)hasEverLayedOutWithContent;
-(long long)maxLines;
-(void)updateStringValue:(id)arg1 ;
-(void)setAttributedStringValueWithString:(id)arg1 andURLString:(id)arg2 ;
-(void)enableAutomaticLinkDetection;
-(void)setMaxLines:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setStringValue:(id)arg1 ;
-(void)layout;
-(void)textDidChange:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)textAttributes;
@end

