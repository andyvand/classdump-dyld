/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@class NSFont;

@interface NSDisplayFontBinder : NSBinder {

	NSFont* _originalFont;

}
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)_pluginProtocol;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(void)_init;
-(void)_connectionWasEstablished;
-(char)isBindingReadOnly:(id)arg1 ;
-(id)availableBindings;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)_dealloc;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)_isBooleanBinding:(id)arg1 ;
-(id)updateInvalidatedFont:(id)arg1 forObject:(id)arg2 ;
-(id)_valueForBindingWithResolve:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 ;
-(id)_availableBindingsWithFontBindingsFiltered:(id)arg1 ;
-(id)_fontFromBindingsWithMode:(_NSKeyValueCodingControllerModeType)arg1 referenceFont:(id)arg2 fallbackFont:(id)arg3 ;
-(id)_adjustFontOfObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 triggerRedisplay:(char)arg3 compareDirectly:(char)arg4 toFont:(id)arg5 ;
-(char)_isAnyFontBindingBoundToController:(id)arg1 ;
@end

