/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/_NSSelectionBinderPlugin.h>

@class NSDecimalNumber;

@interface _NSComboBoxPlugin : _NSSelectionBinderPlugin {

	NSDecimalNumber* _originalMinValue;
	NSDecimalNumber* _originalMaxValue;

}
-(void)dealloc;
-(char)prefersEnabledOverEditable:(id)arg1 ;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(char)needsAction;
-(unsigned long long)allowedValueBindingMask;
-(char)canPopulateWithPlaceholders;
-(char)canIgnorePopulatingObject:(id)arg1 ;
-(char)canSupportMinAndMaxForObject:(id)arg1 ;
-(void)storeMin:(char)arg1 andMax:(char)arg2 ofObject:(id)arg3 ;
-(char)updateCellOrControl:(id)arg1 forMinValue:(id)arg2 ;
-(char)updateCellOrControl:(id)arg1 forMaxValue:(id)arg2 ;
-(char)needsDelegate;
-(void)showValue:(id)arg1 inObject:(id)arg2 ;
-(id)objectMechanismsRequired;
-(Class)_valueClass:(id)arg1 ;
-(void)removeAllContentObjectsInCellOrControl:(id)arg1 ;
-(void)addContentObject:(id)arg1 isPlaceholder:(char)arg2 insertsNullPlaceholder:(char)arg3 value:(id)arg4 index:(long long)arg5 cellOrControl:(id)arg6 ;
@end

