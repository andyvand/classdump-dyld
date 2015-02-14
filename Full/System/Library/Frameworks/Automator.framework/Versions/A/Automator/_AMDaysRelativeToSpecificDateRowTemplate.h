/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSDatePicker, NSString;

@interface _AMDaysRelativeToSpecificDateRowTemplate : NSPredicateEditorRowTemplate {

	NSPopUpButton* _leftExpressionPopup;
	NSPopUpButton* _specificDateRangePopup;
	NSDatePicker* _datePicker;
	NSString* _name;
	NSString* _keyPath;
	char _hasCreatedViews;

}
+(id)templateWithName:(id)arg1 withKeyPath:(id)arg2 ;
-(void)createViewsIfNecessary;
-(id)convertToEvaluationPredicateFromUIPredicate:(id)arg1 ;
-(id)initWithName:(id)arg1 withKeyPath:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(id)templateViews;
-(double)matchForPredicate:(id)arg1 ;
-(id)displayableSubpredicatesOfPredicate:(id)arg1 ;
-(id)predicateWithSubpredicates:(id)arg1 ;
@end

