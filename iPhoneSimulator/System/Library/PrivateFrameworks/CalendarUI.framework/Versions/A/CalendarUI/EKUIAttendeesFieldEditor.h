/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTextView.h>

@interface EKUIAttendeesFieldEditor : NSTextView
-(id)_editingFieldDelegate;
-(id)stringWithPrefixMatchingCurrentString:(id)arg1 ;
-(id)currentTypedString;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(NSRange)rangeForUserCompletion;
-(void)insertCompletion:(id)arg1 forPartialWordRange:(NSRange)arg2 movement:(long long)arg3 isFinal:(char)arg4 ;
-(char)readSelectionFromPasteboard:(id)arg1 type:(id)arg2 ;
@end

