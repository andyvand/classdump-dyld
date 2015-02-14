/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/_NSValueBinderPlugin.h>

@class NSDecimalNumber;

@interface _NSTextFieldPlugin : _NSValueBinderPlugin {

	NSDecimalNumber* _originalMinValue;
	NSDecimalNumber* _originalMaxValue;

}
-(void)dealloc;
-(char)conditionalBehaviorOffByDefault:(id)arg1 ;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(char)canIgnoreSettingMinAndMaxForObject:(id)arg1 ;
-(char)canSupportMinAndMaxForObject:(id)arg1 ;
-(void)storeMin:(char)arg1 andMax:(char)arg2 ofObject:(id)arg3 ;
-(char)updateCellOrControl:(id)arg1 forMinValue:(id)arg2 ;
-(char)updateCellOrControl:(id)arg1 forMaxValue:(id)arg2 ;
-(char)needsDelegate;
-(void)showValue:(id)arg1 inObject:(id)arg2 ;
-(char)acceptsStyleChanges;
-(id)editingColorAdjustableObject:(id)arg1 ;
-(id)objectMechanismsRequired;
-(Class)_valueClass:(id)arg1 ;
@end

