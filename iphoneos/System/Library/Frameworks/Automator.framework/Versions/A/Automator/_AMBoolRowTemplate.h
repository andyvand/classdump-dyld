/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSString;

@interface _AMBoolRowTemplate : NSPredicateEditorRowTemplate {

	NSPopUpButton* _leftExpressionPopup;
	NSPopUpButton* _valuePopup;
	NSString* _name;
	NSString* _keyPath;
	NSString* _valueName;
	char _value;
	char _hasCreatedViews;

}
+(id)templateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 andValue:(char)arg4 ;
-(void)createViewsIfNecessary;
-(id)initTemplateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 andValue:(char)arg4 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(id)templateViews;
-(double)matchForPredicate:(id)arg1 ;
-(id)predicateWithSubpredicates:(id)arg1 ;
@end

