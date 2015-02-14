/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSDatePicker;

@interface AMSpecificDateRowTemplate : NSPredicateEditorRowTemplate {

	char hasCreatedViews;
	NSPopUpButton* datePopUpButton;
	NSDatePicker* datePicker;

}
-(void)createViewsIfNecessary;
-(id)matchingLeftExpressions;
-(void)dealloc;
-(void)setPredicate:(id)arg1 ;
-(id)templateViews;
-(double)matchForPredicate:(id)arg1 ;
-(id)predicateWithSubpredicates:(id)arg1 ;
@end

