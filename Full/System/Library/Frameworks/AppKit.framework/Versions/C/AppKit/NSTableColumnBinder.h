/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewStateBinder.h>

@interface NSTableColumnBinder : NSViewStateBinder
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
-(char)isBindingReadOnly:(id)arg1 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)tableColumn:(id)arg1 didChangeToWidth:(double)arg2 ;
-(void)_updateTableColumn:(id)arg1 withWidth:(id)arg2 ;
-(char)_shouldProcessObservations;
@end

