/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSString, NSFormatter;

@interface _AMPrefixLabeledRowTemplate : NSPredicateEditorRowTemplate {

	NSPopUpButton* _labelPopupButton;
	NSString* _label;
	NSFormatter* _formatter;
	char _hasCreatedViews;

}

@property (copy) NSString * label;                     //@synthesize label=_label - In the implementation block
@property (copy) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)createViewsIfNecessary;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)templateViews;
@end

