/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTokenField.h>

@class NSCharacterSet;

@interface AMTokenField : NSTokenField {

	NSCharacterSet* _retainedTokenizingCharacterSet;

}
+(Class)cellClass;
-(id)observedParameterKey;
-(void)updateTokenNames:(id)arg1 ;
-(void)variableWasRemoved:(id)arg1 ;
-(void)updateParameter;
-(void)makeNewVariable:(id)arg1 ;
-(void)dealloc;
-(id)stringValue;
-(void)textDidChange:(id)arg1 ;
-(id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)awakeFromNib;
-(id)tokenFieldCell:(id)arg1 shouldUseWritablePasteboardTypes:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2 ;
@end

